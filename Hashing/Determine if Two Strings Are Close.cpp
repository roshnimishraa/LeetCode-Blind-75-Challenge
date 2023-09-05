TC :  O(N LOG N) + O(N) ~ O(N LOG N) 
sc : O(N)

Given : lower case english alphabet 
   How to find Index in English alphabet 
   ch - 'a' 
  
Task : return true if word 2 can attain word 1 
 ######### By following operation in word 1 in existing char 
1. Swap any two character any no. of times in array 

Input: word1 = "abc", word2 = "bca"
Output: true
Explanation: You can attain word2 from word1 in 2 operations.
Apply Operation 1: "abc" -> "acb"
Apply Operation 1: "acb" -> "bca"
  
2. Change occurences of selected character to any other occuurance of char

>>>>>>>>Approach : These are conditions which need to be fulfilled
1. Every character in word 1 is also present in word 2 
2. Frequency of character in word 1 and word 2 should be same not w.r.t to char but on num 

>>>>>>>>>>>>>>>>>ALGORITHM 
1. CORNER CASE : size of both string are not equal return false 
2. Create two vector array of size 26 
3. Traverse through str1 and str2 store its char (ch) 
i) Find index of both str1 and str2 
ii)    index1 = ch1 - 'a'
    index2 = ch2 - 'a' 
iii) Update freq1 and freq2 of both array 
       freq1[index1]++
        freq2[index2]++
4. Check for validity (2 Conditions) 
i) All char which are in str1 should also be present in str 2
    // if char exists then it should exists in both str 1 and str 2
   if(freq1[i] != 0 && freq2[i] != 0) continue 

    // if char does not exists then it should not exists in both str 1 and str 2
  if(freq[i] == 0 && freq2[i] == 0) continue 

  return false 
ii) Match Frequency of char  
a) Sort frequency which is store in vector freq1 and freq2 then check they are equal or not 
return freq1 == freq2 


Eg. word 1 = c a b b b a 
    word 2 = a b  b c c c 
Here no. of c = 1 in word 1 and c=3 in word 2 
  so in word 1 b occurs 3 times change b with c and vice verse 
 word 1 = b a c c c a 
 word 2 = a b b c c c

Corner case : 1. size of word 1 and word 2 not equal 
              2. char of word 1 and word 2 are not same 



class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n1=word1.length();
        int n2 = word2.length();

    vector<int> freq1(26);
    vector<int> freq2(26);

if(n1 != n2) return false;
for(int i=0;i<n1;i++)
{
    char ch1 = word1[i];
      char ch2 = word2[i];
 // character index 
int idx1 = ch1-'a';
int idx2 = ch2-'a';

// add freq into vector 
freq1[idx1]++;
freq2[idx2]++;

}

// check for validity 
// same char 
// freq same 
for(int i =0;i<26;i++)
{
    // if char exists
    if(freq1[i] != 0 && freq2[i] != 0) 
    continue;

// if char does not exists
    if(freq1[i] == 0 && freq2[i] == 0)
 continue;

return false;
}
// check for same freq first sort the array 
sort(freq1.begin(),freq1.end());
sort(freq2.begin(),freq2.end());

if(freq1 == freq2) return true;
return false;
    }
};
