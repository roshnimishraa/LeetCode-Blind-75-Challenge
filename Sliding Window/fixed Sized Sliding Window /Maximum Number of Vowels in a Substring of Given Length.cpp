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
