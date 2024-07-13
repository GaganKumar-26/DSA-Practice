#include<iostream>
using namespace std;

uint32_t ReverseBit(uint32_t n){
    uint32_t ans = 0 ;
    for(int i = 0; i < 32; i++){
        ans <<= 1;
        ans |= (n&1);
        n >>= 1;
    }
    cout << ans << endl;
    return ans;
}

