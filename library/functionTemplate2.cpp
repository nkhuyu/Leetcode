#include<iostream>
#include<vector>

using namespace std;


template <class atype>
int find (vector<atype>vet, atype value)
{
    for(unsigned int i=0; i<vet.size(); i++)
        if(value == vet[i])
            return i;
            
    return -1;                
   
}

int main()
{
    vector<int> vet1;
    vet1.push_back(1);
    vet1.push_back(2);

    vector<double> vet2;
    vet2.push_back(-1);
    vet2.push_back(-2.00);

    int value1 = 1;
    double value2 = -2.00;

    cout<<find(vet1,value1)<<endl;
    cout<<find(vet2,value2)<<endl;

return 0;
}
