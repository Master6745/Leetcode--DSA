class Solution {
public:
    bool possible(vector<int> & arr,int day,int m,int k){
        int cnt=0;
        int nof=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=day)cnt++;
            else{
                nof+=(cnt/k);
                cnt=0;
            }
        }
        nof+=(cnt/k);
        return nof>=m;
    }
    int minDays(vector<int>& arr, int r, int b) {
        long long val=r*1LL*b*1LL;
        int n=arr.size();
        if(val>n)return -1;
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            mn=min(mn,arr[i]);
            mx=max(mx,arr[i]);

        }
        int low=mn;
        int high=mx;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(possible(arr,mid,r,b))high=mid-1;
            else low=mid+1;
        }
        return low;
        
    }
};