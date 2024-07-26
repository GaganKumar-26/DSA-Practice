#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int s = 0, e = n - 1;
    int mid = s + (e - s)/2;
    int ans = -1;

    while(s<=e){

        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
        }
        else if(key > arr[mid]){
            s = mid + 1;
        }
        else if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e - s)/2;
    }
    return ans;
}

int main(){

    // int even[7] = {1,2,3,3,3,3,5};
    int arr[6] = {5,7,7,8,8,10};

    // cout<<"First Occurence of 3 is at Index "<<firstOcc(even,7,3)<<endl;
    cout<<"First Occurence of 3 is at Index "<<firstOcc(arr,6,8)<<endl;

    // cout<<"Last Occurence of 3 is at Index "<<lastOcc(even,7,3)<<endl;
    cout<<"Last Occurence of 3 is at Index "<<lastOcc(arr,6,8)<<endl;

    return 0 ;
}