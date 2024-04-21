class Solution {
    public boolean validPath(int n, int[][] edges, int source, int destination) {
        if(edges.length == 0)
            return true;
        boolean[] vis = new boolean[n];
        boolean flag = true;
        vis[source] = true;
        
        while(flag){
            flag = false;
            for(int[] edge : edges){
                if(vis[edge[0]] != vis[edge[1]]){
                    vis[edge[0]] = true;
                    vis[edge[1]] = true;
                    flag = true;
                }

                if(vis[destination])
                    return true;
            }
        }

        return false;
    }
}