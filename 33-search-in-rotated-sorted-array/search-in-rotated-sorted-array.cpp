class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int start = 0;
        // int end  = nums.size()-1;

        // while(start <= end)
        // {
        //     long mid = start + (end-start)/2;
        //     if(nums[mid] == target)
        //      {
        //          return mid;
        //      }
            
        //     if( mid-1 > 0 && nums[mid-1] == target)
        //     {
        //         return mid-1;
        //     }

        //     if( mid+1 < nums.size() && nums[mid+1] == target)
        //     {
        //         return mid+1;
        //     }
        //     if(nums[mid] > target)
        //     {
        //         end = mid-1;
        //     }
        //     else
        //     {
        //         start = mid+1;
        //     }
        // }
        // //not found
        // return -1;


        int low = 0, high = nums.size() - 1; //<---step 1
  while (low <= high) { //<--- step 2
    int mid = (low + high) >> 1; //<----step 3
    if (nums[mid] == target)
      return mid; // <---step 4

    if (nums[low] <= nums[mid]) { //<---step 5
      if (nums[low] <= target && nums[mid] >= target)
        high = mid - 1; //<---step 6 
      else
        low = mid + 1; //<---step 7
    } else { //<---step 7
      if (nums[mid] <= target && target <= nums[high])
        low = mid + 1;
      else
        high = mid - 1;
    }
  }
  return -1; //<---step 8
    }
};