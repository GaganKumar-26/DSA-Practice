#include<iostream>
using namespace std;

void update(int arr[], int n){
    cout<<endl<<"Inside the function"<<endl;

    //update array's first element
    arr[0] = 129;

    //printing the array
    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Going back to main function"<<endl;

}

int main(){
    int arr[3] = {5,10,15};

    update(arr,3);

    //printing the array
    arr[0] = 129;

    //printing the array
    cout<<endl<<"Printing in main function"<<endl;


    for(int i = 0; i < 3; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;

}