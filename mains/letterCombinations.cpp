#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Solution {
    public:
        // iterative method
        vector<string> letterCombinations(string digits) {
            const string dict[] = {"", "", "abc", "def","ghi","jkl","mno","qprs","tuv","wxyz"};
            vector<string> results;
            results.clear();
            results.push_back("");

            for(unsigned int i = 0; i < digits.size(); i++)
            {
                vector<string> temps;        
                const string s = dict[digits[i]-'0'];
                for(unsigned int j = 0; j < s.size(); j++)
                {
                    for(unsigned int k = 0; k < results.size(); k++)
                    {
                        temps.push_back(results[k]+string(1,s[j]));
                    }
                }
                results = temps;
            }
            return results;
        }

        // recursive method
        vector<string> letterCombinations2(string digits)       
        {  
            string dict[] = {"", "", "abc", "def","ghi","jkl","mno","qprs","tuv","wxyz"};
            vector<string> results;
            results.clear();
            int n = digits.size();
            if(n == 0)
            {
                results.push_back("");
                return results;
            }
            else
            {
                vector<string> temps;
                string digits_temps = digits.substr(0, n-1);
                // cout<<digits_temps<<endl;
                temps = letterCombinations(digits_temps);
                string s = dict[digits[n-1]-'0'];
                // cout<<s<<endl;
                //  cout<<temps.size()<<endl;
                for(unsigned int i = 0; i < temps.size(); i++)
                {
                    for(unsigned int j = 0; j < s.size(); j++)
                    {
                        results.push_back(temps[i]+string(1,s[j]));
                    }
                }
            }                 
            return results;
        }
};

int main()
{
    Solution sol;
   // cout<<sol.letterCombinations("2")[2]<<endl;
    cout<<sol.letterCombinations2("23443")[0]<<endl;
}
