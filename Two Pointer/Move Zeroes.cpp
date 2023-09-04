TC : O(N) 
SC : O(1) 

Algo 
1. Intialized a pivot as 0 ;
2. if nums[i] != 0 then swap pivot++ 


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int pivot = 0;
int n=nums.size();
for(int i=0;i<n;i++){
    if(nums[i] != 0){
        swap(nums[i],nums[pivot]);
        pivot++;
    }
}
    }
};
