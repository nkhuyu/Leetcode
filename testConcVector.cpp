#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> A;
    vector<int> B;
    vector<int> C;
    A.push_back(1);
    B.push_back(2);
    B.insert(B.end(),A.begin(),A.end());
    if(C.size() == 0){
        C = A;
    }
    for(int i = 0; i < B.size(); i++)
    {
        cout<<B[i]; //21 
    }
    cout<<endl;
    cout<<C.size()<<endl;
    for(int i = 0; i < C.size(); i++)
    {
        cout<<C[i];//1
    }
    cout<<endl;
}

