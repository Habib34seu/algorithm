#include<bits/stdc++.h>
using namespace std;

#define MX 100
int parent[MX];


void makeSet(int u){
	parent[u]=u;
}

void init(){
	for(int i=1;i<=8;i++){
		makeSet(i);
	}
}
bool flag = false;
int Find(int u ){
	if(flag==true){
		cout<<"call with "<<u<<endl;
	}
	if(u== parent[u]){
		return u;
	}
	return parent[u] = Find(parent[u]);
}
void Union(int u, int v){
	int p=Find(u);
	int q=Find(v);
	if( p != q){
		parent[q]=p;
	}
}

bool isFriend(int u, int v){
	int p=Find(u);
	int q=Find(v);
	return (p==q);
}
int main(){
	init();
//	for(int i=1;i<=8;i++){
//		cout<<"Parent of i "<<i<<" is "<<parent[i]<<endl;
//	}
		Union(1,2);
		Union(2,3);
		Union(3,4);
		Union(4,5);
		Union(5,6);
		Union(6,7);
		Union(7,8);
		flag=true;
		Find(8);
//		if(isFriend(4,7)){
//			cout<<"They are friends"<<endl;
//		}else{
//			cout<<"They are not friends"<<endl;
//		}
	//cout<<Find(1)<<" "<<Find(8)<<endl;
}
