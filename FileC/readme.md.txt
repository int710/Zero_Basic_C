		CÁC KIẾN THỨC CƠ BẢN KHI THAO TÁC VỚI FILE TRONG C

/// Đường dẫn (PATH): 
	1. Đường dẫn tuyệt đối: liệt kê đầy đủ gốc rễ từ ổ nào đĩa > folder > file
	2. Đường dẫn tương đối:	xét vị trí tại thư mục chương trình đang chạy và tìm đến tệp/file
/// Chế độ mở file:
	1. Write: "w"   ghi		nếu file chưa tồn tại, tự create file, đã tồn tại ghi đè file cũ
	2. Read: "r"    đọc		nếu file chưa tồn tại: trả về NULL
	3. append: "a"  ghi vào cuối  nếu file chưa tồn tại; tạo file mới, nếu tồn tại ghi vào cuối

/// Kết hợp:
	1. wr
