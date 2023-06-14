class Solution {
public:
    bool isAnagram(string s, string t) {
        //Method 1: Brute Force or simple approach...
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t)
        // {
        //     return true;
        // }
        // else{
        //     return false;
        // }

        //Method 2 : Counting Method...
        //  Frequency table of s == fre. table of t
        // M3 : We can optimized by using make freqTable of 1st string and iterate with another  string by decrementing and check count of all element is zero or not...
        int freqTable[256] = {0};
        for(int i=0;i<s.size();i++)
        {
            freqTable[s[i]]++;
        } // O(n)

        for(int i=0;i<t.size();i++){
            freqTable[t[i]]--;
        } // O(m)

        for(int i=0;i<256;i++)
        {
            if(freqTable[i]!=0)
            {
                return false;
            }
        } //O(256)-->O(1);
        // TC -- > O(m+n);

        return true;
    }
};