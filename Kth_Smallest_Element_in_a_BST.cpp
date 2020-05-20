/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int>pq;
       // priority_queue<int, vector<int>, greater<int>>pq1;
        queue<TreeNode*>q;
        q.push(root);
        //pq.push(root->val);
        while(!q.empty()){
            TreeNode* f = q.front();
            pq.push(f->val);
            if(pq.size() > k)
            {
                pq.pop();
            }
            q.pop();
            if(f->left)
                q.push(f->left);
            if(f->right)
                q.push(f->right);
        }
        /*while(!pq.empty())
        {
            pq1.push(pq.top());
            pq.pop();
        }*/
        return pq.top();


    }
};
