#include<iostream>
#include<vector>
#include<map>

using namespace std;

class Solution {
public:
vector<int> twoSum(vector<int> &numbers, int target) {
        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        vector<int> res;
	map<int,int> tempMap;
	int index1, index2;
	
	for(int i=0;i<numbers.size();i++)	
	{	
		tempMap[numbers[i]]=i;
	}
	map<int,int>::iterator iter;

	for(int j=0; j<numbers.size();j++)
	{
		iter =tempMap.find(target-numbers[j]);	
		if(iter != tempMap.end())
		{
			index1=j;
			index2=iter->second;
			break;
		}		
 	}
	res.push_back(index1+1);
	res.push_back(index2+1);
	return res;
  }
};


int main()
{	
	vector<int> numbers;
	numbers.push_back(2);
	numbers.push_back(7);
	numbers.push_back(11);
	numbers.push_back(13);		
	int target = 9;
	
	Solution sol;
	for(int i=0;i< sol.twoSum(numbers, target).size();i++)
	{
		cout<<sol.twoSum(numbers, target)[i]<<endl;
	}

	return 0;
}
