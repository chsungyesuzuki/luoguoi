#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int a,b,i,j,k;
	k=0;
	for(i=0;i!=12;++i){
		b=b+300;
		cin >> a;
		if(a>b){
			cout << -(i+1);
			return 0;
		}
		b=b-a;
		if(b>=100){
		    
			j=100*(floor((b-(b%100))/100));
			k=j+k;
			b=b-j;
		}
	}
	k=k*1.2;
	b=b+k;
	cout << b;
	return 0;
}
