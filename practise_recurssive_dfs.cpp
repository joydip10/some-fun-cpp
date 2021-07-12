#include<bits//stdc++.h>

using namespace std;
vector<int>graph[100];
bool seen[100];
void dfs(int node)
{
    seen[node] = true;
    cout<<node<<" ";
    for(int i =0;i<graph[node].size();i++){
        int v = graph[node][i];
        if(seen[v]==false)dfs(v);
    }
}
void g(int a,int b){
    int nodes,edges;
    nodes = a;
    edges = b;
    for(int i =1;i<=edges;i++){
        int n1,n2;
        cout<<"Enter the nodes connected to Edge no."<<i<<endl;
        cin>>n1>>n2;
        graph[n1].push_back(n2);
        graph[n2].push_back(n1);
    }
    for(int i = 1;i<=nodes;i++){
        cout<<"Nodes connected with no."<<i<<" is/are: ";
        for(int j = 0;j < graph[i].size();j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }

}
void clearall(){
    for(int i = 1;i<=100;i++)
    {
    seen[i]=false;
    }
    memset(graph,100,sizeof(graph));
}
int main()
{
    int nodes,edges;
    cin>>nodes>>edges;
    g(nodes,edges);
    dfs(1);
    clearall();

    cout<<endl;

    g(nodes,edges);
    dfs(2);
    clearall();

    return 0;
}
