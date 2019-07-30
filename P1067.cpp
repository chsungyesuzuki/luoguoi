#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i>=0;i--){
        int k;
        scanf("%d",&k);
        if(k<0){
        	if(i==0){
        		printf("%d",k);
        		continue;
			}
            if(k==-1){
                putchar('-');
            }
            else{
                printf("%d",k);
            }
        }
        else if(k>0){
            if(i!=n){
                putchar('+');
            }
            if(k!=1){
                printf("%d",k);
            }
            if(k==1&&i==0){
                putchar('1');
            }
        }
        else{
            continue;
        }
        if(i!=0){
            putchar('x');
            if(i!=1){
                cout<<"^"<<i;
            }
        }
    }
    putchar('\n');
    return 0;
}
