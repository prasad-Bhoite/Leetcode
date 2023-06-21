class Solution {
public:
    int strStr(string haystack, string needle) {
        //M1 : using substr...
        // int m = haystack.size();
        // int n = needle.size();
        // for(int i=0;i<m-n+1;i++)
        // {
        //     if(haystack.substr(i,n)==needle)
        //     {
        //         return i;
        //     }
        // }
        // return -1;

        int n = haystack.size();
        int m = needle.size();

        for(int i=0;i<n-m+1;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(needle[j]!=haystack[i+j])
                {
                    break;//i ki value up
                }
                
                if( j == m-1)//last paryant pohochla
                {
                    return i;//return index
                }
            }
        }
        return -1;
        //TC - O(mn)
    }
};