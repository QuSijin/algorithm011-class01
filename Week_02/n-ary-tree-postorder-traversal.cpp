class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> output;
        stack <Node*> stk;
        if (!root) return output;

        stk.push(root);

        Node* top;
        vector <Node*>::iterator it;
        while (!stk.empty()){
            top = stk.top();
            output.push_back(top->val);//u
            stk.pop();//1.u出  2.v3、v2、v1出
            for (it = top->children.begin(); it != top->children.end() ; it++){
                stk.push(*it);//v1、v2、v3
            }
        }
        reverse(output.begin(), output.end());//v1、v2、v3、u
        return output;
    }
};

