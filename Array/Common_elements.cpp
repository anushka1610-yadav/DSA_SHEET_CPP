// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
             vector<int> v;
            map<int,int>mp;
            set<int>s1,s2,s3;
            set<int>:: iterator itr;
            for(int i=0;i<n1;i++)
                s1.insert(A[i]);
            for(int i=0;i<n2;i++)
                s2.insert(B[i]);
            for(int i=0;i<n3;i++)
                s3.insert(C[i]);
            for(itr=s1.begin();itr!=s1.end();itr++)
                mp[*itr]++;
            for(itr=s2.begin();itr!=s2.end();itr++)
                mp[*itr]++;
            for(itr=s3.begin();itr!=s3.end();itr++)
                mp[*itr]++;    
            for(auto i:mp){
                if(i.second==3){
                    v.push_back(i.first);
                }
            }
                 return v;
        }
};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
} 







METHOD--2

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            unordered_map<int, int>m1, m2, m3;
            vector<int>v;
            for(int i=0;i<n1;i++)
            {
                m1[A[i]]++;
            }
            for(int i=0;i<n2;i++)
            {
                m2[B[i]]++;
            }
            for(int i=0;i<n3;i++)
            {
                m3[C[i]]++;
            }
            for(int i=0;i<n1;i++)
            {
                if(m1[A[i]] && m2[A[i]] && m3[A[i]])
                {
                    v.push_back(A[i]);
                    m1[A[i]]=0;
                }
            }
            return v;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}