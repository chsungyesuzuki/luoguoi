#include <cstdio>
#include <cctype>
#include <algorithm>
#include <vector>
using namespace std;

int i;
int p1,p2,p3;
int main()
{
	char o[105];
	scanf("%d%d%d%s",&p1,&p2,&p3,o);
	for(;o[i]!=0;i++){
		if(o[i]=='-'){
			if((o[i+1]<='9'&&o[i+1]>'0'&&o[i-1]<o[i+1]&&o[i-1]>='0'&&o[i-1]<'9')||(o[i-1]>='a'&&o[i-1]<'z'&&o[i+1]>o[i-1]&&o[i+1]<='z'&&o[i+1]>'a')){
				vector<char> v;
				for(char t=o[i-1]+1;t<o[i+1];t++){
					for(int j=0;j<p2;j++){
						if(p1==1){
							v.push_back(t);
						}
						else if(p1==2){
							v.push_back(toupper(t));
						}
						else if(p1==3){
							v.push_back('*');
						}
					}
				}
				if(p3==2){
					reverse(v.begin(),v.end());
				}
				for(int j=0;j!=v.end()-v.begin();j++){
					putchar(v[j]);
				}
			}
			else{
				putchar('-');
			}
		}
		else{
			putchar(o[i]);
		}
	}
	putchar('\n');
	return 0;
}
