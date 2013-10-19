#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Test {
    public:
        void testInsert()
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
            for(unsigned int i = 0; i < B.size(); i++)
            {
                cout<<B[i]; //21 
            }
            cout<<endl;
            cout<<C.size()<<endl;
            for(unsigned int i = 0; i < C.size(); i++)
            {
                cout<<C[i];//1
            }
            cout<<endl;
        }
        
        void testBeginEnd(){
            vector<int> test(4,0);
            test[0] = 1;
            test[1] = 2;
            test[2] = 3;
            test[3] = 4;

            cout<<*(test.begin())<<endl;//1
            cout<<test.front()<<endl;//1
            cout<<test.back()<<endl;//4
            cout<<*(test.end())<<endl;//0
        }
        
        void testIterator(){
        
            vector<int> test;
            // test.push_back(1);
            // test.push_back(2);
            // test.push_back(3);

            vector<int>::iterator it;

            it = test.begin()+0;
            test.insert(it,9);

            for(unsigned int i = 0; i < test.size(); i++)
            {
                cout<< test.at(i)<<endl;
            }        

        }
            
        void testVectorString()
        {
            string str;
            vector<string> vec;
            vec.push_back("");
    
            cout<<vec.size()<<endl;
            str.push_back('a');
            vec.push_back(str);
            cout<<vec.size()<<endl;
        }
        
        void testVectorVectorSize()
        {
            vector<int> result;
            vector<vector<int> > results;
            results.push_back(result);
            cout<<results.size()<<endl;
        }
};


int main()
{
    Test test;
    test.testInsert();
    test.testBeginEnd();
    test.testIterator();
    test.testVectorString();
    test.testVectorVectorSize();
    return 0;
}
