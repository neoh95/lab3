#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main()
{
	int n,tmp=0,total_weight=0;
	ifstream inFile("file.in",ios::in);
	inFile >> n;
	vector<int> v(n);
	for(int i=0;i<v.size();++i)
	{
		inFile >> v[i];
	}
	for(int i=n-1;i>0;--i)
	{
		for(int j=0;j<i;++j)
		{
			if(v[j]<v[j+1])
			{
					tmp=v[j];
					v[j]=v[j+1];
					v[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<5;++i)
	{
		total_weight=v[i]+total_weight;
	}
	cout << total_weight << endl;
}
