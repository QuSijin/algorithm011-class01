1.递归
class Solution {
public:
    vector<int> res;
    vector<int> preorderTraversal(TreeNode* root) {
        if(root) {
            res.push_back(root->val); //根
            preorderTraversal(root->left); //左
            preorderTraversal(root->right); //右
        }
        return res;
    }
};
2.迭代-栈-二叉树
前序：根-左-右
//1.将节点压入栈内，边压边存入vector容器
//2.当无根节点时，栈弹出，并转右节点（根节点其实就是左节点）
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        while(cur || stk.size()) {
            while(cur) {
                stk.push(cur);
                res.push_back(cur->val);
                cur = cur->left;
            }
            cur = stk.top();
            stk.pop();
            cur = cur->right;
        }
        return res;
    }
};

