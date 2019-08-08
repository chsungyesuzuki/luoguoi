#include <cstdio>
#include <queue>
struct FruitSon{
	int mass;
	FruitSon(int _mass){
		mass=_mass;
	}
	friend bool operator<(FruitSon bigger,FruitSon smaller){
		return bigger.mass>smaller.mass;
	}
};
int main(){
	std::priority_queue<FruitSon> fruitSonHeap;
	int n,answer=0;
	scanf("%d",&n);
	for(int i=0;i!=n;i++){
		int massi;
		scanf("%d",&massi);
		FruitSon fruiti(massi);
		fruitSonHeap.push(fruiti);
	}
	for(;fruitSonHeap.size()>1;){
		FruitSon first=fruitSonHeap.top();
		fruitSonHeap.pop();
		FruitSon second=fruitSonHeap.top();
		fruitSonHeap.pop();
		int hp=first.mass+second.mass;
		FruitSon sum(hp);
		answer+=hp;
		fruitSonHeap.push(sum);
	}
	printf("%d\n",answer);
}
