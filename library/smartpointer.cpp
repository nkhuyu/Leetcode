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
	//begin and end values
	cout<<maptest.begin()->first<<" "<<maptest.begin()->second<<endl;
	//error, end point to nothing
	//cout<<maptest.end()->first<<" "<<maptest.end()->second<<endl;

	for (it = maptest.begin();it != maptest.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}



	//find 2
	map<char,int>::iterator iter;
	iter = maptest.find('b');		
	if (iter != maptest.end())
	{
		cout<< iter->first<<" "<<iter->second<<endl;
	}


	//find 4
	map<char,int>::iterator iterend;
	iterend = maptest.find('d');		
	if (iterend != maptest.end())
	{
		cout<< iterend->first<<" "<<iterend->second<<endl;
	}
	
	return 0;	
}
