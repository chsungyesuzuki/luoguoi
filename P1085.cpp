#include <iostream>
using namespace std;

int main()
{
	int a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6,a7,b7,d1,d2,d3,d4,d5,d6,d7,d,t;
	cin >> a1 >> b1;
	d1=a1+b1;
	if(d1>8){
		d=1;
		t=d1;
	}
	cin >> a2 >> b2;
	d2=a2+b2;
	if(d2>t){
		d=2;
		t=d2;
	}
	cin >> a3 >> b3;
	d3=a3+b3;
	if(d3>t){
		d=3;
		t=d3;
	}
	cin >> a4 >> b4;
	d4=a4+b4;
	if(d4>t){
		d=4;
		t=d4;
	}
	cin >> a5 >> b5;
	d5=a5+b5;
	if(d5>t){
		d=5;
		t=d5;
	}
	cin >> a6 >> b6;
	d6=a6+b6;
	if(d6>t){
		d=6;
		t=d6;
	}
	cin >> a7 >> b7;
	d7=a7+b7;
	if(d7>t){
		d=7;
	}
	cout << d;
	return 0;
}
