//1.二分法
class Solution {
  public:
  bool isPerfectSquare(int num) {
    if (num < 2) {
      return true;
    }

    long left = 2, right = num / 2, x, guessSquared;
    while (left <= right) {
      x = left + (right - left) / 2;
      guessSquared = x * x;
      if (guessSquared == num) {
        return true;
      }
      if (guessSquared > num) {
        right = x - 1;
      } else {
        left = x + 1;
      }
    }
    return false;
  }
};

//2.数学法
class Solution 
{
public:
    bool isPerfectSquare(int num) 
    {
        int num1 = 1;
        while(num > 0) 
        {
            num -= num1;
            num1 += 2;
        }
        return num == 0;
    }
};
//3.牛顿法--同x的平方根题解
class Solution {
  public:
    bool isPerfectSquare(int num) {
    if (num < 2) return true;

    long x = num;
    while (x * x > num) {
      x = (x + num / x) / 2;
    }
    return (x * x == num);
  }
};

