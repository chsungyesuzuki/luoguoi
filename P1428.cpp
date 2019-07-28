#include <cstdio>
#include <iostream>
using namespace std;
int a[105];
int main(){
	int cnt,n;
	scanf("%d",&n);
	for(int i=0;i!=n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i!=n;i++){
		for(int j=0;j!=i;j++){
			if(a[j]<a[i]){
				cnt++;
			}
			//cerr<<"main():i="<<i<<";j="<<j<<";a[i]="<<a[i]<<";a[j]="<<a[j]<<"\n";
		}
		printf("%d ",cnt);
		cnt=0;
	}
	putchar('\n');
	return 0;
}
