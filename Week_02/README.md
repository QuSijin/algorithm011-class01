学习笔记
1.hash:
string.at(i) //获取字符串元素
c++11: map 数据结构：红黑树--时间复杂度O(logN)
       unordered_map 哈希表--时间复杂度O(1)
2.堆
定义方式:
std::priority_queue<int, std::vector<int>, std::greater<int> > pq;
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

        vector<int> res;
        while(!pq.empty())
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};

     
