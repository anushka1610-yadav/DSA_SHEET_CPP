// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int fav=0, non=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=k)
                fav++;
        }
        
        for(int j=0;j<fav;j++)
        {
            if(arr[j]>k)
                non++;
        }
        
        int l=0,r=fav-1, res=INT_MAX;
        while(r<n)
        {
            res=min(res, non);
            r++;
            if(r<n && arr[r]>k) non++;
            if(l<n && arr[l]>k) non--;
            l++;
        }
        
        return (res==INT_MAX)?0:res;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends