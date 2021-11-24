#include "bits/stdc++.h"
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;
#define node pair<string, int>
#define mapNode map<node, list<node>>
#define vectorNode vector<pair<node, list<node>>>

class BestFirstSearch
{
	private:
	    node first, last;
	    mapNode A;
	    map<string, string> M;
	    vectorNode V;
	public:
	    BestFirstSearch(node f, node l, mapNode A);
	    void Implement(string name);
	    void showWay(string first, string last, ofstream& out);
	    void writeFile(string name);
};

BestFirstSearch::BestFirstSearch(node f, node l, mapNode A)
{
    this->first = f;
    this->last = l;
    this->A = A;
}

struct compare
{
    bool operator()(node a, node b)
    {
        return a.second > b.second;
    }
};

void BestFirstSearch::Implement(string name)
{
    priority_queue<node, vector<node>, compare> Q;
    priority_queue<node, vector<node>, compare> temp;
    map<node, int> visited;
    visited[first] = 1;
    Q.push(first);

    list<node> listStack;
	listStack.push_back(first);
    while (Q.size())
    {
        auto u = Q.top();
        Q.pop();
        listStack.pop_front();
        if (u == last)
        {
        	A[u] = {node("TTKT",0)};
        	V.push_back({u,{}});
        	writeFile(name);
            return;
        }

		for(auto &nei: A[u]){
			if(visited[nei] != 1){
				visited[nei] = 1;
				Q.push(nei);
				temp.push(nei);
				M[nei.first] = u.first;
			}
		}
		
		while(listStack.size()){
			temp.push(listStack.front());
			listStack.pop_front();
		}
			
		while(temp.size()){
			listStack.push_back(temp.top());
			temp.pop();
		}

        V.push_back({u,listStack});
    }
}
void BestFirstSearch::showWay(string start, string end, ofstream& out)
{
    if (start == end)
        out << start;
    else
    {
        showWay(start, M[end],out);
        out << "->" << end;
    }
}

node stringToNode(string input){
	vector<char> split(input.begin(), input.end());
	string strValue = "";
	for(auto s: split) if(isdigit(s))	strValue+=s;
	node nodez = make_pair(string({split.front()}) , stoi(strValue));
	return nodez;
}

vector<string> split(string str, char delimiter)
{
    vector<string> internal;
    stringstream ss(str);
    string tok;
    while (getline(ss, tok, delimiter))  internal.push_back(tok);
    return internal;
}

void readFile(string name, node& start, node& end, mapNode& graph)
{
	// var
    ifstream fileInput(name);
    string Sstart, Send;
    
    if (fileInput.fail())	cout << "Failed to open this file!" << endl;

    fileInput >> Sstart >> Send;
    start = stringToNode(Sstart);
   	end = stringToNode(Send);
   	
    string line;	getline(fileInput, line); // skip the first line
    
    while (getline(fileInput, line))
    {
        istringstream iss(line);
        vector<string> sep = split(line, ':');
		vector<string> sub = split(sep[1], ' ');
		list<string> dest;
		dest.assign(sub.begin(), sub.end());
		list<node> nodeDest;
		//cout<<sep[0]<<"------\n";
		for (const string &i: dest) {
			node rs = stringToNode(i);
			//cout<<rs.first<<rs.second<<endl;
        	nodeDest.push_back(rs);
    	}
    	
    	node par = stringToNode(sep[0]);
		graph[par] = nodeDest;
    }
    
    fileInput.close();
}

void BestFirstSearch::writeFile(string name){
	ofstream out(name);
	out<<"|"<<setw(20)<<"Ver"<<"|"<<setw(20)<<"ssss"<<"|"<<setw(20)<<"P_Queue"<<"|"<<endl;
	for(auto &it: V){
		node pos = it.first;
		out<<"|"<<setw(20)<<pos.first<<"|";
		string builder = "";
	    for(auto &kv: A[pos])		builder.append(kv.first);	// dinh ke
	    out<<setw(20)<<builder<<"|";
	    builder = "";
	    
	    for(auto &z: it.second)		builder.append(z.first);	// prio qu
	    out<<setw(20)<<builder<<"|"<<endl;
	}
	out<<"Way:";
	showWay(first.first, last.first, out);
}

int main()
{
    mapNode Graph;
    node start, end;

    readFile("input.txt", start, end, Graph);
	BestFirstSearch h = BestFirstSearch(start, end, Graph);
	h.Implement("output.txt");
}
