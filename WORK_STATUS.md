# Cube Land — báo cáo 09/11/2026

Nguồn: D:\APK Decompiler\IL2CPP Workbench\Results\Run-20261109-095015-15c6c9
APK: Cube Land 0.6.3, com.rotatelab.cubeblast, ARMv7, metadata39.

## Đầu ra

10 trang HTML offline theo cấu trúc FoodiePop. Không sửa dữ liệu FoodiePop hoặc MatchFactory.
850 bản ghi SoLevelData, 170 bundle; 850 ảnh level.
850 tham chiếu SoLevelsData. Đã ánh xạ đủ 850 level theo SoLevelsData và catalog.bin. Level bắt đầu 1; Index bắt đầu 0. ID B… tiếp tục dùng tra cứu asset.
7 booster có cấu hình; 31 bản ghi IAP/offer; daily odd/even và bảng nhiệm vụ/tuần.
Các bảng leaderboard gồm bot configuration, tier và reward asset được phân biệt bằng serialized file/path ID.
6729 method tập trung được lập index; Evidence/Native lưu bản sao pseudo-C đọc được.

## Hạn chế

Ghidra timeout1800s; 196706/196925 hàm xuất được, 219 thất bại.
20 lỗi asset; SeasonPassSo chưa decode. Không có dữ liệu live/runtime.
Giá IAP tiền thật chưa có. Không gán tên payload analytics từ field C#.
Phân tích hình khối trong trình xem chỉ thể hiện LayerData voxel thường, không mô phỏng collider/đạn/special objects.

## Tái tạo

1. Chạy Scripts/extract_assets.py với Python bundled, UnityPy trong Analysis/FoodiePop/.deps.
2. node Scripts/extract_code.cjs
3. Chạy Scripts/map_level_indices.py, rồi node Scripts/build_report.cjs
4. node Scripts/verify_report.cjs

Các chuỗi trường giống credential được che trong evidence JSON. Chưa gọi dịch vụ bên ngoài.

## Shooter đặc biệt trong doc level — local

Đã bổ sung cột loại/trạng thái theo từng level, bộ lọc kết hợp số level/index, glossary kèm số level và mốc đầu tiên; dialog có thống kê, ID, loại, thuộc tính, HP băng, màu thứ hai, Pilot và ID shooter lồng trong Generator. Tách loại trong code chưa thấy trong level (Sword/Trap/Color Barrel). Manifest Data/shooter_specials.json. Các bộ kiểm tra report, liên kết shooter và shooter đặc biệt đã PASS; chưa cập nhật GitHub/Pages.

