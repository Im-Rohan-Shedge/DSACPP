class Solution {
public:
    int mySqrt(int x) {
        int low=0;
        int high=x;
        long mid;
        int ans;
        while(low<=high){
        mid=high+(low-high)/2;
        if(mid*mid==x)return mid;
        else if(mid*mid>x) high=mid-1;
        else {
        ans=mid;
        low=mid+1;} 
        }
        
        return ans;
    }
};