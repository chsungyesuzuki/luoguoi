#include <iostream>
using namespace std;

int main()
{
	int last,target,i,j;
    long long counter=0;
    cin>>last>>target;
    for(i=1;i<=last;i++){
        j=i;
        for(;j>0;j/=10){
            if((j%10)==target){
                counter++;
            }
        }
    }
    cout<<counter;
    return 0;
}
