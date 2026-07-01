class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        unordered_map <int,int> freq;
        int maxx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
            freq[nums[i]]++;
            maxx=max(maxx,freq[nums[i]]);
            }
            else{
                freq.clear();   
            }


        }
        return maxx;
    }
};