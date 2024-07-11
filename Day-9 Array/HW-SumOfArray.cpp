#include<iostream>
using namespace std;

int Sum_arr(int arr[], int n){
    int a = 0;
    for(int i = 0; i < n; i++){
        a = arr[i] + a ;
    }
    return a;
}
int main(){
    int size;
    cin >> size;

    int num[100];// num[size] is a bad practice

    //taking input in array
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }

    cout<<"Sum of array "<<Sum_arr(num,size)<<endl;
    return 0;
}