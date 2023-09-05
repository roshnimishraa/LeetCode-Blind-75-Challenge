TC : O(N) 
SC : O(1) 

Algorithm
1. Count no. of zero Count by pointer j
2. if zeroCount is less than k then move pointer j++
3. if zeroCount is == k then find max window size of zeroes maxi = max(maxi,j-i+1)
4. if zeroCount > k then iterate till zeroCount == k till then remove calculation for i zeroCount-- 
  // slide the window i++ j++ 
5. return maxi


class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
   // variable size
   int i=0,j=0;
   int zeroCount=0;
   int ans=0;
   int n=nums.size();
   while(j<n)
   {
    //    calculation 
    if(nums[j]==0){
        zeroCount++;
    }
 if(zeroCount <= k ){
     ans = max(ans,j-i+1);
     j++;
 }
else if(zeroCount > k)
{
    while(zeroCount > k) 
    {
        if(nums[i]==0){
       //remove calculation for i
 zeroCount--;
        }
 
        //slid  the window
        i++;
    }
    j++;
}
   } 
   return ans;
    }
};
