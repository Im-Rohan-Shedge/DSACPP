class Solution {
public:
    int trap(vector<int>& height) {
        int lm = 0;
        int rm = 0;
        int count = 0;
        int l = 0;
        int r = height.size() - 1;
        while (l <= r) {
            if (lm < rm) {
                lm = max(lm,height[l]);
                count += lm - height[l];
                l++;
            }
            else{
                rm=max(rm,height[r]);
                count+=rm-height[r];
                r--;
            }
        }
        return count;
    }
};