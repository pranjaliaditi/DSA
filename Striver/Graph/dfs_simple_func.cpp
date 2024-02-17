//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    private:
    void dfs(int node,vector <int> adj[], int vis[], vector <int> &ls){
        vis[node] = 1; // mark node as visited
        ls.push_back(node); // put it in list
        
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                dfs(it,adj,vis,ls); // if not visited earlier, find its dfs
            }
        }
        
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        int vis[V] = {0}; //visited array
        vis[0] = 1; // first node visited
        vector <int> ls; // dfs list
        int start = 0; // start node
        dfs(start,adj,vis,ls); // function call
        return ls;
    }
};