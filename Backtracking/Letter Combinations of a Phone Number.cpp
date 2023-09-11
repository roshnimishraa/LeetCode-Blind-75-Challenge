/*
 TC : 4^N * O(N)
 SC : O(N)
*/

class Solution {
    private:
    void helper(int index,string &str,string &output,string mp[],vector<string> &ans)
    {
        if(index>=str.size())
        {
            ans.push_back(output);
            return;
        }

//Since ip is str type "23" to point index value we have to convert into //integer      
int num = str[index]-'0';

        
//to get the correspoing number value 2->abc
string values = mp[num];
 for(int i=0;i<values.length();i++)
 {
   //do
     output.push_back(values[i]);
 //explore 
 helper(index+1,str,output,mp,ans);
 //undo
 output.pop_back();

 }

    }
public:
    vector<string> letterCombinations(string digits) {
    vector<string> ans;
    string output="";
string mp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
if(digits.length() == 0) return ans;
int index=0;
helper(0,digits,output,mp,ans);
return ans;
    }
};
