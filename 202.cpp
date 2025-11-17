class Solution {
private:
    int getNext(int n){
        int sum=0;
        while(n>0){
            int r = n%10;
            sum+= r*r;
            n=n/10;
        }
        return sum;
    }
public:
    bool isHappy(int n) {
        unordered_set<int> seen;
        while(n!=1 && !seen.count(n)){
            seen.insert(n);
            n = getNext(n);
        }
        return n==1; //if n is 1 then it is a HAPPY NUMBER hence checking that (BOOLEAN)
    }
};
