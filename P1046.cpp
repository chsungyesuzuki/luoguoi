#include <iostream>
using namespace std;

int main()
{
	int apples[10];
	int tall,c;
	cin>>apples[0]>>apples[1]>>apples[2]>>apples[3]>>apples[4]>>apples[5]>>apples[6]>>apples[7]>>apples[8]>>apples[9];
	cin>>tall;
	for(int i=0;i!=10;i++){
		if(apples[i]<=tall+30){
			c++;
		}
	}
	cout<<c;
	return 0;
}
