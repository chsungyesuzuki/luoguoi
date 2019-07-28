#include <iostream>
#include <cstring>
using namespace std;
int a[10];
void cf(int x){
	int per=x%10;
	int da=x/10%10;
	int h=x/100;
	a[per]++;
	a[da]++;
	a[h]++;
	//cerr<<"cf(int):h="<<h<<";da="<<da<<";per="<<per<<"\n";
}
bool check(int x,int y,int z){
	cf(x);
	cf(y);
	cf(z);
	for(int i=1;i!=10;i++){
		//cerr<<"check(int,int,int):x="<<x<<";i="<<i<<";a[i]="<<a[i]<<"\n";
		if(a[i]==0){
			return 0;
		}
	}
	return 1;
}
void empty(){
	//memset(a,0,10);
	//for(int i=0;i!=10;i++){
	//	cerr<<"empty():i="<<i<<";a[i]="<<a[i]<<"\n";
	//}
	for(int i=0;i!=10;i++){
		a[i]=0;
	}
}
int main(){
	int a,b,c,x,y,z,cnt;
	cin>>a>>b>>c;
	//cin>>x;
	for(x=123;x!=330;x++){
		if((!(x*b%a))||(!(x*c%a))){
			y=x*b/a;
			z=x*c/a;
			if(check(x,y,z)){
				cout<<x<<" "<<y<<" "<<z<<"\n";
				cnt++;
			}
			empty();
		}
	}
	if(!cnt){
		cout<<"No!!!"<<"\n";
	}
	return 0;
}
