#include <cstdio>
#include <iostream>
int main(){
	int n,m,dx[8]={-1,-1,-1,0,0,1,1,1},dy[8]={-1,0,1,-1,1,-1,0,1};
	char chessPot[105][105],parsed[105][105];
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			char p;
			std::cin>>p;
			chessPot[i][j]=p;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(chessPot[i][j]=='*'){
				parsed[i][j]='*';
			}
			else if(chessPot[i][j]=='?'){
				int m=0;
				for(int k=0;k!=8;k++){
					if(chessPot[i+dx[k]][j+dy[k]]=='*'){
						m++;
					}
				}
				parsed[i][j]=m+'0';
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			putchar(parsed[i][j]);
		}
		putchar('\n');
	}
	putchar('\n');
	return 0;
}
