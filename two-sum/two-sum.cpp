class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // int front=0;
        // int rear = nums.size()-1;

        // //sort the vector...
        // sort(nums.begin(),nums.end());

        // while(front < rear)
        //   {
        //       int sum = nums[front] + nums[rear];
        //       if( sum == target )
        //         {
        //                 break;
        //         }
        //       else if(sum > target)
        //        {
        //            rear--;
        //        }
        //        else
        //        {
        //            front++;
        //        }
        //   }
        //   return {front,rear};
         int n=nums.size();
        int a[n];
        //3 2 4
    //sorted arr 2 3 4 //l=0,r=2 check value at l and r and match with the copy of given array element 
     for(int i=0;i<nums.size();i++){
         a[i]=nums[i];
     }
        vector<int>v;
        sort(nums.begin(),nums.end());
               int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]==target){
              
             break;
            }
            else if(nums[l]+nums[r]>target){
                r--;
            }
            else{
                l++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[l]==a[i]){
                v.push_back(i);
            }
            else if(nums[r]==a[i]){
                v.push_back(i);
            }
        }
        
        return v;
    }
};