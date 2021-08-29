#include <bits/stdc++.h>
using namespace std;

class graph{
	private:
		int vertices;
		vector<int> *adjList;
		int *par;
	public:
		graph(int v);
		void addEdge(int u, int v);
		void BFS(int source, int dest);
		void DFS(int source, int dest);
		void findway(int source, int dest)
		{
			if(source == dest) cout<<source;
			else {
				findway(source , par[dest]);
				printf(" -> %d", dest);
			}
		}
};

graph::graph(int v){
	this->vertices = v;
	adjList = new vector<int>[v];
	par = new int[v + 5];
}

void graph::addEdge(int u, int v){
	adjList[u].push_back(v);
} 

void graph::BFS(int source, int dest){
	bool visited[vertices] = {false};
	queue<int> Q;
	visited[source] = true;
	Q.push(source);
	
	while(Q.size()){
		int s = Q.front();
		Q.pop();
		if(s == dest){
			findway(source, dest);
			return;
		}
		for (int i = 0; i != adjList[s].size(); i++) 
        { 
            if (!visited[adjList[s][i]]) 
            { 
                visited[adjList[s][i]] = true;
                par[adjList[s][i]] = s;
                Q.push(adjList[s][i]);
            }
        }
	}
}

void graph::DFS(int source, int dest){
	bool visited[vertices] = {false};
	stack<int> Q;
	visited[source] = true;
	Q.push(source);
	
	while(Q.size()){
		int s = Q.top();
		Q.pop();
		if(s == dest){
			findway(source, dest);
			return;
		}
		for (int i = 0; i != adjList[s].size(); i++) 
        { 
            if (!visited[adjList[s][i]]) 
            { 
                visited[adjList[s][i]] = true;
                par[adjList[s][i]] = s;
                Q.push(adjList[s][i]);
            }
        }
	}
}

int main(){
	graph dg(7);

    dg.addEdge(1, 2);
    dg.addEdge(1, 3); 
    dg.addEdge(1, 4);
    dg.addEdge(2, 5);
    dg.addEdge(2, 6);
    dg.addEdge(4, 7);
    dg.addEdge(4, 8);
    dg.BFS(1,6);
}
