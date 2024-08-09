#include<iostream>
#include<vector>
class Solution {
public:
    bool isPossible(vector<int>& nums, int k, int mid){
        int studentCount = 1;
        int pageSum = 0;

        for(int i=0; i<nums.size(); i++){
            if(pageSum + nums[i] <= mid){
                pageSum += nums[i];
            } 
            else{
                studentCount ++;
                if(studentCount > k || nums[i] > mid){
                    return false;
                }
                pageSum = nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int s = 0;
        int sum = 0;

        for(int i=0; i<nums.size(); i++){
            sum += nums[i];
        }

        int e = sum;
        int ans = -1;
        int mid = s +(e-s)/2;

        while(s<=e){

            if(isPossible(nums,k,mid)){
                ans = mid;
                e = mid - 1;
            }
            else{
                s = mid + 1;
            }
            mid = s +(e-s)/2;
        }
        return ans;
    }
};