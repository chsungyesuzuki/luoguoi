#include <cstdio>
using namespace std;
struct uni{
	int a[5005];
	uni(){
		for(int i=0;i!=5000;i++){
			a[i]=i;
		}
	}
	int sci(int x){
		if(a[x]==x){
			return x;
		}
		else{
			a[x]=sci(a[x]);
			return a[x];
		}
	}
	void insert(int x,int y){
		a[sci(x)]=sci(y);
	}
	bool search(int x,int y){
		return sci(x)==sci(y);
	}
};
int main(){
	int n,m,p,j,k;
	uni u;
	scanf("%d%d%d",&n,&m,&p);
	for(int i=0;i!=m;i++){
		scanf("%d%d",&j,&k);
		u.insert(j,k);
	}
	for(int i=0;i!=p;i++){
		scanf("%d%d",&j,&k);
		if(u.search(j,k)){
			printf("%s\n","Yes");
		}
		else{
			printf("%s\n","No");
		}
	}
	return 0;
}
