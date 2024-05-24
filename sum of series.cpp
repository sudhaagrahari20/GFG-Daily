class Solution {
  public:
    long long seriesSum(int n) {
        if(n%2==0){
            return n/2*1LL*(n+1);
        }
        else {
            return ((n+1)/2)*1LL*n;
        }

    }
};
