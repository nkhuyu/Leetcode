/**
Suppose that you are given a string. Write a function to find the first nonrepeated character in that string. Heres an example: suppose you are given the string interview. The first nonrepeated character in that string is n, because i appears twice in the string. And the first nonrepeated character for racecar is e  which is the first and only nonrepeated character. Explain the efficiency of your          algorithm.
 */


#include <iostream>
#include <string>

using namespace std;

int main()
{
    //string s = "interview";
    //string s = "racecar";
    //string s = "1234567";
    string s = "abcdefgfedcba";
    int arr[256] = {0};
    int n = s.size();
    
    for(int i = 0; i < n; i++)
    {
        arr[s[i]]++;
    }
    
    for(int i = 0; i < n; i++)
    {
        if(arr[s[i]] == 1)
        {        
            char res = s[i];
            cout << res <<endl;
            break;
        }
    }
   //cout << "Hello World" << endl; 
   
   return 0;
}
