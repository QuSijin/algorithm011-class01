class Solution {
public:
    void DFS(vector<vector<char>>& grid,int i,int j)
    {
        if(i < 0||j < 0||i >= grid.size()||j >= grid[0].size()||grid[i][j]=='0')//边界及水的判定
        return;    
        grid[i][j]='0';//四周夷为平地
        DFS(grid,i-1,j);
        DFS(grid,i+1,j);
        DFS(grid,i,j-1);
        DFS(grid,i,j+1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]=='1')//如果有陆地，消灭与其共成岛屿的1
                {
                    DFS(grid,i,j);
                    count++;
                }
                
            }
        }
        return count;
    }
};
