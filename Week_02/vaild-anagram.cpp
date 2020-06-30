class Solution {
public:
    bool isAnagram(string s, string t) {
   if(s.size()!=t.size())
        return false;
     vector<int> counter(26,0);
    for (int i = 0; i < s.size(); i++) {
        counter[s.at(i) - 'a']++;
        counter[t.at(i) - 'a']--;//s 负责在对应位置增加，t 负责在对应位置减少
    }
    for (int count : counter) {
        if (count != 0) {
            return false;
        }
    }
    return true;

    }
};
