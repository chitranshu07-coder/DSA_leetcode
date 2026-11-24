class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int org=x;
        int sum=0;
        while(x!=0){
            int last_digit=x%10;
            sum+=last_digit;
            x=x/10;
        }
        if(org%sum==0) return sum;
        else return -1;
        
    }
};