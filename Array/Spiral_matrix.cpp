class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        // int minr=0,minc=0;
        // int maxr=matrix.size()-1;
        // int maxc=matrix[0].size()-1;
        // int c=0;
        // int t=maxr*maxc;
        // while(c<t)
        // {
        //     for(int i=minr,j=minc;j<=maxc;j++)
        //     {
        //         ans.push_back(matrix[i][j]);
        //         c++;
        //     }
        //     minr++;
        //     for(int i=minr,j=maxc;i<=maxr;i++)
        //     {
        //         ans.push_back(matrix[i][j]);
        //         c++;
        //     }
        //     maxc--;
        //     for(int i=maxr,j=maxc;j>=minc;j--)
        //     {
        //         ans.push_back(matrix[i][j]);
        //         c++;
        //     }
        //     maxr--;
        //     for(int i=maxr,j=minc;i>=minr;i--)
        //     {
        //         ans.push_back(matrix[i][j]);
        //         c++;
        //     }
        //     minc++;
        // }
        // return ans;
        
        
        int m = matrix.size();
        int n = matrix[0].size();
        int p=0;                                    //row index
        int q=0;                                    //coloumn index
        
        while(p<m && q<n)
        {           
            for(int i=q; i<n; i++)                  //printing unprinted elements
                ans.push_back(matrix[p][i]);        //print topmost row
            p++;                                        
            
            for(int i=p; i<m; i++)
                ans.push_back(matrix[i][n-1]);         //print rightmost column
            n--;                                         
            
            if(p<m){
                for(int i=n-1; i>=q; i--)           
                ans.push_back(matrix[m-1][i]);         //print bottommost row
            m--;
            }
            
            if(q<n){
                for(int i=m-1; i>=p; i--)               
                ans.push_back(matrix[i][q]);        //print farleft coloumn
            q++;                                         
            }
            
            
        }
        return ans;
    }
};