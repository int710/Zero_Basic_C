VÀI ĐIỀU CƠ BẢN VỀ STRUCT

Ví dụ: Có một vấn đề là cần lưu trữ một dữ liệu về 1 cá nhân nào đó bao gồm ( Họ tên, Tuổi, Địa chỉ, Số  CCCD,...). Để giải quyết vấn đề trên ta dùng struct để định nghĩa

	struct {
		<KDL> hoTen;
		<KDL> namSinh;
		<KDL> gioiTinh;
		<KDL> diaChi;
		<KDL> soCCCD;
	}

Như vậy ta đã có được một cấu trúc để ghi lại thông tin về một cá nhân, với code C có thể biết đến là struct còn các ngôn ngữ khác có nhiều tên gọi khác như class, object.

	Example: struct {
			char hoTen[20];
			bool gioiTinh;
			char  namSinh;
			char diaChi[50];
			int  soCCCD;
		   } people; // people ở đây được hiểu đơn giản là biến tự định nghĩa biến này có dạng cấu tạo của struct trên 
	Example 2: struct people {
			char hoTen[20];
			bool gioiTinh;
			char  namSinh;
			char diaChi[50];
			int  soCCCD;
		   }; 
		định nghĩa struct có tên và đặt biến theo tên đó: struct people crush[10];


truy xuất, nhập, xuất làm việc với truct:
		strcpy(people.hoTen,"Ngan Xinh Gai");
		strcpy(people.namSinh,"24/11/2006");
		people.gioiTinh = false;

xuất :	printf("Ho va Ten: %s\n",people.hoTen);
		printf("Nam sinh: %s\n",people.namSinh);
		printf("Gioi tinh: %s", people.gioiTinh?"Nam":"Nu"); 	


