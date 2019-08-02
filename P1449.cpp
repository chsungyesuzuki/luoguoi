#include <cstdio>
struct Stack{
	int element[1005],now;
	void push(int target){
		element[now]=target;
		now++;
	}
	int pop(){
		now--;
		int answer=element[now];
		element[now]=0;
		return answer;
	}
};
int pow(int bottomnumber,int exponent){
	int answer=1;
	for(int i=0;i!=exponent;i++){
		answer*=bottomnumber;
	}
	return answer;
}
int main(){
	char expression[1005],tmp[1005];
	Stack stack;
	int pointer=0;
	scanf("%s",expression);
	for(int i=0;;i++){
		char now=expression[i];
		if(now>='0'&&now<='9'){
			tmp[i]=now;
			if(i==0?true:tmp[i-1]==0){
				pointer=i;
			}
		}
		else if(now=='+'){
			stack.push(stack.pop()+stack.pop());
		}
		else if(now=='-'){
			int back=stack.pop();
			int front=stack.pop();
			stack.push(front-back);
			front=0;
			back=0;
		}
		else if(now=='*'){
			stack.push(stack.pop()*stack.pop());
		}
		else if(now=='/'){
			int back=stack.pop();
			int front=stack.pop();
			stack.push(front/back);
			front=0;
			back=0;
		}
		else if(now=='.'){
			int pushing=0;
			int k=pow(10,i-pointer-1);
			for(int j=pointer;k>=1;j++){
				int nowBit=tmp[j]-'0';
				pushing+=nowBit*k;
				k/=10;
			}
			stack.push(pushing);
			for(int j=0;j!=1005;j++){
				tmp[j]=0;
			}
		}
		else if(now=='@'){
			printf("%d\n",stack.pop());
			return 0;
		}
	}
}
