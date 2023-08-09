class Solution {
public:
    int myAtoi(string s) {
        /*library implementation
        int integer  = atoi(s.c_str());
        return integer;*/

        int num=0,i=0,sign=1;//positive...
        
        //step1 : Remove the whitespaces...
        while(s[i]==' ')
        {
            i++;
        }

        //step 2:Determine the Sign  
        if(i<s.size() && (s[i]=='-' || s[i]=='+') )
        {
            if(s[i]=='+')
            {
                sign = 1;
            }
            else
            {
                sign = -1;
            }
            i++;
            // sign = s[i]=='+'?1:-1;
            // i++;
        }

        //
        while(i<s.size() && isdigit(s[i]))
        {
            /*Ascii value of 0 is 48 and starting from 48 and goes on to get that value any digit from character you have to -'0' from that character*/

            if(num > INT_MAX/10 || (num==INT_MAX/10 && s[i]>'7'))
            {
                return sign==-1?INT_MIN:INT_MAX; 
            }

             num = num*10 + (s[i]-'0');
             i++;
        }
        
        return num*sign;//Digit nasel tar return 0...

    }
};