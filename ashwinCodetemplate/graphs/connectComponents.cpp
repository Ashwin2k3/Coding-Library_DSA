

void dfs(int node, vector<int>adj[],vector<int> vis[]){
    vis[node] =1 ;
    for(auto it : adj[node]){
        if (!vis[it]) {
            dfs(it,adj,vis);
        }
    }


}

int main(){
    vector<int> vis(v,0);
    int cnt = 0;
    for(int i=0;i<v;i++){
        if (!vis[i]) {
            cnt ++ ;
            dfs(i,adj,vis);
        }

    }
}
