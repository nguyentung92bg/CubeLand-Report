# Ánh sáng voxel

Đã đối chiếu asset game Cube Land 0.6.3 và chương trình GLES được đóng trong shader `Rotatelab/Voxel`.

## Sai khác của demo cũ

- Material từng màu dùng URP/Lit, thiếu `_BaseMap` và `_BumpMap` của voxel.
- Đèn demo intensity 1.2 và Euler (45,-25,0) là giá trị tạm, không phải giá trị nguồn.
- OBJ không giữ tangent và vertex color. Shader nguồn nhân texture × màu voxel × vertex color, dùng tangent-space normal map.

## Bản chỉnh

- Shader `TungNV/CubeLand/VoxelReference` được dựng lại theo GLSL đã trích: normal map, half-Lambert `(N·L)*0.5+0.5`, smoothstep ramp, highlight/shade tint, SH ambient, specular và rim theo công thức nguồn.
- `_RampThreshold=0.75`, `_RampSmoothing=0.35`, `_HColor=(0.87,0.87,0.87)`, `_SColor=(0.3,0.3,0.3)`, roughness 0.5 và các giá trị specular/rim từ Mat_Base_Voxel.
- Gán texture Tex_Base_Voxel và Tex_Normal_Voxel đã trích từ APK, thay vì màu trơn URP/Lit.
- Đèn Directional trắng, intensity 1, shadows None. Quaternion world (0.7426734567,-0.2119112015,0.2396097183,0.5883170366); parent nguồn identity.
- RenderSettings theo scene level1: Trilight, sky trắng, equator (0.94901961,0.60214692,0.42705882), ground đen, intensity 1, fog tắt.
- Mesh voxel native 24 vertices, 24 normals/tangents/colors được dựng lại từ nguồn và dùng chung giữa các object voxel. Vẫn một GameObject mỗi ô, không gộp mesh của cả level. Vertex color kiểu byte được chuẩn hóa về 0–1.
- Không đổi global ProjectSettings hoặc material ngoài CubeLandReference/Demo. Camera, tọa độ level và UI voxel-only được giữ.

Đây là shader HLSL phục dựng để chạy trên URP của project đích, không phải shader source editor gốc. Chưa xác nhận khớp từng pixel với thiết bị chạy APK; pipeline màu, backend đồ họa và background có thể tạo sai khác còn lại. Scene view dùng lighting riêng của editor nên nên so sánh trong Game view.

## Bằng chứng

- Data/lighting_evidence.json: Light, parent transforms, RenderSettings và tên shader nguồn.
- Data/voxel_shader_blob_9_0.txt: GLSL shader nguồn đã giải nén; fragment đầu khoảng dòng 244–347.
- Unity Data/VoxelMeshSource.json: dữ liệu geometry native trước chuẩn hóa byte color.
- Unity Demo/Data/LightingReceiptV2.json: kết quả apply và kiểm tra shader.

Chạy lại trong Unity: Tools > TungNV > Cube Land > Apply Source Voxel Lighting.
