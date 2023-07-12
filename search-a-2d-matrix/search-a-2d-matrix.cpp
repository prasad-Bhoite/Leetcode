class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int row = matrix.size();
        // int col = matrix[0].size(); 

        // int start = 0;
        // int end = (row*col) -1;

        // int mid = start + (end-start)/2;
        // while(start<=end)
        //   {
        //       int element = matrix[mid/col][mid%col];
        //       if(element == target)
        //         {
        //           return 1;
        //         }
        //      else if(element < target)
        //            {
        //               start = mid+1;
        //            }
        //       else
        //            {
        //             end = mid-1;
        //            } 
        //        mid = start+(end-start)/2;
        //   }
        //   return 0;
        int row = matrix.size();
        int col = matrix[0].size();// { {0,1,2},{1,2,3} }

        int start = 0;
        int end = (row*col)-1;

        
        while(start <= end)
        {
              int mid = start + (end-start)/2;
              if(matrix[mid/col][mid%col] > target)
               {
                   end = mid-1;
               }
            else if(matrix[mid/col][mid%col] < target)
              {
                  start = mid+1;
              }
            else
            {
                return 1;
            }
        }
        return 0;
    }
};