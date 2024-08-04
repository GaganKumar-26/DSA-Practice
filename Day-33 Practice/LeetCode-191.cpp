class Solution {
public:
    int hammingWeight(int n) {
        int count=0;

        while (n!=0){
            //checking last bit
            if (n&1){
                count++;
            }
            n = n>>1;
        }
        return count;
    }
};


class Solution {
public:
    int hammingWeight(int n) {
        int count=0;

        for (int i = 0;i<32;i++){
            if((n >> i) & 1){
                count += 1;
            }
        }
        return count;
    }
};