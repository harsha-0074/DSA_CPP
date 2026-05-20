#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
#include<list>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>* l;

public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);

    }

    void print(){
        for(int u=0;u<V;u++){
            list<int> neighbors = l[u];
            cout<< u << ":" ;
            for(int v : neighbors){
                cout << v << " " ;
            }
            cout<< endl;
        }
    }

    void bfs(){
        queue<int> q;
        vector<bool> vis(V,false);

        q.push(0);
        vis[0] = true;

        while(q.size() > 0){
            int u = q.front();
            q.pop();

            cout<< u << " ";
            list<int> neighbors = l[u];

            for(int v : neighbors){
                if(!vis[v]){
                    vis[v] = true;
                    q.push(v);
                }
            }

        } 
        cout<<endl;
    }

    void dfs(int u , vector<bool> &vis){
        vis[u] = true;
        cout<< u <<" ";

        list<int> neighbors = l[u];
        for(int v : neighbors){
            if(!vis[v]){
                vis[v] = true;
                dfs(v,vis);
            }
        }

    }

    bool cycleHelper(int src,int parent, vector<bool> &vis){
        vis[src] = true;

        list<int> neighbors = l[src];

        for(int v : neighbors){
            if(!vis[v]){
                if(cycleHelper(v,src,vis)){
                    return true;
                }

                else{
                    if(v != parent){
                        return true;
                    }
                }
            }
        }
        return false;
    }

    bool undirCycleDete(){
        vector<bool> vis(V, false);
        return cycleHelper(0,-1,vis);
    }
};

int main(){
    Graph graph(5);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    vector<bool> vis(5, false);

    //graph.dfs(0, vis);
    
    cout<<graph.undirCycleDete()<< endl;
    return 0;

}