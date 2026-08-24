class Solution {
public:
    long long findmax(vector<int> &v){
    long long mx=INT_MIN;
    long long n=v.size();
    for(long long i=0;i<n;i++){
        mx=max(mx,1LL*v[i]);
    }
    return mx;
}
long long calculate(vector<int> &v,int hourly){
    long long total=0;
    long long n=v.size();
    for(long long i=0;i<n;i++){
        total+=ceil((double)v[i]/(double)hourly);
    }
    return total;
}
    int minEatingSpeed(vector<int>& v, int h) {
        int low=1,high=findmax(v);
    while(low<=high){
        int mid=low+(high-low)/2;
        long long total=calculate(v,mid);
        if(total<=h)high=mid-1;
        else low=mid+1;
    }
    return low;
        
    }
};