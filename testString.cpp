#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str;

    for (int i = 1; i <= 9; i++)
    {
        str += char(i+48);
    }
    cout<<str<<endl;
}
