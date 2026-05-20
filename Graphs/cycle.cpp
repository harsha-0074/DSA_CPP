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
    bool isUndir;

public:
    Graph(int V , bool isUndir= true){
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        if(isUndir){
            l[v].push_back(u);
        }

    }
    
    bool dirCycleHelper(int src ,vector<bool> &vis, vector<bool> &recPath){
        vis[src] = true;
        recPath[src] = true;

        list<int> neighbors = l[src];

        for(int v : neighbors){
            if(!vis[v]){
                if(dirCycleHelper(v,vis,recPath)){
                    return true;
                }
            }
            else if(recPath[v]){
                    return true;
                }
    }
           recPath[src] = false;
          
            return false;
    }

    bool cycleDir(){
        vector<bool>vis(V,false);
        vector<bool>recPath(V,false);

        for(int i =0;i<V;i++){
            if(!vis[i]){
                if(dirCycleHelper(i,vis,recPath)){
                    return true;
                }
            }
        }
        return false;
    }

};

int main(){
    Graph graph(5 , false);

    graph.addEdge(0,1);
    graph.addEdge(1,2);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    graph.addEdge(2,4);

    vector<bool> vis(5, false);

    //graph.dfs(0, vis);
    cout<<graph.cycleDir() << endl;
    
    return 0;

}