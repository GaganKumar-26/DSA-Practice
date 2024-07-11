#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[], int n){

    int mini = INT_MAX;

    for(int i = 0; i < n; i++){
        // if(num[i] < mini){
        //     mini = num[i];
        // }
        mini = min(mini, num[i]);
    }
    return mini;
}

int getMax(int num[], int n){

    int maxi = INT_MIN;

    for(int i = 0; i < n; i++){
    //     if(num[i] > maxi){
    //         maxi = num[i];
    //     }
        maxi = max(maxi, num[i]);
    }
    
    return maxi;
}

int main(){
    int size;
    cin >> size;

    int num[100];// num[size] is a bad practice

    //taking input in array
    for(int i = 0; i < size; i++){
        cin >> num[i];
    }
    
    cout<<"maximum value is "<<getMax(num,size)<<endl;
    cout<<"minimum value is "<<getMin(num,size)<<endl;

    return 0;
}