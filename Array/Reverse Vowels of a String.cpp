Approach : Two Pointer

class Solution {
public:
 bool vowel(char c)
 {
     return (c == 'a' || c == 'A' || c == 'E' || c=='e' || c=='i'
     || c == 'I' || c == 'o' || c == 'O' || c =='u' || c == 'U');
 }
    string reverseVowels(string s) {
        int n =s.length();
        int i=0;
        int j=n-1;
        while(i < j)
        {
        while(i<j && vowel(s[i])==false) i++;
        while(i<j && vowel(s[j])==false) j--;
        if(i<j) swap(s[i++],s[j--]); 
        }
        return s;
    }
};
