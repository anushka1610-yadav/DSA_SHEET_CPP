// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here
            // Initialize current sum and minimum length
        // int curr_sum = 0, min_len = n + 1;
    
        // // Initialize starting and ending indexes
        // int start = 0, end = 0;
        // while (end < n) {
        //     // Keep adding array elements while current sum
        //     // is smaller than or equal to x
        //     while (curr_sum <= x && end < n)
        //         curr_sum += arr[end++];
    
        //     // If current sum becomes greater than x.
        //     while (curr_sum > x && start < n) {
        //         // Update minimum length if needed
        //         if (end - start < min_len)
        //             min_len = end - start;
    
        //         // remove starting elements
        //         curr_sum -= arr[start++];
        //     }
        // }
        // return min_len;
        
        
        
        
        int ans = INT_MAX;
        int i=0,j=0,s=0;
        while(i<=j && j<n)
        {
            while(s<=x && j<n)
            {
                s+=arr[j];
                j++;
            }
            while(s>x && i<j)
            {
                ans = min(ans , j-i);
                s-=arr[i];
                i++;
            }
        }
        return ans;
    }
        
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends