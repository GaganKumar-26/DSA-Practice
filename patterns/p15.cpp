#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row =1;
     
    while (row<=n){
        //print space

        int space = n - row;
        while(space){
            cout<<" ";
            space =space -1;
        }
        //print first triangle
        int column = 1;
        while(column<=row){
            cout<<column;
            column=column +1;
        }
        //print second triangle

        int start = row - 1;
        while(start) {
            cout<<start;
            start = start - 1;
        }

        cout<<endl;
        row = row + 1;


    }
}