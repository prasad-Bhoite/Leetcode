class Solution {
public:
    int binaryGap(int n) {
        int curr=0,ans=0;
        int pre=-1;
        while(n){
            if((n&1)!=0){
                if(pre!=-1) ans=max(ans,curr-pre);
                pre=curr;
            }
            curr++;
            n=(n>>1);
        }
        return ans;
    }
};