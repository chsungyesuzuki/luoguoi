#include <cstdio>
#include <cstring>
int max(int a,int b){
	if(a>b){
		return a;
	}
	return b;
}
int m,n;
int main(){
	bool working[25][505];
	int time[25][25],search[25][25],arrange[405],worksort[25],lasttime[25],now=0;
	memset(worksort,0,25);
	memset(working,0,25*505);
	for(int i=0;i!=25;i++){
		lasttime[i]=1;
	}
	scanf("%d%d",&m,&n);
	for(int i=0;i!=m*n;i++){
		scanf("%d",&arrange[i]);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&search[i][j]);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			scanf("%d",&time[i][j]);
		}
	}
	do{
		int whichn=arrange[now];
		int whichm=++worksort[whichn];
		int whichmachine=search[whichn][whichm];
		int lastedtime=0;
		int ptr=0;
		for(ptr=lasttime[whichn];lastedtime<time[whichn][whichm];ptr++){
			if(working[whichmachine][ptr]){
				lastedtime=0;
			}
			else{
				lastedtime++;
			}
		}
		memset(working[whichmachine]+ptr-lastedtime,true,lastedtime);
		lasttime[whichn]=ptr;
		ptr=0;
		now++;
	}
	while(now!=m*n);
	int answer=0;
	for(int i=1;i<=n;i++){
		answer=max(answer,lasttime[i]-1);
	}
	printf("%d\n",answer);
}
