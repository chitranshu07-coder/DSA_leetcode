class Solution {
public:
    int countPrimes(int n) {
        if(n<2) return 0;

        vector<int>prime(n,1);
        prime[0]=0;
        prime[1]=0;

        for(int i=2;i*i<n;i++){
            if(prime[i]==1){
                for(int j=i*i;j<n;j+=i){
                    prime[j]=0;
                }
            }
        }
        int totalPrimeNo=0;
        for(int i=2;i<n;i++){
            if(prime[i]==1) totalPrimeNo++;
        }
        return totalPrimeNo;





        // brute force approach
        // int count=0;

        // for(int i=2;i<n;i++){
        //     int j;
        //     for(j=2;j<i;j++){
        //         if(i%j==0){
        //             break;
        //         }
        //     }
        //     if(i==j) count++;
        // }
        // return count;


    }
};