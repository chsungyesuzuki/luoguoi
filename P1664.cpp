#include <cstdio>
int get(int x){
	if(x>=365) return 6;
	if(x>=120) return 5;
	if(x>=30) return 4;
	if(x>=7) return 3;
	if(x>=3) return 2;
	return 1;
}
int pow(int b,int e){
	int answer=1;
	for(int i=0;i!=e;i++) answer*=b;
	return answer;
}
int main(){
	int n,day=0,noday=0,score=0;
	scanf("%d",&n);
	for(int i=0;i!=n;i++){
		int k;
		scanf("%d",&k);
		if(k){
			if(noday){
				noday=pow(2,noday-1);
				day-=noday;
				if(day<0) day=0;
				noday=0;
			}
			score+=get(++day);
		}
		else noday++;
	}
	printf("%d\n",score);
	return 0;
}
