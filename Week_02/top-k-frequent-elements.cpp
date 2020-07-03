class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,
        greater<pair<int,int>>>pq;
        unordered_map<int,int>cnt;

        for(auto num : nums) cnt[num]++;//统计频次放在cnt里

        for(auto kv:cnt) {
            pq.push({kv.second,kv.first});//按频次，频次高的放前面大顶堆
            while(pq.size() > k) pq.pop();//大于k时，把低频元素清理掉
        }

