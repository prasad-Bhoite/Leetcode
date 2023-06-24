class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty())
      return "";

    // for (int i = 0; i < strs[0].length(); ++i)
    //   for (int j = 1; j < strs.size(); ++j)
    //     if (i == strs[j].length() || strs[j][i] != strs[0][i])
    //       return strs[0].substr(0, i);

    // return strs[0];

    //M2 :Another way...
    string ans;
    int i=0;

    while(true)//infinite for loop
    {
      char curr_ch=0;

    for(auto str:strs)
    {
       //overflow...
       if(i>=str.size())
       {
         curr_ch=0;
         break;
       }
      //just started...
      if(curr_ch==0)
      {
        curr_ch = str[i];
      }
      else if(curr_ch!=str[i])
      {
        curr_ch = 0;
        break;
      }
    }
    if(curr_ch==0)
    {
      break;
    }
    ans.push_back(curr_ch);
    i++;
  }
  return ans;
  }
};
