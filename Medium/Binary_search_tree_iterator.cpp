class BSTIterator {
    //to store all leaf nodes or a node with no left child
    queue<TreeNode*>q;
public:
    void init(TreeNode* root,TreeNode* prev)
    {
        if(root==NULL)
            return;
        if(root->left!=NULL)
            init(root->left,root);
        else
        {
            //to not insert in queue twice
            if(root->right!=NULL)
                q.push(root);
        }
        if(root->right!=NULL)
        {
            init(root->right,prev);
            root->right=NULL;
        }
        else
        {
            //right child of node will point to it's parent or to grandparent if the parent has a leftchild pointing to it
            root->right=prev;
            if(root->left==NULL)
            q.push(root);
        }
        
    }
    BSTIterator(TreeNode* root) {
        //initializing the pointer to a non-existent smallest number, the first call to next()
        q.push(NULL);
        init(root,NULL);        
    }
    
    int next() {
        
        //for 1st next() 
        if(q.front()==NULL)
            q.pop();
        else
        {
            q.front()=q.front()->right;
            if(q.front()==NULL)
                q.pop();
        }
        return q.front()->val;
    }
    
    bool hasNext() {
        if(q.size()>1)
            return true;
        else if(q.size()==1)
        {
            if(q.front()==NULL)
                return false;
            if(q.front()->right!=NULL)
            {
                return true;
            }
        }
        return false;
    }
};
