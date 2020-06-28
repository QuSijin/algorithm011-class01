# 学习笔记
## 1.习题中的笔记
### 1）加一：
一些标准操作：
        digits.insert(digits.begin(), 1); //首位进位的操作
### 2）两数之和：
标准嵌套循环：
        ①for(int i=0;i<nums.size()-1;i++)
        ②for(int j=i+1;j<nums.size();j++)
### 3）旋转数组：
rotate函数：
        std::rotate(nums.begin(), nums.end() - k % nums.size(), nums.end());// k % nums.size()考虑了k>nums.size()的情况
### 4）设计双端循环队列
assign函数--复制vector的值：
        arr.assign(capacity, 0);
一些标准操作：
        ①capacity = k + 1; //防止混淆队列为空与队列满
        ②front = (front - 1 + capacity) % capacity;//为了循环到数组的末尾，需要先加上数组的长度，然后再对数组长度取模
        ③return arr[(rear - 1 + capacity) % capacity];// 当 rear 为 0 时防止数组越界
## 2.知识点总结
### 1）快慢指针
一些标准操作：
        ①faster = faster->next->next;  //快的运动员每次跑两步
	②slower = slower->next;  //慢的运动员每次跑一步
	③if (faster == slower)  //他们在比赛中相遇了
	④return true;  //可以断定是环形道，直道不可能相遇
### 2）栈
        最近相关性
### 3）队列
        先来后到--排队
