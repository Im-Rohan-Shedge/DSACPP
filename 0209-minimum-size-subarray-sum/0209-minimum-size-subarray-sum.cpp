class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l=0,sum=0;
        int minn=INT_MAX;
        for(int r=0;r<nums.size();r++){
            
            sum+=nums[r];

            while(sum>=target){
                minn=min(minn,(r-l)+1);
                sum-=nums[l];
                l++;
            }
          

        }
        return (minn==INT_MAX)?0 : minn;
    }
};