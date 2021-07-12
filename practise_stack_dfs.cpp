#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<cstdlib>
#include<memory.h>
#define N 100

using namespace std;
vector<int>graph[100];
bool visited[100];
void dfs_stack(int node){
   memset(visited,100,sizeof(visited));
   stack<int> dstack;
   visited[node]=true;
   dstack.push(node);
   while(!dstack.empty()){
    int tp = dstack.top();
    cout<<tp<<" ";
    dstack.pop();
    for(int i=0;i<graph[tp].size();i++){
        if(!visited[graph[tp][i]]){
            dstack.push(graph[tp][i]);
            visited[graph[tp][i]] = true;
        }
    }
   }
}
void clearall(){
    for(int i =1;i<=100;i++){
        visited[i] = false;
    }
    memset(graph,100,sizeof(graph));
}
int main()
{
  int nodes,edges;
  cin>>nodes>>edges;
  for(int i =1;i<=edges;i++){
    int n1,n2;
    cin>>n1>>n2;
    graph[n1].push_back(n2);
    graph[n2].push_back(n1);
  }
  dfs_stack(1);
  clearall();
    cin>>nodes>>edges;
  for(int i =1;i<=edges;i++){
    int n1,n2;
    cin>>n1>>n2;
    graph[n1].push_back(n2);
    graph[n2].push_back(n1);
  }
  dfs_stack(1);
  clearall();
  return 0;
}
