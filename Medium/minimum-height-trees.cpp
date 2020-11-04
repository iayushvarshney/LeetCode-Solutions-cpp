class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        vector<int> edge_count(n, 0);  // number of connected node
        vector<int> edge_sum(n, 0);  // sum of all connected node
        int i, n1, n2, n0 = n;
        for (vector<int> edge: edges) {
            n1 = edge[0];
            n2 = edge[1];
            edge_count[n1] ++;
            edge_count[n2] ++;
            edge_sum[n1] += n2;
            edge_sum[n2] += n1;
        }
        queue<int> q;
        for (i = 0; i < n; i ++) {
            if (edge_count[i] == 1) {
                q.push(i);
            }
        }

        int root, root1, q_size;
        while (n > 2) {
            q_size = q.size();
            for (i = 0; i < q_size; i ++) {
                root = q.front(); q.pop();
                root1 = edge_sum[root];   // leaf only connect to 1 node, sum equals to node index
                edge_sum[root1] -= root;
                edge_count[root1] --;
                if (edge_count[root1] == 1) {
                    q.push(root1);
                }
                edge_count[root] = -1;
                n --;
            }
        }
        vector<int> ans;
        for (i = 0; i < n0; i ++) {
            if (edge_count[i] > -1) {
                ans.push_back(i);
            }
        }
        return ans;
        
    }
};
