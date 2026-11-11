# Camera và nguồn data voxel

## Camera game gốc

Đối chiếu Camera `Main Camera` trong scene đóng gói `level1`:

- Orthographic: true; Orthographic Size: 5. FOV lưu trong asset là 30 nhưng không quyết định hình chiếu khi Orthographic bật.
- World position: (0, 8.6099996567, -5.0999999046).
- Quaternion: (0.5372996330, 0, 0, 0.8433914781), tương đương Euler X khoảng 65 độ.
- Near/Far: 0.3 / 30; viewport toàn màn hình; HDR/MSAA tắt.
- Camera không có parent. CameraManager.Awake lấy Camera.main và đăng ký sự kiện kéo; Initialize không thực hiện fit bounds.

Demo trước đây dùng Perspective FOV 35, orbit và fit theo voxel + shooter nên không đúng camera nguồn. Demo voxel-only đã bỏ tự fit/orbit và dùng camera phía trên. Giữ nguyên rootPosition, rootLocalEulerAngles, voxelizedObjectCenterPosition và scale của từng level. Voxel vẫn là từng GameObject riêng từ pool; không gộp mesh. Mặc định chỉ bật renderer depth 0 như khởi tạo game gốc.

Nền và shader URP chuyển đổi vẫn khác game; demo chỉ hiển thị voxel, không dựng background, UI, shooter hoặc dock. Tỉ lệ khung hình nên đặt portrait giống thiết bị để so sánh bố cục; chưa có bằng chứng về một tỉ lệ thiết bị cố định duy nhất.

## Công cụ tạo data

Xác nhận được pipeline dữ liệu riêng của Rotatelab:

- `Rotatelab.SoLevelData` là ScriptableObject có PreferBinarySerialization, Version/contentHash, LayerData và các thông số pose/scale.
- `LayerData` chứa nhóm vị trí voxel theo màu/depth; runtime ObjectManager tạo voxel từ dữ liệu này thay vì load một mesh gộp.
- `SoLevelData.ParseJson`, `ParseLayerData`, `ParseVoxelPositions`, `ParseSpecialObjects`, `ParseBlasterData` chứng minh có đường nhập JSON sang cấu trúc level của game.
- Có lớp `Rotatelab.EditorTools.LightBackgroundVoxelReviewLayout`, context menu `Refresh Review Layout`, các trường groupColumns/groupSpacing/voxelSpacing và LayoutVoxels. Đây là công cụ bố trí các cụm voxel để review màu, không đủ chứng minh nó là editor tạo model hoặc level.
- Có `Rotatelab.EditorScripting.EditorHelpers`, các thuộc tính TriInspector và `LevelMovePathRecorder`. Recorder ghi đường chơi/placement, không phải công cụ vẽ voxel.

Chưa tìm thấy bằng chứng xác định MagicaVoxel, Qubicle, plugin voxelizer hoặc tên một tool authoring bên ngoài trong phần assembly/runtime và asset đã trích. Không thể kết luận họ không sử dụng: mã UnityEditor, file .vox/.blend, project nguồn và công cụ nội bộ có thể không được đóng vào APK. Tên trường `voxelizedObject*` chỉ chứng minh dữ liệu đã được voxel hóa, không xác định công cụ thực hiện.

## Bằng chứng local

- `Data/camera_authoring_evidence.json`: camera serialized, hierarchy, CameraManager và tên script có liên quan.
- `Results/Run-20261109-095015-15c6c9/dump.cs`: SoLevelData khoảng dòng 375060; LightBackgroundVoxelReviewLayout dòng 411803; CameraManager dòng 402295.
- Native pseudo-C: `0100b554_Rotatelab_Scripts_CameraManager__Awake_ffb554.c`, `0100b770_Rotatelab_Scripts_CameraManager__Initialize_ffb770.c`.

Các kết luận trên dựa vào APK tham khảo và dump local, không phải project editor gốc đã khôi phục đầy đủ.
