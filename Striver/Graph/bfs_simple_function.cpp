vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        queue <int> q; //queue
        int vis[V] = {0}; // visited array
        vis[0] = 1; // 0 as 1 bcoz we start from there traversal
        vector<int> bfs; // bfs traversal solution
        
        q.push(0); // first node in queue
        
        while(!q.empty()){ // while q !empty
            int node = q.front(); // first element
            q.pop(); // pop it out
            bfs.push_back(node); // push in bfs
            for(auto it: adj[node]){ // now we go to all adj nodes of that element
                if(!vis[it]){ // it = adj[node] all in the list
                    vis[it] = 1; // if not already visited, mark 1 
                    q.push(it); // and put it in queue
                }
            }
        }
        
        return bfs;
        
    }