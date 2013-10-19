#include<iostream>
#include<vector>
#include<cmath>

using namespace std;


vector<int> primes(int N)//get all the primes less than or equal to N
{
    vector<int> results;
    results.push_back(2);
    results.push_back(3);
    results.push_back(5);
    results.push_back(7);

    for(int i = 11; i <= N; i += 2)
    {
        int m = results.size();
        int a = sqrt(i);
        bool isprime = true;

        for (int j = 0; j < m; j++)
        {
            if( a < results[j]) break;

            if(i % results[j] == 0)
            {
                isprime = false; 
                break;               
            }
        }
        if(isprime)
            results.push_back(i);
    }

    return results;
}

int getNumberOfPrimes(int N) {
        
    return primes(N).size(); 
}

int main()
{
    int N = 100;
    cout<<getNumberOfPrimes(N)<<endl;
    return 0;
}
