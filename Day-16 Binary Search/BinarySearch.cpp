#include<iostream>
using namespace std;

// int findPeak(int arr[], int n) {

//     int s =0, e = n-1;
//     int mid = s + (e-s)/2;

//     while(s<e) {
//         //cout<<" s " << s <<" e " << e << endl;
//         if(arr[mid] < arr[mid+1]){
//             s = mid+1; 
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }
int binarySearch(int arr[], int size, int key){

    int start = 0;
    int end = size - 1;

    int mid = start + (end - start)/2;

    while(start <= end){

        if(arr[mid] == key){
            return mid;
        }

        if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    } 
    return -1;
}

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenIndex = binarySearch(even ,6, 6);

    cout << " Index of 6 is " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 14);

    cout << " Index of 14 is " << oddIndex << endl;

    // cout<<findPeak(even,6)<<endl;
    // cout<<findPeak(odd,5);


    return 0;
}


