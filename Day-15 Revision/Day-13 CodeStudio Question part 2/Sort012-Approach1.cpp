#include<iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// void sortOne(int arr[], int n) {

//     int left = 0, middle = n-2, right = n-1;

//     while(left < right) {

//         while(arr[left] == 0 && left < middle < right )  {
//             left++;
//         }

//         while(arr[middle]==1 && left < middle < right){
//             middle++;
//         }

//         while(arr[right]==2 && left < middle < right){
//             right--;
//         }

//         //agar yha pohoch gye ho, iska matlab
//         //arr[left]==1 and arr[right]==0
//         if(left<right)
//         {    
//             swap(arr[left], arr[right]);
//             left++;
//             right--;
//         }
//         else if(left<middle){
//             swap(arr[left], arr[middle]);
//             left++;
//             middle--;
//         }
//         else if(middle<right){
//             swap(arr[middle], arr[right]);
//             middle++;
//             right--;
//         }
            
            
//     }
// }



int main() {

    int arr[8] = {1,1,0,2,0,0,1,0};

    // sortOne(arr, 8);
    sort(arr, arr + 8);
    printArray(arr, 8);


    return 0;
}