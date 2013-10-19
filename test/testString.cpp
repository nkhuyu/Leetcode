#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Test
{
    public:
        void testStringChar()
        {
            string str;
            string str1;
            for (int i = 1; i <= 9; i++)
            {
                str += char(i+48);
                str1 += char(i+'0'); 
            }
            cout<<str<<endl;//123456789
            cout<<str1<<endl;//123456789
        }

        void testStringAdd()
         {
             string str = "abcdefgh";
             string str1;
             str1 = str1 + string(1,str[0]);
             cout<<str1<<endl;//a
    
             string str2;
             str2 ="";
             cout<<str2.size()<<endl;//0
             cout<<str2<<endl;
         }

        void testSubString()
        {
            string str = "abcde";
            int n = str.size();
            string str1 = str.substr(0,n-1);
            cout<<str1<<endl;
        }
};

int main()
{
    Test test;
    // test.testStringChar();
    // test.testStringAdd();
    test.testSubString();
    
    return 0;
}

