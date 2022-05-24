class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int s=0;
        for(int i=0;i<k;i++)
        {
            s+=card[i];
        }
        int len=card.size();
        int maxSum=s;
        int i=0;
        while(i<k)
        {
            s=s-card[k-i-1]+card[len-1-i];
            maxSum=max(maxSum,s);
            i++;
        }
        return maxSum;
    }
};