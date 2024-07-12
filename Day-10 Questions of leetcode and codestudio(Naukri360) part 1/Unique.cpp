#include<iostream>
using namespace std;

void unique(int arr[], int size){
    int answer = 0;
    for(int i= 0; i < size; i++){
        answer = answer ^ arr[i];
    }
    cout<<answer<<endl;

    return ;
}

int main(){
    int arr[7]  = {2,4,6,2,1,6,4};

    unique(arr, 7);

    return 0; 
}
