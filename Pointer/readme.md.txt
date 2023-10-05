CON TRỎ (POINTER) LÀ BIẾN ĐẶC BIỆT DÙNG ĐỂ LƯU "ĐỊA CHỈ" LƯU TRỮ, KHÔNG PHẢI LƯU GIÁ TRỊ NHƯ THÔNG THƯỜNG

- Khai báo: INT* P; // khai báo con trỏ p;
p = &n; // lưu địa chỉ của biến n;
*p để gọi tới gia trị của con trỏ p (n);
		
		MẢNG ARRAY THỰC CHẤT LÀ 1 POINTER QUẢN LÍ CHUỖI Ô NHỚ LIỀN KỀ NHAU

arr[{0},{1},{2},{3}].
*arr[arr+i] là giá trị từng ô nhớ (giá trị phần tử của mảng)

		&arr[i] ~ arr+i 			<=> 			i+arr ~ &i[arr];

