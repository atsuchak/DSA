#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Graph {
	int vertices;
	list<int> *ll;

public:
	Graph(int ver) {
		vertices = ver;
		ll = new list<int> [ver];
	}

	void addEdge(int u, int v) {
		ll[u].push_back(v);
		ll[v].push_back(u);
	}

	void bfs() {
		queue<int> q;
		vector<bool> visited(vertices, false);

		q.push(0); 
		visited[0] = true;

		cout << "BFS: ";
		while(q.size() > 0) {
			int u = q.front();
			q.pop();

			cout << u << " ";

			for(int v: ll[u]){
				if(!visited[v]) {
					visited[v] = true;
					q.push(v);
				}
			}
		}

		cout << endl;
	}

	void printGraph() {
		for(int i = 0; i < vertices; i++) {
			cout << i << ": ";

			for(int child : ll[i]) 
				cout << child << " ";

			cout << endl;
		}
	}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	int n = 5; 
	// cin >> n;
	// int edge; cin >> edge;

	// while(--edge) {
	// 	int u, v; cin >> u >> v;
	// 	g.addEdge(u, v);
	// }


	Graph g(n);
	g.addEdge(0, 1);
	g.addEdge(1, 2);
	g.addEdge(1, 3);
	g.addEdge(2, 3);
	g.addEdge(2, 4);

	g.printGraph(); 

	g.bfs();

	return 0;
}