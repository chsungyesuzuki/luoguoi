#include <cstdio>
int main(){
	int k,cnt=0;
	long long answer=0;
	scanf("%d",&k);
	for(int n=0;true;n++){
		for(int i=0;i!=n;i++){
			answer+=n;
			cnt++;
			if(cnt==k){
				goto done;
			}
		}
	}
	done:
	printf("%lld\n",answer);
	return 0;
}
