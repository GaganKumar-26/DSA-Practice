//convert to binary 
// 32 times right shift bcuz 32 byte of code


#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of N "<<endl;
    cin>> n;

    int count = 0;
    while(n != 0){

        if( n & 1){
            count ++ ;
        }
        n = n >> 1;
    }
    cout<<count<<endl;
    return count;
}

/*
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
*/