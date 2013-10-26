#include<iostream>


using namespace std;

template <class Tem>

Tem absoluteValue(Tem var)
{
    return (var>0) ? var: -var;
}


int main()
{
    int iVar = 5;
    float fVar = -5.0;
    double dVar = -5.00;

    cout << absoluteValue(iVar)<<endl;
    cout << absoluteValue(fVar)<<endl;
    cout << absoluteValue(dVar)<<endl;
   
return 0;   
}
