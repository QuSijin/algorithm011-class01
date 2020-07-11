class Solution {
public:
    TreeNode* ans;
    bool dfs(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root == nullptr) return false;
        bool lson = dfs(root->left, p, q);
        bool rson = dfs(root->right, p, q);
        if ((lson && rson) || ((root->val == p->val || root->val == q->val) && (lson || rson))) {
            ans = root;
        } 
        //(lson && rson)-->左子树和右子树均包含 p节点或 q节点，如果左子树包含的是 p 节点，那么右子树只能包含 q 节点
        //((root->val == p->val || root->val == q->val) && (lson || rson)))-->x 恰好是 p节点或 q节点且它的左子树或右子树有一个包含了另一个节点
        return lson || rson || (root->val == p->val || root->val == q->val);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root, p, q);
        return ans;
    }
};
