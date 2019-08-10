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
//O(n+1)
#include <cstdio>
int main(){
	int k,n;
	long long answer=0,last;
	scanf("%d",&k);
	for(n=1;true;n++){
		if((1+n)*n/2>k){
			n--;
			last=(k-(1+n)*n/2)*(n+1);
			break;
		}
	}
	for(int i=n;i>=1;i--){
		answer+=(n*2-i+1)*i/2;
	}
	answer+=last;
	printf("%lld\n",answer);
	return 0;
}
