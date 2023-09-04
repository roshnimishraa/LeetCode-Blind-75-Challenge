Efficient Approach  : Unordered Map 
Time Complexity: O(N)
Auxiliary Space: O(N)

1. Initialize a variable, say ans, to store the maximum number of pairs with the sum K.
2. Initialize a hash table, say S, to store the frequency of elements in arr[].
3. Traverse the array arr[] using a variable, say i, and perform the following steps:
4. If the frequency of (K – arr[i]) is positive, then increment ans by 1 and decrement the frequency of (K – arr[i]) by 1.
5. Otherwise, insert arr[i] with frequency 1 in the Hash Table.
6. After completing the above steps, print the value of ans as the result.

class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int,int> s;
        for(auto i:nums){
            if(s[k-i] > 0){
                s[k-i]--;
                count++;
            }
            else{
                s[i]++;
            }
        }
        return count;
    }
};

##################Better Approach : Two Pointer 

Time Complexity: O(N*log N) sort func take O(log N ) + O(N) 
Auxiliary Space: O(1)

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
