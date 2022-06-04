pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long, long long>p;
    int i=0;
    if(n%2==0)
    {
        if(a[0]>a[1])
        {
            p.first=a[1];
            p.second=a[0];
        }
        else
        {
            p.first=a[0];
            p.second=a[1];
        }
        i=2;
    }
    else
    {
        p.second=a[0];
        p.first=a[0];
        i=1;
    }
    
    while(i<n-1)
    {
        if(a[i]<=a[i+1])
        {
            if(a[i+1]>p.second)
            {
                p.second=a[i+1];
            }
            if(a[i]<p.first)
            {
                p.first=a[i];
            }
        }
        else
        {
            if(a[i]>a[i+1])
            {
                if(a[i]>p.second)
                {
                    p.second=a[i];
                }
                if(a[i+1]<p.first)
                {
                    p.first=a[i+1];
                }
            }
        }
        i=i+2;
    }
    return p;
    
}