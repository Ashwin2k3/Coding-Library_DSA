
// converting an adjecency matrix into adjecency list 
vector<int> adj[v];
for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        if (adj[i][j] == 1  and i !=j) {
            adj[i].push_back(j);
            adj[j].push_back(i);
        }
    }
}
