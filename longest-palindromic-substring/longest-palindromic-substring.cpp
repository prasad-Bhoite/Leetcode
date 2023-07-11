class Solution {
public:

bool isPalindrome(string &s,int start,int end)
{
    while(start<end){
        if(s[start]!=s[end])
        {
            return false;
        }
        start++,end--;
    }

    return true;
}
    string longestPalindrome(string s) {
    //M1 : Optimized solution must be solve using DP...

    //M2 : Brute Force...
    //1.Substring of string...
    string ans = "";
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            if(isPalindrome(s,i,j))
            {
                string t = s.substr(i,j-i+1);
                // ans = t.size()>ans.size()?t:ans;
                // ans = t;
                
                
                // ans is initially empty but we want longets palindromic substring ...
                if(t.size()  > ans.size())
                {
                    ans = t;
                }
                else
                {
                    ans = ans;
                }
            }
        }
    }    
      return ans;
    }
};