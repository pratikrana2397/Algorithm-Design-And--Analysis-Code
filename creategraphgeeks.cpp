/*#include<bits/stdc++.h>
using namespace std;
class Graph{
int V;
list<pair<int,int>> *adj;
public:
Graph(int V);
void addedge(int u,int v,int w);
void printGraph(int V);
};
Graph::Graph(int V)
{
    this->V=V;
    adj=new list<pair<int,int>> [V];
}
void Graph::addedge(int u,int v,int w)
{
adj[u].push_back(make_pair(v,w));
adj[v].push_back(make_pair(u,w));
}
void Graph::printGraph(int V)
{
    int v, w;
    for (int u = 0; u < V; u++)
    {
        cout << "Node " << u << " makes an edge with \n";
        for (auto it = adj[u].begin(); it!=adj[u].end(); it++)
        {
            v = it->first;
            w = it->second;
            cout << "\tNode " << v << " with edge weight ="
                 << w << "\n";
        }
        cout << "\n";
    }
}

int main()
{
Graph g(4);
g.addedge(0,1,2);
g.addedge(1,2,2);
g.addedge(2,3,2);
g.addedge(3,0,2);

g.printGraph(4);
return 0;
}
*/
//CPP program to illustrate pair STL
#include <iostream>
#include <utility>
using namespace std;
void compute(int a[],pair<int,int> PAIR1[],int p,int n)
{
    int temp,flag;
    for(int j=0;j<p;j++)
    {
        temp=a[j];
        flag=0;
        for(int i=0;i<n;i++)
        if(temp==PAIR1[i].first||temp==PAIR1[i].second||(temp>PAIR1[i].first && temp<PAIR1[i].second))
        {
            flag++;
        }
        cout<<flag<<"\t";

    }
}
int main()
{
    int T;
    cin>>T;

	while(T--){
    int n,p,i,t1,t2;
    cin>>n;
    pair <int, int> PAIR1[n] ;
    for(i=0;i<n;i++)
	{
	    cin>>t1>>t2;
	    PAIR1[i]=make_pair(t1,t2);
	}
	cin>>p;
	int a[p];
	for(i=0;i<p;i++)
	cin>>a[i];
    compute(a,PAIR1,p,n);

}
	return 0;
}
