class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        set<int> ans;
        for(int i=0;i<n;i++)
        {
            ans.insert(a[i]);
        }
        for(int i=0;i<m;i++)
        {
            ans.insert(b[i]);
        }
        int c=ans.size();
        return c;
    }
};