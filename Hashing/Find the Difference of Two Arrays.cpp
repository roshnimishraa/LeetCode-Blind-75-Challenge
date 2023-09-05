Time complexity: O(M+N)
Space complexity: O(M+N)

  Task : store ele of arr1 which are not in arr2
        store ele of arr2 which are not in arr1 

Approach : Using 2 set 
1. Requirement to remove Duplicates of an array 
2. Sort the array 

Algorithm  
1. store ele of array 1 and array 2 in set 1 and set 2 respectively
2. make two vector ans 1 and ans 2
3. iterate through set 1 
   if it is not present in set 2 then add in ans 1 
check : if(s2.count(it) == 0) ans1.push_back(it)
4. iterate through set 2 
   if it is not present in set 1 then add in ans 2 
   check : if(s1.count(it) == 0) ans2.push_back(it)
5. return {ans1,ans2}

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
      set<int> s1,s2;
int n1 = nums1.size();
int n2 = nums2.size();

for(auto it : nums1){
    s1.insert(it);
}
for(auto it : nums2)
{
    s2.insert(it);
}

vector<int> ans1,ans2;
for(auto it : s1){
    if(s2.count(it)==0)
{
ans1.push_back(it);
}
}
for(auto it : s2)
{
    if(s1.count(it)==0)
    {
        ans2.push_back(it);
    }
}
return {ans1,ans2};
    }
};
