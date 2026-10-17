#include <bits/stdc++.h>

using namespace std;

const int MAXN = 2e5 + 5;
vector<int> adj[MAXN];
bool vis[MAXN];

void dfs(int u) {
    vis[u] = true;
    for (int v : adj[u]) if (!vis[v])
        dfs(v);
}