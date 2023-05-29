class Solution {
public:
    bool isValid(string s) 
{
    //Make a stack
    stack<int> st;

    for(int i=0;i<s.size();i++)
    {
          char ch = s[i];
          if(ch=='(' || ch=='[' || ch=='{')
          {
                st.push(ch);
          }
          else
          {
              if(!st.empty())
              {
                   char topCh = st.top();

                    if(topCh=='(' && ch==')' )
                    {
                        st.pop();
                    }
                    else if(topCh=='[' && ch==']')
                    {
                        st.pop();
                    }
                    else if(topCh=='{' && ch=='}')
                    {
                        st.pop();
                    }
                    else 
                    {
                        return false;
                    }
              }
              else
              {
                  return false;
              }
          }
    }    

    if(st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }

    }
};