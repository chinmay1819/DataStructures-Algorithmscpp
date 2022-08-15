#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int>adj[],int s,int v){
    bool visited[v+1];
    for(int i=0;i<v+1;i++){
        visited[i]=false;
    }
    queue<int>q;

    q.push(s);
    visited[s]=true;
    while(q.empty()==false){
        int u=q.front();
        cout<<u<<" ";
        q.pop();


        for(int v:adj[u]){
        if(visited[v]==false)
        {
            visited[v]=true;
            q.push(v);

        }
        }


    }



}


void BFS1(vector<int>adj[],int s,int v){
    bool visited[v+1];
    for(int i=0;i<v+1;i++){
        visited[i]=false;
    }

    queue<int>q;
    q.push(s);
    visited[s]=true;
    // cout<<s<<" ";

    while(q.empty()==false){
        int u=q.front();
        cout<<u<<" ";
        q.pop();

        for(int v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
        }


    }



}


int main(){
    int v=5;
    vector<int> adj[v];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    BFS(adj,0,v);
    cout<<"\n";
    BFS1(adj,0,v);
}