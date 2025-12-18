class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int i=0;
        while( i<nums.size()){
            int flag=1;
            for(int j=0;j<nums.size();j++){
               if(i==j) continue;
                if(nums[i]==nums[j]){
                    flag=0;
                
                    break;
                }
            }
            if(flag==1) return nums[i];
            i++;
        }
        return 0;

       
    }
};