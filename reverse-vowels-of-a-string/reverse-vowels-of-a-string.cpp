class Solution {
public:

bool isVowels(char s)
{
    if( (s=='a' || s=='A') || (s=='e' || s=='E')  || (s=='i' || s=='I')  || (s=='o' || s=='O') || (s=='u' || s=='U'))
    {
        return true;
    }
    else
    {
        return false;
    }
}
    string reverseVowels(string s) {
        
      int low=0;
      int high = s.size()-1;

      while(low<high)
      {
          if( isVowels(s[low]) && isVowels(s[high]) )
          {
              swap(s[low],s[high]);
              low++;
              high--;
          }
           else if(!isVowels(s[low]))
          {
                low++;
          }
           else
            {
              high--;
            }
      }
      return s;
    }
};