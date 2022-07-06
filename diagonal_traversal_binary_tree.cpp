//Diagonal Traversal of Binary Tree 
//error :TODO
    

// filename.cpp: Ashish Galagali
// Description: .
vector<int> diagonal(Node *root)
{
    vector<int> v;
    queue<Node*> q;
    Node* p;
    q.emplace(root);
    while(!q.empty())
    {    
        p = q.front();
        q.pop();
        while(p)
        {
            if(p->left) q.emplace(p->left);
            v.push_back(p->data);
            p=p->right;
        }
    }
    return v;
}