#include<utility>//pair的头文件
#include<set>//set的头文件
class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int direx[] = {0,1,0,-1};//1-北，2-东，3-南，4-西
        int direy[] = {1,0,-1,0};
        int curx=0,cury=0;
        int curdire = 0;
        int ans = 0;
        set<pair<int, int>> obstacleSet;
        for(int i=0;i<obstacles.size();i++)//障碍坐标放入set
            obstacleSet.insert(make_pair(obstacles[i][0], obstacles[i][1]));

        for(int i=0;i<commands.size();i++){
            if(commands[i] == -1){  // -1：向右转 90 度
                curdire = (curdire + 1) % 4;
            }else if(commands[i] == -2){  // -2：向左转 90 度
                 curdire = (curdire + 3) % 4;
            }else{  //  1 <= x <= 9：向前移动 x 个单位长度
                for(int j=0;j<commands[i];j++){
                    //试图走出一步，并判断是否遇到了障碍物，
                    int nx = curx + direx[curdire];
                    int ny = cury + direy[curdire];
                    //当前坐标不是障碍点，计算并与存储的最大欧式距离的平方做比较
                    if (obstacleSet.find(make_pair(nx, ny)) == obstacleSet.end()) {
                        curx = nx;
                        cury = ny;
                        ans = max(ans, curx*curx + cury*cury);
                    }else{
                        //是障碍点，被挡住了，停留，只能等待下一个指令，那可以跳出当前指令了
                        break;
                    }
                }
            }
        }
        return ans;
    }
};

