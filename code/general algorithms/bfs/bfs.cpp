#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5 + 5;
vector<int> adj[MAXN];
int dist[MAXN];

void bfs(int s) {
    memset(dist, -1, sizeof(dist));
    dist[s] = 0;
    queue<int> q;
    q.push(s);

    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) if (dist[v] == -1) {
            dist[v] = dist[u] + 1;
            q.push(v); 
        }
    }
}