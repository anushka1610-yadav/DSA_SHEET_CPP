// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int n)
    {
      //Your code here
      set<int>st;
      for(int i=0;i<n;i++)
      {
          st.insert(arr[i]);
      }
      int ans=0;
      for(int i=0;i<n;i++)
      {
          if(st.find(arr[i]-1)==st.end())
          {
              int currN = arr[i];
              int currS = 1;
              
              while(st.find(currN+1)!=st.end())
              {
                  currN = currN+1;
                  currS = currS+1;
              }
              ans = max(ans, currS);
          }
      }
      return ans;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends