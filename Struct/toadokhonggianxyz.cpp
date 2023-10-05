#include <stdio.h>
#include <math.h>
	struct ToaDo {
		float x;
		float y;
		float z;
	};
	
	struct ToaDo nhapToaDo () {
		struct ToaDo td;
			scanf("%f%f%f",
			&td.x,
			&td.y,
			&td.z
			);
		return td;
	}
	
	void hienThiToaDo (struct ToaDo td,int d) {
		printf("(%.*f, %.*f, %.*f)\n",d,td.x, d,td.y, d,td.z);	
	}
	
	double tinhKhoangCach (struct ToaDo vecto1, struct ToaDo vecto2) {
		return sqrt((vecto1.x - vecto2.x) * (vecto1.x - vecto2.x) + (vecto1.y - vecto2.y) * (vecto1.y - vecto2.y) + (vecto1.z - vecto2.z) * (vecto1.z - vecto2.z));
	}
	
	int main () {
		struct ToaDo vecto1 = nhapToaDo ();
		struct ToaDo vecto2 = nhapToaDo ();
		hienThiToaDo(vecto1,2);
		hienThiToaDo(vecto2,2);
		printf("%.*lf",2,tinhKhoangCach(vecto1,vecto2));
		return 0;
	}
