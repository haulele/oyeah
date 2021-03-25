#include <iostream>
#include <string>
using namespace std;
struct PhanSo
{
	char Hoten[20];
	float Diemtoan;
	float Diemvan;
};
typedef PhanSo PS;
void nhap(PS &x) {
	cin >> x.Diemtoan;
	cin >> x.Diemvan;
	cin.ignore();
	cin.getline(x.Hoten, 20);
}
void xuat(PS x) {
	cout << x.Hoten << endl;
	float a;
	a = (x.Diemtoan + x.Diemvan ) / 2;
	cout << a;
}
int main() {
	PS x;
	nhap(x);
	xuat(x);
}