#include <iostream>
#include <valarray>
#include <cmath>
using namespace std;

int main()
{
    int n,a,b,c,i;
    int d,d0,d1,d2;
    cin>>n;
    for(i=0;i!=3;++i){
        cin>>a>>b;
        c=floor(n/a);
        if(!(n%a==0)){
            c++;
        }
        if(i==0){
            d0=b*c;
        }
        if(i==1){
            d1=b*c;
        }
        if(i==2){
            d2=b*c;
        }
    }
    d=min(d0,d1);
    d=min(d,d2);
    cout<<d;
}
