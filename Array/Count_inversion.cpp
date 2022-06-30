// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
  public:
        long long inversionCount(long long arr[], long long array_size)
{
    long long temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

int _mergeSort(long long arr[], long long temp[], long long left, long long right)
{
    long long mid, inv_count = 0;
    if (right > left) {
        
        mid = (right + left) / 2;

        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);
        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long merge(long long arr[], long long temp[], long long left, long long mid,
          long long right)
{
    long long i, j, k;
    long long inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right)) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        }
        else {
            temp[k++] = arr[j++];
            inv_count = inv_count + (mid - i);
        }
    }
    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}
};
    
    
    
    
    
//     long long merge(long long arr[], long long temp[], long long l, long long m, long long r)
//     {
//         long long i,j,k;
//         int c=0;
//         i=l;
//         j=m;
//         k=l;
//         while((i<=m-1)&&(j<=r))
//         {
//             if(arr[i]<=arr[j])
//                 temp[k++]=arr[i++];
//             else
//             {   
//                 temp[k++]=arr[j++];
//                 c+=(m-i);
//             }
//         }
//         while(i<=m-1)
//         {
//             temp[k++]=arr[i++];
//         }
//         while(j<=r)
//         {
//             temp[k++]=arr[j++];
//         }
//         for(i=l;i<=r;i++)
//         {
//             arr[i]=temp[i];
//         }
//         return c;
//     }
//     long long mergeSort(long long arr[], long long temp[], long long l, long long r)
//     {
//         int m, c=0;
       
//         if(r>l)
//         {
//             m=(r+l)/2;
//             c+=mergeSort(arr, temp, l, m);
//             c+=mergeSort(arr, temp, m+1, r);
//             c+=merge(arr, temp, l, m+1, r);
//         }
//         return c;
//     }
//     long long int inversionCount(long long arr[], long long N)
//     {
//         // Your Code Here
//         long long l=0;
//         long long r=N-1;
//         long long temp[N];
//         int ans = mergeSort(arr, temp, l, r);
//         return ans;
//     }

// };

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
