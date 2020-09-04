期末总结
1.动态规划--分治+最优子结构
	动态规划和递归或分治没有根本上的区别（关键看有无最有字结构）
	共性：找到重复子问题
	差异性：最优子结构、中途可以淘汰次优解
	关键点：
	1.最优子结构
	2.储存中间状态：dp[i]
	3.递推公式
2.递归：
	1.终止条件
	2.处理当前层
	3.进入下一层
	//4.回复当前层状态
3.分治：
	1.终止条件
	2.拆分子问题
	3.调子问题的递归函数
	4.合并结果
	//5.回复当前层状态
注：最近最简方法，将其拆解成可重复解决的问题--最大公约数
4.BFS代码模板--用queue
	void bfs(Node* root) {
  		map<int, int> visited;
	  	if(!root) return ;

  		queue<Node*> queueNode;
  		queueNode.push(root);

  		while (!queueNode.empty()) {
		    Node* node = queueNode.top();
		    queueNode.pop();
		    if (visited.count(node->val)) continue;
		    visited[node->val] = 1;

		    for (int i = 0; i < node->children.size(); ++i) {
	        	queueNode.push(node->children[i]);
    			}
  		}

		  return ;
	}
5.DFS代码模板
	map<int, int> visited;

	void dfs(Node* root) {
	  // terminator
	  if (!root) return ;

	  if (visited.count(root->val)) {
	    // already visited
	    return ;
	  }

	  visited[root->val] = 1;

	  // process current node here. 
	  // ...
	  for (int i = 0; i < root->children.size(); ++i) {
	    dfs(root->children[i]);
	  }
	  return ;
	}
6.LRU Cache
	两个要素：大小、替换策略
	hash table + double linkedlist
	O(1)查询
	O(1)修改、更新
7.位运算
	x%2==1 -- (x&1)==1
	x%2==0 -- (x&1)==0
	x>>1 -- x/2
	x=x&(x-1)清零最低位的1
	x&-x得到最低位的1
