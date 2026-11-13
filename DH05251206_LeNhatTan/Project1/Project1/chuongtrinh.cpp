#include"thuvien.h"
int main() {
	MaTran a;
	nhapMaTran(a);
	//docMaTran(a, "matran.txt");
		cout << "Ma tran vua nhap la: ";
		xuatMatTran(a);
		/*cout << "\nTong cac gia tri la: " << tong(a) << endl;
		cout << "Gia tri lon nhat la: " << max(a) << endl;*/
		if (luuMaTran(a, "matran.txt"))
			cout << "Luu thanh cong";
		else
			cout << "Luu khong thanh cong";
		cout << endl;
		return 0;
}