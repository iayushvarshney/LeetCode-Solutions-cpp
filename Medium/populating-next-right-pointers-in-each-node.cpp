class Solution {
public:
    Node* connect(Node* root) {
        if(!root)
            return NULL;
        
        queue<Node*> bfs;
        bfs.push(root);
        
        while(!bfs.empty()){
            int size = bfs.size();
            
            while(size--){
                Node* curr = bfs.front();
                bfs.pop();
                
                if(!bfs.empty() && size){
                    curr->next = bfs.front();
                }
                
                if(curr->left) bfs.push(curr->left);
                if(curr->right) bfs.push(curr->right);
            }
        }
        
        return root;
    }
};
