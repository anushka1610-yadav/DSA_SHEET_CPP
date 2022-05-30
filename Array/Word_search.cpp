class Solution {
public:
    bool dfs(vector<vector<char>>& b, int i, int j, int c, string w)
    {
        if(c==w.size()) return true;
        if(i==-1 || j==-1 || i==b.size() || j==b[0].size() || b[i][j]!=w[c]) return false;
        
        char t=b[i][j];
        b[i][j]='@';
        bool search = dfs(b, i+1, j, c+1, w) || dfs(b, i-1, j, c+1, w) || dfs(b, i, j+1, c+1, w) || dfs(b, i, j-1, c+1, w);
        b[i][j]=t;
        return search;
    }
    bool exist(vector<vector<char>>& b, string w) {
        for(int i=0;i<b.size();i++)
            for(int j=0;j<b[0].size();j++)
                if(b[i][j]==w[0] && dfs(b,i,j,0,w))
                    return true;
        return false;
        
    }
};