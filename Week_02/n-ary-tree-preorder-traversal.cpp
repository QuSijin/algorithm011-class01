1.递归
class Solution {
public:
    vector<int> res;
    vector<int> preorder(Node* root) {
        if(!root)   return res;
        res.push_back(root -> val);
        for(auto i : root -> children){
            preorder(i);
        }
        return res;
    }
};
2.迭代
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> res;
        if(!root)   return res;
        stack<Node*> stk;
        stk.push(root);
        while(!stk.empty()){
            Node* top = stk.top(); 
            res.push_back(top -> val);//u 
            stk.pop();//1.u出 2.v1、v2、v3出
            for(int i = top -> children.size()-1; i >= 0; --i){
                stk.push(top -> children[i]);//v3、v2、v1
            }
        }
        return res;//u、v1、v2、v3
    }
};
