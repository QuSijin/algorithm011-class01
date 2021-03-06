
//
class Solution {
public:
    string reverseWords(string s) {
        int k = 0;
        reverse(s.begin(),s.end());
        for(int i = 0;i<s.size();i++)
        {
            while(i<s.size() && s[i]==' ') ++i;
            if(i==s.size()) break;
            int j = i;
            while(j<s.size() && s[j]!=' ') ++j;
            reverse(s.begin()+i,s.begin()+j);
            if (k) s[k++] = ' ';
			while (i < j) s[k++] = s[i++];
        }
        s.erase(s.begin() + k, s.end());
        return s;
    }
};
