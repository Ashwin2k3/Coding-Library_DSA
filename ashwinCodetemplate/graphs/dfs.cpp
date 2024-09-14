
// dfs traversal 

class Sol{
    private:
        void dfs(int node , vector<int> adj[], vector<int> vis[], vector<int> ls[]){
            vis[node] =1 ;
            ls.push_back(node);
            for(auto it : adj[node]){
                if(!vis[it]){
                    dfs(it, adj, vis, ls);
                }
            }
        }

    public:
        vector<int> dfsTraversal(int v , vector<int> adj[]){
            vector<int> vis(v,0);
            int start = 0;
            vector<int> ls ;
            dfs(start, adj,vis,ls);
            return ls ;
        }

};

// space complexity: summation of degree = 
// time complexity : O(N)+(2*E)
