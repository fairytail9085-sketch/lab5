#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
const int MAX = 50;
struct MaTran {
	int arr[MAX][MAX];
	int dong;
	int cot;
};
void nhapMaTran(MaTran& a);
void xuatMatTran(MaTran a);
bool docMaTran(MaTran& a, const char* fileName);
bool luuMaTran(MaTran a, const char* fileName);
int tong(MaTran a);
int demDuong(MaTran a);
int max(MaTran a);