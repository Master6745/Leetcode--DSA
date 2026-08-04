class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int mn=nums[0];
        int mx=nums[n-1];
        vector<int>ans;
        unordered_set<int>s(nums.begin(),nums.end());
        for(int i=mn;i<=mx;i++){
            if(!s.count(i))ans.push_back(i);
        }
        return ans;
    }
};