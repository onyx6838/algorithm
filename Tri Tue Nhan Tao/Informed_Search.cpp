#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> node;

class informed_search{
	private:
		int vertices;
		vector<node> *adjList;
		int *par;
	public:
		informed_search(int v);
		void addEdge(int u, int v, int hValues);
		void best_first_search(int source, int dest);
		void hill_climb_search(int source, int dest);
		void findway(int source, int dest)
		{
			if(source == dest) cout<<source;
			else {
				findway(source , par[dest]);
				printf(" -> %d", dest);
			}
		}
};

informed_search::informed_search(int v){
	this->vertices = v;
	adjList = new vector<node>[v];
	par = new int[v + 5];
}

void informed_search::addEdge(int u, int v, int hValues){
	adjList[u].push_back(make_pair(v, hValues));
}

struct cmp {
    bool operator()(node p1, node p2){
        return p1.second > p2.second;
    }
};

void informed_search::best_first_search(int source, int dest){
	bool visited[vertices] = {false};
	priority_queue<node, vector<node>, cmp > Q;
	visited[source] = true;
	Q.push(make_pair(source, 0));
	while(Q.size()) {
		int x = Q.top().first;
		Q.pop();
		if(x == dest) {
			findway(source, dest);
			return;
		}
		for (int i = 0; i < adjList[x].size(); i++) {
            if (!visited[adjList[x][i].first]) {
                visited[adjList[x][i].first] = true;
                par[adjList[x][i].first] = x;
                Q.push(make_pair(adjList[x][i].first, adjList[x][i].second));
            }
        }
	}
}

void informed_search::hill_climb_search(int source, int dest){
	bool visited[vertices] = {false};
	queue<node> Q;	// change cmp opr
	priority_queue<node, vector<node>, cmp > Q1;
	visited[source] = true;
	Q.push(make_pair(source, 0));
	while(Q.size()) {
		int x = Q.front().first;
		Q.pop();
		if(x == dest) {
			findway(source, dest);
			return;
		}
		
		for (int i = 0; i < adjList[x].size(); i++) {
			if (!visited[adjList[x][i].first]) {
                visited[adjList[x][i].first] = true;
                par[adjList[x][i].first] = x;  
                Q1.push(make_pair(adjList[x][i].first, adjList[x][i].second));
            }
        }
        
        while(Q1.size()){
        	node x = make_pair(Q1.top().first , Q1.top().second);
        	Q.push(x);
        	Q1.pop();
		}
	}
}

int reval(char x){
    return (int)x - 97;
}

int main(){	
	informed_search ig(14);
	ig.addEdge(reval('a') , reval('c') , 15);
	ig.addEdge(reval('a') , reval('d') , 6);
	ig.addEdge(reval('a') , reval('e') , 7);
	
	ig.addEdge(reval('c') , reval('f') , 10);
	
	ig.addEdge(reval('d') , reval('f') , 10);
	ig.addEdge(reval('d') , reval('i') , 8);

	ig.addEdge(reval('e') , reval('g') , 5);
	ig.addEdge(reval('e') , reval('k') , 12);

	ig.addEdge(reval('f') , reval('b') , 0);

	ig.addEdge(reval('g') , reval('b') , 0);
	ig.addEdge(reval('g') , reval('h') , 3);
	
	ig.addEdge(reval('h') , reval('b') , 0);
	ig.addEdge(reval('i') , reval('b') , 0);
	ig.addEdge(reval('i') , reval('g') , 5);
	
	ig.hill_climb_search(reval('a'), reval('b'));
}
