class Solution{
    public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n){
        if(n>0)
          while(n%2==0){
              n/=2;
          }
          if(n==1) return true;
          if(n == 0 || n != 1)return false;
        
    }
}; 
