#include<iostream>
#include<vector>
#include<string>

using namespace std;
int main()
{
    string str;
    vector<string> vec;
    vec.push_back("");
    
    cout<<vec.size()<<endl;
    str.push_back('a');
    vec.push_back(str);
    cout<<vec.size()<<endl;
}
