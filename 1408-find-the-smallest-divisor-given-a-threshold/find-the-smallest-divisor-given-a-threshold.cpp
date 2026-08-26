class Solution {
public:
    int sum1(vector<int>&nums,int div,int n){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)(nums[i])/(double)(div));
        } 
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        if(n>threshold)return -1;
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sum1(nums,mid,n)<=threshold)high=mid-1;
            else low=mid+1;
        }
        return low;

        
    }
};