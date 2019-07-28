#include <iostream>
using namespace std;
struct u {
	int b[10005];
	u(){
		for(int i=1;i<=10002;i++){
			b[i]=i;
		}
	}
	int a(int x){
		if(b[x]==x){
			return x;
		}
		b[x]=a(b[x]);
		return b[x];
	}
	int i(int x,int y){
		return a(x)==a(y);
	}
	void in(int x,int y){
		b[a(x)]=a(y);
	}
};
int main(){
	int m,n,xi,yi,zi;
	u un;
	cin>>n>>m;
	for(int i;i!=m;i++){
		cin>>zi>>xi>>yi;
		if(zi==2){
			if(un.i(xi,yi)){
				cout<<'Y'<<"\n";
			}
			else{
				cout<<'N'<<"\n";
			}
		}
		else{
			un.in(xi,yi);
		}
	}
	return 0;
}
