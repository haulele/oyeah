#include <iostream>
using namespace std;
struct Mang {
	int Songuyen[100];
	int Sopt;
};
void Nhapmang(Mang &x) {
	cin >> x.Sopt;
	for (int i = 0; i < x.Sopt; i++) {
		cin >> x.Songuyen[i];
	}
}
void Xuatmang(Mang x) {
	for (int i = 0; i < x.Sopt; i++) {
		cout << x.Songuyen[i];
	}
}
int main() {
	Mang x;
	Nhapmang(x);
	Xuatmang(x);
	return 0;
}