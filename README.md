# Cube Land — Game Design Report

Bộ phân tích **Cube Land 0.6.3** từ dữ liệu APK và IL2CPP, cập nhật **09/11/2026**.

## Cách xem

1. Chọn **Code → Download ZIP**, rồi giải nén.
2. Mở **LevelDesign.html** hoặc **index.html** bằng trình duyệt.
3. Giữ nguyên cấu trúc thư mục. Báo cáo và trình xem voxel hoạt động ngoại tuyến.

## Nội dung

- 10 trang: Game Design, level, vật thể/cơ chế, booster, IAP, event/tiến trình, leaderboard, daily, analytics và nguồn.
- 850 bản ghi level, có ảnh và trình xem voxel với góc xoay/chiều sâu; hàng shooter, màu và lượng đạn.
- 7 booster và 31 bản ghi IAP/offer từ cấu hình.
- Dữ liệu JSON, các chunk JavaScript cho trình xem, ảnh và dẫn chứng metadata/pseudo-C.
- Kiểm tra: `Data/qa.json`; hướng dẫn tái tạo và phạm vi: `WORK_STATUS.md`.

## Giới hạn

ID B… dùng tra cứu asset theo bundle, chưa ánh xạ thành số màn trên UI. Hình voxel chỉ dựng LayerData thường, chưa mô phỏng vật thể đặc biệt, đạn và collider. Cấu hình máy chủ hoặc A/B test có thể thay đổi nội dung thực tế. Quyền lợi Season Pass chưa giải mã được.

Pseudo-C là kết quả suy luận; Ghidra đã timeout phân tích tự động sau 1.800 giây. Đây chưa phải project Unity hoặc source C# chạy được. Repository không chứa APK, binary game hay thư viện công cụ. Các trường chuỗi giống credential được che trong evidence JSON.
