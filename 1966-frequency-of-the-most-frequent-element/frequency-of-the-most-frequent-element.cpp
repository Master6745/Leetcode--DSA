class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long sum=0;
        int j=0;
        int ans=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            long long cost=1LL*nums[i]*(i-j+1)-sum;
            while(cost>k){
                sum-=nums[j];
                j++;
                cost=1LL*nums[i]*(i-j+1)-sum;
            }
            ans=max(ans,i-j+1);


        }
        return ans;
        
    }
};