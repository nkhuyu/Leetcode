#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);

    vector<int>::iterator it;
    
    it = test.begin()+2;
    test.insert(it,9);

    for(unsigned int i = 0; i < test.size(); i++)
    {
        cout<< test.at(i)<<endl;
    }
}
