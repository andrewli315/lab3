#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int total,weight,to_w=0;
	vector<int>count;
	fstream fin;
	fin.open("file_in.txt",ios::in);
	fin>>total;
	while(fin>>weight)
	{
		count.push_back(weight);
	}
	std::sort(count.begin(),count.end());
	for(int i=total;i>3;i--)
	{
		to_w += count.at(i-1);
	}
	cout<<to_w<<endl;
	return 0;

}
