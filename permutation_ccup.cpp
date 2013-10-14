#include<iostream>
#include<vector>
#include<string>
#include<ctime>
#include<cstdio>

using namespace std;

/** Compute permutations of a string
    The idea is from career cup 150(page 324)
    Let n the size of the string:

    1. Suppose string str = a
        P1 = {a}
    2. string str = ab   
        P2 = {ab, ba}
    3. string str = abc
        P3 = {cab,acb,abc,cba,bca,bac}

    Idea: how to get P3 from P2? Push c into every string in P2.
*/


class Helper
{
    public:
        // Insert a char into a string at position i
        string insertCharToString(char c, string str, int i)
        {
            int n = str.size();
            if(i < 0 || i > n)
            {
                cout<<"i ="<< i<<". " << "Error: i must be in [0, n]" <<endl;
            }
            string start = str.substr(0,i);
            string end =str.substr(i,n);
            return start + c + end;
        }

        //Get permutations for a string by using the idea of career cup 150
        vector<string> getPerms(string str)
        {
            vector<string> permutations;
            //Base case
            if(str.size() == 0)
            {
                permutations.push_back(""); //must push back empty string
                return permutations;
            }
            else
            {
                char c = str.at(0);
                string reminder = str.substr(1,str.size());
                vector<string> words = getPerms(reminder);
                for(unsigned int i = 0; i < words.size(); i++)
                {
                    for(unsigned int j = 0; j <= words[i].size(); j++)
                    {
                        permutations.push_back(insertCharToString(c,words[i],j));
                    }
                }
            }
            return permutations;
        }

};

int main()
{   
    clock_t time_start = clock();
    //test substring
    /* string str = "abcde";
    int n = str.size();
    cout<<str.substr(0,0)<<endl;// nothing
    cout<<str.substr(0,1)<<endl;// a
    cout<<str.substr(1,n)<<endl;// bcde
    */

    // test insertCharToString
    /* string str = "word";
    Helper help;
    for(int i = 0; i <= str.size(); i++)
    {
        cout<<help.insertCharToString(8+'0',str,i)<<endl;
    }
    */
    
    string str = "ab";
    vector<string> res;
    Helper help;
    res = help.getPerms(str);
    for(unsigned int i = 0; i < res.size(); i++)
    {
        cout<<res[i]<<endl;
    }
    
    clock_t time_end = clock();
    cout<< "Total time: "<< double((time_end-time_start)*1000/CLOCKS_PER_SEC)<<" ms"<<endl;
    //cout<<(CLOCKS_PER_SEC)<<endl;
    return 0;
}


