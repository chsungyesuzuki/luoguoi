#include <iostream>
using namespace std;

int main()
{
    int b;
    double a,c,d;
    cin >> a;
    d=2;
    for(;c<a;d=d*0.98){
        c=c+d;
        b++;
    }
    cout << b;
    return 0;
}
