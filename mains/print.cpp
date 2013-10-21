#include"print.h"
#include<vector>
#include<iostream>

using namespace std;

Print::void printVector(vector<int> vec)
{
    for(unsigned int i = 0; i < vec.size(); i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}

