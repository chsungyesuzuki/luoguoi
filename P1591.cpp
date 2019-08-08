#include <cstdio>
#include <cstring>
#include <algorithm>
struct High{
	int value[2600],length;
	High(int rvalue=0){
		memset(value,0,sizeof(value));
		length=1;
		for(;rvalue>0;length++){
			value[length]=rvalue%10;
			rvalue/=10;
		}
		length--;
	}
	int get(int index){
		return value[index];
	}
	void flatten(int newLength){
		length=newLength;
		for(int i=1;i<=length;i++){
			value[i+1]+=value[i]/10;
			value[i]%=10;
		}
		for(;value[length]==0;){
			length--;
		}
	}
	High star(int factorInteger){
		High answer;
		for(int i=1;i<=length;i++){
			answer.value[i]=value[i]*factorInteger;
		}
		answer.flatten(length+20);
		return answer;
	}
};
High getStairStar(int n){
	High answer (1);
	for(int i=2;i<=n;i++){
		answer=answer.star(i);
	}
	return answer;
}
int main(){
	int t=0;
	scanf("%d",&t);
	for(int i=0;i!=t;i++){
		int n=0,a=0,counter=0;
		scanf("%d%d",&n,&a);
		High stairStar=getStairStar(n);
		for(int j=1;j<=stairStar.length;j++){
			if(stairStar.get(j)==a){
				counter++;
			}
		}
		printf("%d\n",counter);
	}
	return 0;
}
