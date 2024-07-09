#include<iostream>
using namespace std;

bool isEven(int a){
    //odd
    if(a & 1){
        return 0;
    }
    //even
    return 1;
}

int main(){
    int number;
    cin >> number;
    if (isEven(number)){
        cout<<"Number is Even"<<endl;
    }
    else {
        cout<<"Number is odd"<<endl;
    }
    return 0;
     
}