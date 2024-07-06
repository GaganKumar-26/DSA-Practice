#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of N "<<endl;
    cin>>n ;

    int pro = 1;
    int sum = 0;

    while(n != 0){
        int digit = n % 10;
        pro = pro * digit;
        sum = sum + digit;

        n = n / 10;
    }

    int answer = pro - sum ;
    cout<< answer << endl;
    return answer;
}

/*
for better complexity
class Solution {
public:
    int subtractProductAndSum(int n) {

        int prod = 1;
        int sum = 0;

        while(n!=0){
    
            int dig=n%10;
            sum+=dig;
            prod*=dig;
            n/=10;
        }
        return prod-sum;
    }
};
*/