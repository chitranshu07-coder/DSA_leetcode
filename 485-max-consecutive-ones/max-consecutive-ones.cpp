class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maximum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=1){
                count=0;
            }
            else if(nums[i]==1){
                count++;
                if(maximum<=count){
                    maximum=count;
                }
            }
        }
        return maximum;
        
    }
};