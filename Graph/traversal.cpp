#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int>adj[],int u,int v ){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int>adj[],int v,int s){
    bool visited[v+1]={false};
    queue<int>q;
    visited[s]=true;
    q.push(s);

    while(q.empty()==false){
        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(int v:adj[u]){
            if(visited[v]==false)
                {
                    visited[v]=true;
                    q.push(v);

                }
        }
    }
}



void DFS(vector<int>adj[],int s,bool visited[]){

    visited[s]=true;
    cout<<s<<" ";

    for(int u:adj[s]){
        if(visited[u]==false)
            DFS(adj,u,visited);
    }

}

int primMST(vector<int>graph[],int v){
    
}




int main(){
    int v=4;
    vector<int>adj[v];
    addedge(adj,0,1);
    addedge(adj,0,2);
    addedge(adj,1,2);
    addedge(adj,1,3);
    int s=0;
    cout<<"BFS : ";
    BFS(adj,v,s);
    bool visited[v+1]={false};
    cout<<endl<<"DFS : ";
    DFS(adj,s,visited);
}