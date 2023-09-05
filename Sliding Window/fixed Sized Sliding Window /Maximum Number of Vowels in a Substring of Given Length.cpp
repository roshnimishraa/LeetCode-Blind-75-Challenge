TC : O(N) 
SC : O(1) 

Algo 
1. Check char is vowel or not 
2. if vowel then count ++
3. if window size < k then j++
4. else if window size == k find max count 
initialize maxi = 0 
    maxi = max(maxi,count) 
5. remove for i 
 isVowel(s[i])  count--
6. slide the window i++ j++
7. return ans


class Solution {
    private:
    bool isVowel(char ch)
    {
        if(ch=='a' || ch=='e'||ch=='i' || ch=='o' || ch=='u')
        {
            return true;
        }
        else {
       return false;
        }
 
    }
public:
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int n=s.size();
        int count=0;
    int ans = 0;
    
while(j<n)
        {
            if(isVowel(s[j])){
                count++;
            }
            // calculation
           if(j-i+1 < k)
            {
                j++;
            }
else if(j-i+1 == k)
{
    //calculation ->ans
    ans = max(ans,count);
     //remove for i 
    if(isVowel(s[i])) 
    count--;
    i++;
    j++;
}
 }
        return ans;
    }
};
