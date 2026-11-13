#include "thuvien.h"
void nhapMaTran(MaTran& a)
{
	cout << "\n Nhap so dong: ";
	cin >> a.dong;
	cout << "\n Nhap so cot: ";
	cin >> a.cot;
	for(int i =0; i< a.dong;i++)
		for (int j = 0; j < a.cot; j++) {
			cout << "\n arr[" << i << "][" << j << "]=";
			cin >> a.arr[i][j];
		}
}
void xuatMatTran(MaTran a) {
	for (int i = 0; i < a.dong; i++){
		cout << endl;
		for (int j = 0; j < a.cot; j++)
			cout << a.arr[i][j] << "\t";
			
	}
}
bool docMaTran(MaTran& a, const char* fileName) {
	FILE *f;
	f = fopen(fileName, "r");
	if (f == NULL)
		return false;
	fscanf(f, "%d", &a.dong);
	fscanf(f, "%d", &a.cot);
	for (int i = 0; i < a.dong; i++)
		for (int j = 0; j < a.cot; j++)
			fscanf(f, "%d", &a.arr[i][j]);
	fclose(f);
	return true;
}
bool luuMaTran(MaTran& a, const char* fileName) {
	FILE *f;
	f = fopen(fileName, "w");
	if (f == NULL)
		return false;
	fprintf(f, "%d\t", &a.dong);
	fprintf(f, "%d\n", &a.cot);
	for (int i = 0; i < a.dong; i++)
		for (int j = 0; j < a.cot; j++)
			fprintf(f,"%d\t",a.arr[i][j]);
	fclose(f);
	return true;
}
int tong(MaTran a) {
	int sum = 0;
	for (int i = 0; i < a.dong; i++)
		for (int j = 0; j < a.cot; j++)
			sum += a.arr[i][j];
	return sum;
}
int demDuong(MaTran a) {
	int dem = 0;
	for (int i = 0; i < a.dong; i++)
		for (int j = 0; j < a.cot; j++)
			if (a.arr[i][j] > 0)
				dem++;
	return dem;
}
int max(MaTran a){
	int m = a.arr[0][0];
	for (int i = 0; i < a.dong; i++)
		for (int j = 0; j < a.cot; j++)
			if (a.arr[i][j] > m)
				m = a.arr[i][j];
	return m;
}
