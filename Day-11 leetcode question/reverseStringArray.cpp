#include<iostream>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;

        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;

        while(start<=end){
            swap(s[start++],s[end--]);
        }
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(),s.end());
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = 0, r = s.size()-1;
        while(l < r){
            char temp = s[l];
            s[l++]=s[r];
            s[r--]=temp;
        }
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;

        while(start<end){
            swap(s[start++],s[end--]);
        }
    }
};


class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        for (int i = 0; i < n / 2; i++){
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp;
    }
    }
};