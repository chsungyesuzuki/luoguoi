#include <iostream>
using namespace std;

int main()
{
    int k,n;
    double sn;
    cin>>k;
    for(n=1;sn<=k;n++){
        sn+=(1.0/n);
    }
    cout<<n-1<<"\n";
    return 0;
}
