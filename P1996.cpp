#include <cstdio>
#include <queue>
using namespace std;
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	queue<int> q;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	for(;q.size()>=1;){
		for(int j=1;j!=m;j++){
			int x=q.front();
			q.pop();
			q.push(x);
		}
		int y=q.front();
		printf("%d ",y);
		q.pop();
	}
	return 0;
}
