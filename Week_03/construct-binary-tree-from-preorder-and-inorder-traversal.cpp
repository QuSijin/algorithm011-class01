class Solution {
public:
    
    unordered_map<int,int> mp;
    int preIndex = 0;
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        for(int i = 0; i < inorder.size();i++){
            mp[inorder[i]]=i;
        }
        return buildTreeUtil(preorder,0,preorder.size(),inorder,0,inorder.size());
    }
 
    TreeNode* buildTreeUtil(vector<int>& preorder, int p_start,int p_end,vector<int>& inorder, 
    int i_start, int i_end) {
        
        if(p_start == p_end)
        {
            return NULL;
        }
        int root_val = preorder[p_start];
        TreeNode* root = new TreeNode(root_val);
        int i_root_index = mp[root->val];
        //int i_root_index = mp.find(root_val);
        int leftNum = i_root_index - i_start;
        int index = mp[root->val];
        
        root->left = buildTreeUtil(preorder, p_start + 1, p_start + leftNum + 1, inorder, i_start, i_root_index);
        root->right = buildTreeUtil(preorder, p_start + leftNum + 1, p_end, inorder, i_root_index + 1, i_end);
        
    return root;
    }

};
