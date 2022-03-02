class Solution {
public:
    int jump(vector<int>& nums) {
        int curr=0;  //elemnt on which my pointer is
        int range=0;  //max range I can jump
        int jumps=0;   //Total number of jumps
        
        for(int i=0;i<nums.size()-1;i++){
            if(i+nums[i]>range)
                range=i+nums[i];
        if(i==curr){
            jumps++;
            curr=range;
        }
    }
        return jumps;
    }
};
