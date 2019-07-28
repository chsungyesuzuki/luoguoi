#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int beginday,days,res,mod,week,lastday;
    cin>>beginday>>days;
    mod=days%7;
    week=floor(days/7);
    res=res+(5*250*week);
    if(mod>0){
        lastday=beginday+mod-1;
        if(beginday<=6&&lastday>=6){
            mod--;
        }
        if(beginday<=7&&lastday>=7){
            mod--;
        }
        res=res+(250*mod);
    }
    cout<<res;
    return 0;
}
