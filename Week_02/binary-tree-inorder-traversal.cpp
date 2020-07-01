1.递归
class Solution {
public:
    vector<int> res;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root) {
            inorderTraversal(root->left); //左
            res.push_back(root->val); //根
            inorderTraversal(root->right); //右
        }
        return res;
    }
};
2.迭代-栈-二叉线索树
//将整棵树的最左边一条链压入栈中
//每次取出栈顶元素，如果它有右子树，则将右子树压入栈中。
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> stk;
        TreeNode* cur = root;
        while (cur || stk.size()) {
            while(cur) {
                stk.push(cur);
                cur = cur->left; //左
            }
            cur = stk.top();
            stk.pop();
            res.push_back(cur->val); //根
            cur = cur->right; //右
        }
        return res;
    }
};
