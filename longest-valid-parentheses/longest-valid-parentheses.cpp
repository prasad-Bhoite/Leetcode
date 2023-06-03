class Solution {
public:
    int longestValidParentheses(string s)  
    {
        //Step A : insert -1 in the stack...
        stack<int> st;
        st.push(-1);

        int len = 0;
        int maxLen = 0; 

        //Step B : insert open bracket...
        for(int i=0;i<s.size();i++)
        {
            char ch = s[i];

            if(ch == '(')
            {
                //open bracket...
                st.push(i);
            }
            
            else
            {
                //closed bracket ....
                st.pop();
                if(st.empty())
                {
                    st.push(i);
                }
                else
                {
                    len = i - st.top();
                    maxLen = max(maxLen,len);
                }
            }

        }

        return maxLen; 
        
    }
};