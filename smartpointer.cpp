#include<iostream>
#include<map>


using namespace std;

int main()
{
	map<char,int> maptest;
	map<char,int>::iterator it;
	
	maptest['a']=1;
	maptest['b']=2;
	maptest['c']=3;
	maptest['d']=4;

	for (it = maptest.begin();it != maptest.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}



	//find 1
	map<char,int>::iterator iter;
	iter = maptest.find('b');		
	if (iter != maptest.end())
	{
		cout<< iter->first<<" "<<iter->second<<endl;
	}


	
	return 0;	
}
