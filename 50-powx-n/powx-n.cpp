class Solution {
public:
    double myPow(long double x, int n) {
        long double ans=1.0;
        long long power=n;
        if(power<0){
            power=-power;
            x=1/x;
        }
        if(power==0) return 1;
        while(power!=0){
            if(power%2==1){
                ans=ans*x;
            }
            x=x*x;
            power=power/2;

        }
        return (double)ans;
        
    }
};