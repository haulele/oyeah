#include <iostream>
#include <cmath>;
#include <iomanip>
using namespace std;
struct Toado {
	float Hoanhdo;
	float Tungdo;
};
void Setdiem(Toado &x, float z = 0, float y = 0) {
	x.Hoanhdo = z;
	x.Tungdo = y;
}
void Nhapdiem(Toado x[], int &n) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		if (i % 3 == 0) {
			cin >> x[i].Hoanhdo >> x[i].Tungdo;
			Setdiem(x[i], x[i].Hoanhdo, x[i].Tungdo);
		}
		else if (i % 3 == 1) {
			cin >> x[i].Hoanhdo;
			Setdiem(x[i], x[i].Hoanhdo);
		}
		else if (i % 3 == 2)
			Setdiem(x[i]);
	}
}
float SpaceCounting(float x, float y, float z, float t) {
	float a = sqrt((x - z)*(x-z) + (y - t)*(y - t));
	return a;
}
void MaxSpace(Toado x[], int n) {
	int Maxpoint1 = 0, Maxpoint2 = 1;
	float MaxValue = SpaceCounting(x[0].Hoanhdo, x[0].Tungdo, x[1].Hoanhdo, x[1].Tungdo);
	for (int i = 1; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (SpaceCounting(x[i].Tungdo, x[i].Hoanhdo, x[j].Tungdo, x[j].Hoanhdo) > MaxValue) {
				Maxpoint1 = i;
				Maxpoint2 = j;
			}
		}

	} cout << Maxpoint1 << " " << Maxpoint2;
}
int main() {
	int n;
	Toado x[100];
	Nhapdiem(x, n);
	MaxSpace(x, n);
	return 0;
}