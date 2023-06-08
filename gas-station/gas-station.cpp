class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        //deficit
        int deficit = 0;
        //balance
        int balance = 0;
        //start
        int start = 0;

        for(int i=0;i<gas.size();i++)
        {
             balance = balance + gas[i]-cost[i];
            if(balance < 0)
            {
                deficit += balance;
                start = i+1;
                balance = 0; 
            } 
        }   

        if(balance+deficit >=0 ){
            return start;
        }
        else{
            return -1;
        }

    }
}; 