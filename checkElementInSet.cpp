#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> mySet;
    set<int>::iterator iter;
    for(int i=0;i<5;i++)
    mySet.insert(i*i);
  
    iter = mySet.find(6);
    if(iter != mySet.end())
    {
        cout<<"Yes"<<endl;
        }
}

