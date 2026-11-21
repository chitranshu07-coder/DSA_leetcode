class Solution {
public:
    bool isPalindrome(int x) {
    if(x<0) return false;
    int org=x;
    double rev=0;
    int num;
    while(x>0){
        num=x%10;
        rev=10*rev+num;
        x=x/10;
    }
    return org==rev;

    }
};