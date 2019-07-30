#include <cstdio>
using namespace std;
int main(){
	int l,m,cnt,a[10010];
	scanf("%d%d",&l,&m);
	for(int i=0;i!=l+1;i++){
		a[i]=1;
	}
	for(int i=0;i!=m;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		for(int j=l;j<=r;j++){
			a[j]=0;
		}
	}
	for(int i=0;i!=l+1;i++){
		if(a[i]==1){
			cnt++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}
