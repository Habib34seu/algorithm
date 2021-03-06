#include <bits/stdc++.h>
using namespace std;

const int MAX_NODE = 1000;
const int INF = 1e9;

vector <int> graph[ MAX_NODE ], cost[ MAX_NODE ];
int dist[ MAX_NODE ], node , edge ;
bool visit[ MAX_NODE ];



void ini()
{
     for( int i = 1 ; i <= node ; i++ )
    {
        visit[i] = 0;
        dist[ i ] = INF;
        graph[i].clear();
        cost[i].clear();
    }
}


void dijkstra(int source)
{
    dist[source] = 0;
    while( 1 )
    {
        int current_node = -1;
        for( int i = 1 ; i <= node ; i++ )
        {
            if( visit[i] == 0 && ( current_node == -1 || dist[current_node] > dist[i]))
            {
                current_node = i;
            }
        }
        if( current_node == -1 ) break;
        visit[current_node] = 1;
        int sz = graph[current_node].size();
        for( int i = 0 ; i < sz ; i++ )
        {
            int nxt = graph[current_node][i];
            if( visit[nxt] ) continue;
            int cc = cost[current_node][i];
            if( dist[nxt] > dist[current_node] + cc )
            {
                dist[nxt] = dist[current_node] + cc;
            }
        }
    }

    for( int i = 1 ; i <= node ; i++ )
    {
        printf("from %d to %d:: minimum cost:: %d\n", source , i , dist[i] );
    }
}





int main()
{
	cin >> node >> edge;
    ini();
    int x , y, c;
    for( int i = 0 ; i < edge ; i++ )
    {
       cin >> x >> y >> c;
       graph[x].push_back(y);
       graph[y].push_back(x);
       cost[x].push_back(c);
       cost[y].push_back(c);
    }
    dijkstra(5);

    return 0;
}

/*
9 9
1 2 5
2 3 10
2 4 8
4 5 7
4 6 10
4 8 11
8 7 20
6 7 1
7 9 5


*/


