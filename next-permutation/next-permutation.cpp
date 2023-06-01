class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //if only one element is present in the list...
        if(nums.size()==1)
         {
             return;
         }
        
        // step1:set the idx1...
        int idx1;  
        for(int i=nums.size()-2;i>=0;i--)
         {
             if(nums[i]<nums[i+1])
               {
                   idx1 = i;
                   break;   
               }
         }

         //if all the numbers alredy in ascending order then reverse it...
         if(idx1<0)
           {
               reverse(nums.begin(),nums.end());
           }
         else
         {
             // set idx2
             int idx2=0;

             for(int i=nums.size()-1;i>=0;i--)
               {
                   if(nums[i] > nums[idx1])
                     {
                         idx2 = i;
                         break;
                     }
               }

        //  swapping the idx1 and idx2....
         swap(nums[idx1],nums[idx2]);
         reverse(nums.begin()+idx1+1,nums.end());
         }

    }
};