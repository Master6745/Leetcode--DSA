class Solution {
public:
    int bs(vector<int>& nums,int left,int right,int target){
        if(left>right )return -1;
        int mid=(left+right)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)return bs(nums,mid+1, right, target);
        else return bs(nums,left,mid-1,target);
    }
    int search(vector<int>& nums, int target) {
      return bs(nums,0,nums.size()-1,target);  
    }
};