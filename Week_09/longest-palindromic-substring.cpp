class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        string res="";
        vector<vector<bool>> dp(n,vector<bool>(n));
        for(int i =n-1;i>=0;i--)//向内扩张
        {
            for(int j = i;j<n;j++)//向外扩张
            {
                dp[i][j] = s[i]==s[j] && (j-i<2 || dp[i+1][j-1]);
                if(dp[i][j] && j-i+1>res.length()){
                    res = s.substr(i,j+1);
                }
            }
        }
        return res;
    }
};
