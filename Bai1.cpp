#include <iostream>
using namespace std;
struct PhanSo {
	int TuSo;
	int MauSo;
};
void NhapPS(PhanSo &x)
{
	cin >> x.TuSo >> x.MauSo;
}
void MaxPS(PhanSo x, PhanSo y)
{
	float a, b;
	a = float(x.TuSo) / x.MauSo;
	b = float(y.TuSo) / y.MauSo;
	if (a > b)
	{
		cout << "Phan So " << x.TuSo << " / " << x.MauSo << " la phan so lon nhat." << endl;
	}
	else cout << "Phan So " << y.TuSo << " / " << y.MauSo << " la phan so lon nhat." << endl;
}
int UCLN(int x, int y) {
	if (y == 0) return x;
	return UCLN(y, x % y);
}
void TinhToan(PhanSo x, PhanSo y) {
	if (x.MauSo == 0 || y.MauSo == 0)
		cout << "Khong thoa yeu cau MauSo khac 0";
	else
	{
		int c, d, e, f, g, h, i, k, z, l, m, n;
		c = x.TuSo * y.TuSo;
		d = x.MauSo * y.MauSo;
		z = UCLN(c, d);
		c /= z;
		d /= z;
		if (c % d == 0) cout << c / d << endl;
		else cout << "Tich la " << c << "/" << d << endl;

		e = x.TuSo * y.MauSo;
		f = x.MauSo * y.TuSo;
		l = UCLN(e, f);
		e /= l;
		f /= l;
		if (e % f == 0) cout << e / f << endl;
		else cout << "Thuong la " << e << "/" << f << endl;

		g = x.TuSo * y.MauSo + y.TuSo * x.MauSo;
		h = x.MauSo * y.MauSo;
		m = UCLN(c, d);
		g /= m;
		h /= m;
		if (g % h == 0) cout << "Tong la " << g / h << endl;
		else if (h < 0) {
			g = -g;
			h = -h;
			cout << "Tong la " << g << "/" << h << endl;
		}
		else cout << "Tong la " << g << "/" << h << endl;

		i = x.TuSo * y.MauSo - y.TuSo * x.MauSo;
		k = x.MauSo * y.MauSo;
		n = UCLN(c, d);
		i /= n;
		k /= n;
		if (i % k == 0) cout << "Hieu la " << i / k << endl;
		else cout << "Hieu la " <<  i << "/" << k << endl;
	}
}
int main()
{   PhanSo x, y;
	NhapPS(x);
	NhapPS(y);
	MaxPS(x, y);
	TinhToan(x, y);
	return 0;
}