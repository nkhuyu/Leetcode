#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

class Test
{
    public:
        // get the bit:
        void testGetBit(int num, int i)
        {
            int temp = num & (1 << i);
            bool bit_num_i = ( temp != 0);
            cout<<bit_num_i<<endl;
        }
};

int main()
{
    Test test;
    // test.testStringChar();
    // test.testStringAdd();
    test.testGetBit(7,3);//0
    test.testGetBit(7,2);//1
    test.testGetBit(7,1);//1
    test.testGetBit(7,0);//1

    return 0;
}

