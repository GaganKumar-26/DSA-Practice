#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int row=1;

    while(row<=n){
        int space = n- row;

        while(space)
        {
            cout<<" ";
            space = space - 1;
        }
        int column = 1;

        while(column<=row){
            cout<<"*";
            column = column + 1;

        }
        cout<<endl;
        row = row +1;
    }
}