#include <cstdio>
#include <cstring>
int main(){
	int l,n,pos[5005];
	memset(pos,0,sizeof(pos));
	scanf("%d%d",&l,&n);
	if(n==0){
		printf("0 0\n");
		return 0;
	}
	for(int i=0;i!=n;i++){
		int k;
		scanf("%d",&k);
		pos[k]++;
	}
	for(int i=(l+1)/2;i>=1;i--){
		int dj=l-i+1;
		if(pos[i]){
			printf("%d",i);
			break;
		}
		else if(pos[dj]){
			printf("%d",l-dj+1);
			break;
		}
	}
	putchar(' ');
	for(int i=1;i<=(l+1)/2;i++){
		int dj=l-i+1;
		if(pos[i]){
			printf("%d",l-i+1);
			break;
		}
		else if(pos[dj]){
			printf("%d",dj);
			break;
		}
	}
	putchar('\n');
	return 0;
}
