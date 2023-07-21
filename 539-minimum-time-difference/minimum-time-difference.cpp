class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
      
      //step 1: calculate the minutes
      
      vector<int> minutes;
      for(int i=0;i<timePoints.size();i++)
        {
            string curr = timePoints[i];
            int hrs = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            int totalMinutes =  (hrs*60)+min;
            minutes.push_back(totalMinutes);
        }

        //step 2 : sort the minutes for calculating the minimum difference of two adjacent elements...

        sort(minutes.begin(),minutes.end()); // TC - O(nlogn) -->By default uses which algorithm->

        //step 3 : calculate the minimum difference...
        
        int mini = INT_MAX;
        int n = minutes.size();
        for(int i=0;i<n-1;i++)
        {
            int diff = minutes[i+1] - minutes[i];
            mini = min(mini,diff);
        } 

        //step 4 : for something extra case ...
        
        int diff1 = minutes[n-1] - minutes[0];
        int diff2 =(minutes[0]+1440)- minutes[n-1];
        int lastDiff = min(diff1,diff2);
        mini = min(mini,lastDiff);
        return mini;
    }
};