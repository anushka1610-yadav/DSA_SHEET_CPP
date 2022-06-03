class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string a=strs[0];
        string b=strs[strs.size()-1];
        string ans="";
        int i=0;
        while(i<a.size())
        {
            if(a[i]==b[i])
            {
                ans+=a[i];
                i++;
            }
            else
                break;
        }
        return ans;
        // if(strs.size()==0) return "";
        // string pre = strs[0];
        // for(int i=1;i<strs.size();i++)
        // {
        //     while(strs[i].find(pre)!=0)
        //     {
        //         pre=pre.substr(0, pre.size()-1);
        //     }
        // }
        // return pre;
        
    }
};