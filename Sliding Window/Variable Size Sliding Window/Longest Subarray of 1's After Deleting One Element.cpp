TC : O(N) 
SC : O(1) 

Task : Find maximum subarray of 1 in which you must have to delete 1 element 
  Corner Case : arr[] = [1, 1, 1] 
   output : 2  atmost 1 element should be deleted 

Algorithm 
1. Count no of zeroes 
2. cZeroes <= k then
find max(ans,j-i) window size-1 i.e j-i+1 - 1 = j-i
  slide the window 
j++ 
3. if cZeroes > k 
  then iterate till cZeroes > k 
  if it is 0 then remove count of 0 and do i++ 
  and slide the window j++
4. return ans 


class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int k=1;
       int n=nums.size();
        int i=0,j=0;
int ans =0;
int countZero =0;

while(j<n){
        // calculation
    if(nums[j] == 0){
countZero++;
    }
    if(countZero <= k){
        ans = max(ans,j-i);
        j++;
    }
    else if(countZero > k)
    {
        while(countZero > k){
// remove for i
if(nums[i] == 0)
    countZero--;
    i++;

  }
//  slide the window
j++;
   }
    }
// Must delete one element 
    return ans;
    }
};
