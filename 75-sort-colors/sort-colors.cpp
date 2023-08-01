class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0;
        int mid=0;
        int high=nums.size()-1;

        while(mid<=high)
          {
              if(nums[mid]==0)
               {
                   swap(nums[low],nums[mid]);
                   low++;
                   mid++;
               }

             else if(nums[mid]==1)
               {
                   mid++;
               }
            
             else if(nums[mid]==2)
               {
                   swap(nums[mid],nums[high]);
                   high = high-1;
               }
          }
    }
    // 2) By Counting Approach...    
    //     int zero=0,one=0,two=0;
    //     for(int i=0;i<nums.size();i++)
    //      {
    //          if(nums[i]==0) zero++;
    //          if(nums[i]==1) one++;
    //          if(nums[i]==2) two++;
    //      }

    //     //print the all zeros
    //     for(int i=0;i<zero;i++)
    //       {
    //           nums[i]=0;
    //       }

    //      for(int i=zero;i<one+zero;i++)
    //       {
    //           nums[i]=1;
    //       }

    //     for(int i=one+zero;i<nums.size();i++)
    //       {
    //           nums[i]=2;
    //       }
    // }
};