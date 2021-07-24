#include<bits/stdc++.h>
using namespace std;

#define MX 100

vector< int > graph[MX];
bool vis[MX];

void dfs(int source){
	vis[source]=1;
	for(int i=0;i<graph[source].size();i++){
		int next = graph[source][i];
		if(vis[next]==0){
			dfs(next);
		}
	}
}


int main(){
	int nodes, edges;
	cin>>nodes>>edges;
	
	for(int i=0;i<edges;i++){
		int u, v;
		cin>>u>>v;
		graph[u].push_back(v);
		graph[v].push_back(u );
	}
	int source;
	cin>>source;
	dfs(source);
	
	for(int i=0;i<nodes;i++){
		if(vis[i]==1){
			cout<<"Node "<<i<<" is visited"<<endl;
		}else{
			cout<<"Node "<<i<<" is not visited"<<endl;
		}
	}
}
