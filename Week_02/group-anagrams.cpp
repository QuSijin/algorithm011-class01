1.hash--以排序后的单词为散列函数
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string,vector<string>> M;
        for(int i=0;i<strs.size();i++){
            string key=strs[i];
            sort(key.begin(),key.end());
            M[key].push_back(strs[i]);//相同关键字放在一个数组k里
        }
        for(auto ite=M.begin();ite!=M.end();ite++){

        res.push_back(ite->second); //push_back(value)
        }
         
        return res;
    }
};
