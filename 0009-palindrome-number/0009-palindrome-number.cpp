class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        double rev=0;
        int rem=0;
        while(temp>0){
            rem=temp%10;
            rev=(rev*10)+rem;
            temp=temp/10;

        }
        if(rev==x) return true;
        else return false;
        
    }
};