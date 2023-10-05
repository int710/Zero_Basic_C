KHAI BÁO THƯ VIỆN <string.h>

// Các kiểu nhập với string
	1. scanf("%s",&str); không nhập được dấu cách vd: "Viet Nam" return "Viet";
	2. gets(str); // Nhập thoải mái dù có nhiều hơn khai báo nhưng tràn bộ nhớ =))
	3. fgets(f,10,FILE* PATH) chỉ nhận tối đa phần tử đã khai báo,làm việc với file.
// Các hàm có sẵn: 
	1. strlen(str) - đếm độ dài của chuỗi
	2. struper(str) - biễn chữ chuỗi có chữ thường thành chữ in hoa
	3. strlwr(str) - biễn chữ chuỗi có chữ in hoa thành chữ thường
	4. strcpy(str1,str2) - coppy nội dunng chuỗi 1 cho chuỗi 2.

// Bộ nhớ đệm: fflush(stdin);