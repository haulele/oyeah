#include <iostream>
using namespace std;
struct Ngay
{
	int Date;
	int Month;
	int Year;
};
void Nhapngay(Ngay &x)
{
	cin >> x.Date >> x.Month >> x.Year;
}
void Nextday(Ngay x)
{
	if (x.Month == 4 || x.Month == 6 || x.Month == 9 || x.Month == 11)
	{
		if (x.Date == 30)
		{
			x.Date = 1;
			x.Month += 1;
		}
		else x.Date += 1;
	}
	else if (x.Month == 2)
	{
		if (x.Year % 400 == 0 || x.Year % 4 == 0 && x.Year % 100 != 0)
		{
			if (x.Date == 29)
			{
				x.Date = 1;
				x.Month += 1;
			}
			else x.Date += 1;
		}
		else {
			if (x.Date == 28)
			{
				x.Date = 1;
				x.Month += 1;
			}
			else x.Date += 1;
		}
	}
	else {
		if (x.Date == 31)
		{
			x.Date = 1;
			x.Month += 1;
		}
		else x.Date += 1;
	}
	if (x.Month == 13) {
		x.Month = 1;
		x.Year += 1;
	}
	cout << x.Date << " " << x.Month << " " << x.Year;
}
	


		
int main() {
	Ngay x;
	Nhapngay(x);
	Nextday(x);
	return 0;
}