
Efficient Approach : Two Pointer 

TC : O(N) 
SC : O(1) 

Algorithm : 
1. First take two pointer i,j where 
    i=0
j = n-1 
2. Initialize count=0
3. Sort the array 
4. Traverse the vector till i<j 
i) if(A[i]+A[j] == k) i++ j-- count++
ii) if(A[i] + A[j] < k)  i++
iii) if(A[i] + A[j] > k) j-- 
5. return count 

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
    int n=nums.size();
    int i=0,j=n-1;
    int count=0;
    sort(nums.begin(),nums.end());
    while(i<j)
    {
  if(nums[i]+nums[j] == k){
      i++;
      j--;
      count++;
  }
    if(nums[i]+nums[j]>k) j--;
    if(nums[i]+nums[j]<k) i++;
    }
  
    return count;
    }
};
