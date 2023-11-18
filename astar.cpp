#include<bits/stdc++.h>

using namespace std;

void aStar(vector<vector<pair<int,int>>> &graph, vector<int> &hueVal, int source, int target){
    int vertices=graph.size();
    vector<int> distance(vertices+1, 10000);
    vector<int> parent(vertices+1, -1), visited(vertices+1,0);

    int steps=0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;
    pq.push({hueVal[source], source});
    distance[source]=0; parent[source]=source;

    while(!pq.empty()){
        pair<int,int> ver=pq.top(); pq.pop();

        int vertex=ver.second;
        int G=distance[vertex]; visited[vertex]=1;
        
        if(vertex==target){
            break;
        }

        for(auto adj:graph[vertex]){
            int val=adj.first, weight=adj.second;
            if(visited[val]==0 && distance[val]>G+weight){
                distance[val]=G+weight; parent[val]=vertex;
                pq.push({distance[val]+hueVal[val], val});
            }
        }
        
        steps+=1;
    }

    cout<<"Number of steps required to reach target is :"<<steps;
    cout<<endl;

    int current=target;
    stack<int> stk;
    while(current!=source){
        stk.push(current);
        current=parent[current];
    }

    stk.push(source);

    cout<<"The path to reach from source is : ";
    while(!stk.empty()){
        cout<<stk.top()<<">>";
        stk.pop();
    }

    cout<<endl;
}


int main(){
    int vertices, edges; 
    cout<<"Enter the number of vertices and edges: "; cin>>vertices>>edges;

    vector<vector<pair<int,int>>> graph(vertices+1);

    cout<<"Enter vertices and edge weight between them\n";

    for(int i=0;i<edges;i++){
        int ver1, ver2, edg;
        cout<<"Enter vertices : ";
        cin>>ver1>>ver2>>edg;
        
        graph[ver1].push_back({ver2, edg});
        graph[ver2].push_back({ver1, edg});
    }

    int source, target; 
    cout<<"Enter source and target vertex: ";
    cin>>source>>target;

    vector<int> hueVal(vertices);
    // Calculating hueristic value according to given target;

    for(int i=0;i<vertices;i++){
        hueVal[i]=abs(target-i);
    }  

    aStar(graph, hueVal, source, target);
}