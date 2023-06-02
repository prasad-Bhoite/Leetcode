class Solution {

private:
        bool checkEqual(int a[26],int b[26])
         {
             for(int i=0;i<26;i++)
               {
                   if(a[i]!=b[i])
                      return 0;
               }
            return 1;
         }
public:
    bool checkInclusion(string s1, string s2) {
        //count the character 
        int count1[26]={0};

        for(int i=0;i<s1.length();i++)
          {
              char ch = s1[i];
              int index = ch - 'a';
              count1[index]++;
          }

   //Traverse s2 string in window of size of length and compare...

   int i=0;
   int windowSize = s1.length();
   int count2[26] = {0};

   //Running for the first window...
   while(i < windowSize  && i<s2.length()) 
   {
       int index = s2[i] - 'a';
       count2[index]++;
       i++;
   }

   if( checkEqual(count1,count2) )
        return 1;

    //aage window process karo...
    while(i<s2.length())
      {
          //add new character...
          char newChar = s2[i];
          int index = newChar - 'a';
          count2[index]++;

          //remove the old character...
          char oldChar = s2[i-windowSize];
          index = oldChar - 'a';
          count2[index]--;
          i++;

    if( checkEqual(count1,count2) )
        return 1;
      }
      return 0;
    }
};