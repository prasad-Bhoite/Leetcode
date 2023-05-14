class Solution {
    public void sortColors(int[] nums) {
         int n = nums.length;
         int cZero=0;
         int cOne=0;
         int cTwo=0;
        for(int i=0;i<n;i++)
        {
              if(nums[i]==0)
              {
                cZero++;
              }
              if(nums[i]==1)
              {
                cOne++;
              }
              if(nums[i]==2)
              {
                cTwo++;
              }
        }

        for(int i=0;i<cZero;i++)
        {
           nums[i] = 0;
        }

        for(int i=cZero;i<cZero+cOne;i++)
        {
           nums[i] = 1;
        }

        for(int i=cZero+cOne;i<n;i++)
        {
           nums[i] = 2;
        }
    }
}