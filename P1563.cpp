#include <cstdio>
#include <iostream>
#include <string>
int main(){
	int n,m,now=0;
	int where[100005];
	std::string job[100005];
	scanf("%d%d",&n,&m);
	for(int i=0;i!=n;i++){
		scanf("%d",&where[i]);
		std::cin>>job[i];
	}
	for(int i=1;i<=m;i++){
		int ai,si;
		scanf("%d%d",&ai,&si);
		ai=ai xor where[now];
		if(ai){
			now=(now+si)%n;
		}
		else{
			now=(now-si+n)%n;
		}
	}
	std::cout<<job[now];
	return 0;
}
