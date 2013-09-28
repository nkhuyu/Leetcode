#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<vector>
#include<algorithm>



using namespace std;


class Solution
{
    public:
        vector<int> plusOne(vector<int>& digits)
        {
            int len = digits.size();
            unsigned int i;
            for(i = len-1; i >= 0; i--)
            {
                    if(digits[i] != 9)
                    {
                        digits[i] = digits[i] + 1;
                        return digits;
                    }
                    else
                    {
                        digits[i] = 0;
                    }
            }      
                
            if (digits[0] == 0)
                 {
                    digits.insert(digits.begin(),1);
                    return digits;
                 }
        }

};




int main()
{
    vector<int> digits; // 1234
    digits.push_back(1);
   // digits.push_back(2);
   // digits.push_back(3);
   // digits.push_back(4);
    Solution sol;
    sol.plusOne(digits);
   /* unsigned int siz = sol.plusOne(digits).size();
    for(unsigned int i = 0; i < siz; i++)
    {
        cout<<sol.plusOne(digits)[i]<<endl;
    }
   */ 
}
