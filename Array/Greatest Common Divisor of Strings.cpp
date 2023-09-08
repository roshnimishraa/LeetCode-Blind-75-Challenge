>>>>>>>>Time complexity: O(N)
GCD calculation takes O(logN) time. But the string iteration and equals checking takes O(N+M) time where, N and M are the length of 
str1 and str2.

>>>>>>Space complexity: O(N)
We are concatenating str1+str2 this is kept in the memory. In the code, we haven't declared extra variable, 
  but this is still stored in the run time memory stack. This will require, O(N+M) memory where, N and M are the length of 
str1 and str2. Thus, we can write O(N).

class Solution {
    private:
    int getGcd(int a,int b)
    {
        if(b == 0) return a;
    return getGcd(b,a%b);
    }
public:
    string gcdOfStrings(string str1, string str2) {
        string result="";
      if(str1+str2 == str2+str1)
      {
          result+=str1.substr(0,getGcd(size(str1),size(str2)));
      }  
   return result;
    }
};
