# Xoay model voxel

Demo có tự xoay và kéo chuột/cảm ứng để xoay ObjectRoot. Camera không orbit và không đổi vị trí. Tải lại level trả ObjectRoot về pose nguồn, sau đó bắt đầu tự xoay lại. Không thêm UI màn hình.

## Đối chiếu game gốc

- `ObjectManager.idleRotationAxis.up` ở world space = (0, 0.48480955, 0.87461970). Đây là trục nghiêng, không phải Vector3.up. Trục được tính qua hierarchy transform nguồn.
- `GetIdleRotationSpeed` chọn tốc độ theo số shooter đang bắn. Demo chỉ voxel nên dùng nhánh không có shooter bắn: slider đóng gói có giá trị 20, snapMultiplier 1 → 20 độ/giây. Các giá trị slider có thể thay đổi theo phiên/config của game gốc; đây là mặc định asset trích được, không phải giá trị đã quan sát từ server.
- `Update`: currentSpeed = Lerp(currentSpeed, targetSpeed, deltaTime); sau đó ObjectRoot.Rotate(idleAxis * currentSpeed * deltaTime, Space.World), đúng overload Euler vector của nguồn.
- Khi xoay tay: dừng idle; ngang = Clamp(-deltaX * 0.375, -5, 5), dọc = Clamp(deltaY * 0.375, -5, 5). Lần lượt Rotate quanh camera.up và camera.right, Space.World. Không nhân thêm deltaTime vào pointer delta.
- Khi thả tay: currentSpeed = 0 rồi tăng dần về tốc độ idle. Demo không có shooter nên không mô phỏng trạng thái giữ nguyên model khi đang có mục tiêu bắn.
- Source có intro tùy cờ remote: pre-rotate -108.0000076°, quay bù trong 1 giây với Ease.OutQuad. Demo có trường Play Source Intro trong Inspector, mặc định tắt vì chưa xác định cờ remote của phiên tham khảo. Bật trước khi Play để xem.

## Thao tác

Mở CubeLandVoxelOnlyDemo và Play. Model tự xoay; giữ chuột trái và kéo trong Game view, hoặc kéo một ngón tay trên thiết bị. Thả để tự xoay trở lại. Rotate Model trong CubeLandDemoController bật/tắt tính năng khi nạp level; mặc định bật. Không gộp voxel thành mesh.

## Bằng chứng

- Data/rotation_evidence.json: ObjectManager, transform trục và CreativeSlider nguồn.
- Unity Demo/Resources/CubeLandLevels/RotationSetup.json: các giá trị phục hồi.
- Native ObjectManager.Update (0x102D0B8), RotateObjectManually (0x102D568), GetIdleRotationSpeed (0x102A878), PrepareLevelStartSpin (0x102C464).
