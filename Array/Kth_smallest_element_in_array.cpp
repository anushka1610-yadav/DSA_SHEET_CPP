    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        vector<int>v;
        for(int i=l;i<=r;i++)
        {
            v.push_back(arr[i]);
        }
        make_heap(v.begin(), v.end());
        int n=v.size();
        while(n != k)
        {
            pop_heap(v.begin(), v.end());
            v.pop_back();
            n--;
        }
        return v.front();
    };