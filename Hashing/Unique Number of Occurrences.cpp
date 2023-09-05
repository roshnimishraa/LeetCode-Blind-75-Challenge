Time complexity: O(n)
Space complexity: O(n)

Task : return true if all frequency of array ele are unique 

Approach : Map + set 
1. to store ele and freq use map 
2. to check freq use set 
3. check in set if freq exist or not
if exists return false 
else add into set 
freq = it.second
check : if(st.find(freq) != st.end()) return false //freq exists 
  else st.insert(freq) 
4. return true
  
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
// {value,frequency}
unordered_map<int,int> umap;
unordered_set<int> st; // to store and check freq 
for(int i=0;i<n;i++)
{
    umap[arr[i]]++;
}

for(auto it : umap)
{
   int freq = it.second;
   if(st.find(freq) != st.end())
 return false;
 else
 st.insert(freq);
    }
    return true;
   
}

};
