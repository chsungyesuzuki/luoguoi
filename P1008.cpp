#include <cstdio>
using namespace std;
int a[10];
void cf(int x){
	a[x%10]++;
	a[x/10%10]++;
	a[x/100]++;
}
bool check(int x,int y,int z){
	cf(x);
	cf(y);
	cf(z);
	for(int i=1;i!=10;i++){
		if(a[i]==0){
			return 0;
		}
	}
	return 1;
}
void empty(){
	for(int i=0;i!=10;i++){
		a[i]=0;
	}
}
int main(){
	int x,y,z;
	for(x=123;x!=330;x++){
		y=2*x;
		z=3*x;
		if(check(x,y,z)){
			printf("%d %d %d\n",x,y,z);
		}
		empty();
	}
	putchar('\n');
	return 0;
}
