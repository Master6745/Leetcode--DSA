class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        for(auto  x:nums2){
            auto it=find(nums1.begin(),nums1.end(),x);
            if(it!=nums1.end()){
                ans.push_back(x);
                nums1.erase(it);
            }
        }
        return ans;
    }
};
 