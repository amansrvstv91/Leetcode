class Solution {
public:
    int calculateScore(int a, int b) {
      int s1=bitset<8>(a).count();
      int s2=bitset<8>(b).count();
        if(s1>=s2){
            return s1*s2;
        }
        return s2/s1;
    }
};