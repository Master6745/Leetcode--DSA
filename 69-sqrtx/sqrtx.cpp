class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x;
        int ans=0;
        while(left<=right){
            int mid=left+(right-left)/2;
            long long res=1LL*mid*mid;
            if(res==x)return mid;
            else if(res>x)right=mid-1;
            else{left=mid+1;ans=mid;}
        }
        return ans;
        
    }
};