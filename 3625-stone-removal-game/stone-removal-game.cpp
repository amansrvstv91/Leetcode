class Solution {
public:
    bool canAliceWin(int n) {
        int rem=10;  
        while(n>=rem){
            n=n-rem;
            rem=rem-1;
        }
        if((10-rem)%2==1){
            return true;
        }
        return false;;
    }
};