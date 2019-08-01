#include <cstdio>
#include <cstring>
#include <algorithm>
struct High{
	int value[2600],length;
	High(int rvalue=1){
		memset(value,0,sizeof(value));
		length=1;
		for(;rvalue>0;length++){
			value[length]=rvalue%10;
			rvalue/=10;
		}
		length--;
	}
	int &operator[](int index){
		return value[index];
	}
	void flatten(int newLength){//TODO:There is an unknown bug
		length=newLength;
		for(int i=1;i<=length;i++){
			value[i+1]=value[i+1]+value[i]/10;
			value[i]=value[i]%10;
		}
		for(;value[length]==0;){
			length--;
		}
	}
	High operator*(int factorInteger){
		High answer;
		for(int i=1;i<=length;i++){
			answer.value[i]=value[i]*factorInteger;
		}
		flatten(length+12);
	}
	void printToStdout(){
		for(int i=length;i>=1;i--){
			printf("%d",value[i]);
		}
	}
};
//void printHighToStdoutAndThenNewALineToPutSomethingElseMoreEasilySoYouDontHaveToWriteTwoLinesOfCodesEveryTime(High high){
//	high.printToStdout();
//	putchar('\n');
//}
High getStairStar(int n){
	High answer;
//	puts("awa");
//	printHighToStdoutAndThenNewALineToPutSomethingElseMoreEasilySoYouDontHaveToWriteTwoLinesOfCodesEveryTime(answer);
	for(int i=2;i<=n;i++){
//		puts("qwq");
		answer=answer*i;
//		printHighToStdoutAndThenNewALineToPutSomethingElseMoreEasilySoYouDontHaveToWriteTwoLinesOfCodesEveryTime(answer);
	}
	return answer;
}
void test(){
	High h;
	h[1]=9;
	h[2]=8;
	h[3]=17;
	h.flatten(4);
	h.printToStdout();
}
int main(){
	High high1(20);
	High high2=high1*20;
//	printf("%d \n",high2[1]);
	test();
	int t=0;
	scanf("%d",&t);
	for(int i=0;i!=t;i++){
		int n=0,a=0,counter=0;
		scanf("%d%d",&n,&a);
		High stairStar=getStairStar(n);
		for(int j=0;j!=stairStar.length;j++){
			if(stairStar[j]==a){
				counter++;
			}
		}
//		counter++;
		printf("%d\n",counter);
	}
}
