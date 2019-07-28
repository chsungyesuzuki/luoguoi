#include <iostream>
using namespace std;

int main()
{
	int i,m,n,r,x,y,z;
	int t=1;
	int ma[510][510];
	cin>>n>>m;
	for(;i!=n;){
		int j=0;
		for(;j!=n;){
			ma[i][j]=t;
			j++;
			t++;
		}
		i++;
	}
	i=0;
	for(;i!=m;){
		int j=1;
		cin>>x>>y>>r>>z;
		x--;
		y--;
		for(;j<=r;){
			int k=0;
			for(;k!=2*j;){
				t=ma[x+j-k][y-j];
				if(z==0){
					ma[x+j-k][y-j]=ma[x+j][y+j-k];
					ma[x+j][y+j-k]=ma[x-j+k][y+j];
					ma[x-j+k][y+j]=ma[x-j][y-j+k];
					ma[x-j][y-j+k]=t;
				}
				else if(z==1){
					ma[x+j-k][y-j]=ma[x-j][y-j+k];
					ma[x-j][y-j+k]=ma[x-j+k][y+j];
					ma[x-j+k][y+j]=ma[x+j][y+j-k];
					ma[x+j][y+j-k]=t;
				}
				k++;
			}
			j++;
		}
		i++;
	}
	i=0;
	for(;i!=n;){
		int j=0;
		for(;j!=n;){
			cout<<ma[i][j]<<' ';
			j++;
		}
		cout<<"\n";
		i++;
	}
}
