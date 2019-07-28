#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    double b;
    cin >> a;
    if(a>400){
        b=0.4463*150+0.4663*(400-150)+0.5663*(a-400);
    }
    if(a<=400 && a>150){
        b=0.4463*150+0.4663*(a-150);
    }
    if (a<=150){
        b=0.4463*a;
    }
    b=floor((10*b)+0.5)/10;
    cout << b;
}
