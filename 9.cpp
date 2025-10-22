class Solution {
public:
    bool isPalindrome(int x) {
        long int ox=x;
        long int rx=0;

        while(x>0){
            int r=x%10;
            rx=rx*10+r;
            x/=10;
        }
        return rx==ox;
    }
};
