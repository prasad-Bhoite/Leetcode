class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        // int n = nums.size();
        // for(int i=0;i<n;i++)
        //   {
        //       for(int j=i+1;j<n;j++)
        //        {
        //            if(nums[i] == nums[j])
        //             {
        //                 return (nums[i]);
        //             }
        //        }
        //   }
        //   return 0;

        //Brute Force Approach ...
        // sort(nums.begin(),nums.end());//O(n * logn)

        // int n = nums.size();
        // for(int i=0;i<n;i++)
        // {
        //     if(nums[i]==nums[i+1])
        //     {
        //         return nums[i];
        //     }

        // }

        // return -1;

        //optimized solution...
        // int slow = nums[0];
        // int fast = nums[0];

        // do{
        //     slow = nums[slow];
        //     fast = nums[nums[fast]];
        // }while(slow!=fast);

        // fast = nums[0];

        // while(slow!=fast)
        //  {
        //      slow = nums[slow];
        //      fast = nums[fast];
        //  }

        //  return slow;

        //positioning method...
        while(nums[0]!=nums[nums[0]])
        {
            swap(nums[0],nums[nums[0]]);
        }
        return nums[0];

        //Binary Search wala check karane...
    }
};