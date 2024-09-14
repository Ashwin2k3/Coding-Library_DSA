
#include<vector>
#include<queue>
vector<int> bfs(int v, vector<int>adj[]){
    vector<int> vis(v,0);
    vis[0] = 1;
    queue<int>  q ;
    q.push(0); 
    vector<int> bsf_traversal;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        bsf_traversal.push(node);
        for(auto it : adj[node]){
            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }

    }
    return bsf_traveral;

    
 
}
