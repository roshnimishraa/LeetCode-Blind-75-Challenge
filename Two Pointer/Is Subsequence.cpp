Algo 
1. Traverse string s using i pointer 
2. Traverse string t using j pointer 
3. Initialize a count = 0 initially
4. If s[i] == t[j] i++ j++ count++
  else j++
5. if count size == s.size() then all ele of s[i] is present in t[j] return true
else 
  return false 

  TC : O(N) 
sc : O(1) 

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int count=0;
 while(i<s.size() && j<t.size())
        {
            if(s[i] == t[j]){
              
                i++;
                j++;
            count++;
            }
else{
    j++;
}
  }
    if(count == s.size()){
        return true;
    }
 else {
     return false;
 }
    }
};
