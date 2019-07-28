#include <iostream>
using namespace std;
int main(){
    int target[105],i;
    for(i=0;i!=100;i++){
        cin>>target[i];
        if(!target[i]){
            break;
        }
    }
    for(i--;i>=0;i--){
        cout<<target[i]<<' ';
    }
    cout<<"\n";
    return 0;
}
