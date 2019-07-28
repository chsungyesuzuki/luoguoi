#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int h = 60 - b + d;
	double j = h / 60;
	int g = floor(j);
	int f = h - g * 60;
	int e = c - a - 1 + g;
	cout << e << " " << f;
	return 0;
}
