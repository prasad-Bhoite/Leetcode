class Solution {
public:
    bool isValid(string s) {

     stack<char> st;

     for(int i=0;i<s.size();i++)
     {
         char ch  = s[i];

         if(ch=='(' || ch=='{' || ch=='[')
         {
             //open brackett...
             st.push(ch);
         }
         else
         {
                if(!st.empty())
                {
                     if(st.top()=='(' && ch==')')
                     {
                         st.pop();
                     }
                     else if(st.top()=='[' && ch==']')
                     {
                         st.pop();
                     }
                     else if(st.top()=='{' && ch=='}')
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