#include<iostream>
#include<vector>
using namespace std;
int main()
vector<int> test(4,0);
test[0] = 1;
test[1] = 2;
test[2] = 3;
test[3] = 4;

cout<<test.end()<<endl;
}