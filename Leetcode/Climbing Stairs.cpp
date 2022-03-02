/*
Array 'steps' stands for how many distinct ways to climb to each level (index from 0, so 0 means level 1, 1 means level 2 and so on.... ). 
It's trivial to know it has 1 distinct way to climb to stair 1 , and 2 distinct ways to climb to stair 2 . 
For stair level n (n>=3) , you can either (1) climb to stair n-2 , and climb 2 more steps to reach n , OR (2) climb to stair n-1, and climb 1 more step to reach n. 
That said , steps[n]=steps[n-1]+steps[n-2]. In another word, the number of distinct ways to reach level n is the sum of number of distinct ways to reach level n-1 and n-2.
*/
class Solution {
public:
    int climbStairs(int n) {
        vector<int>steps(n+1,0);
        steps[0]=1;
        steps[1]=2;
        for(int i=2;i<n;i++){
            steps[i]=steps[i-2]+steps[i-1];
        }
        return steps[n-1];
    }
};
