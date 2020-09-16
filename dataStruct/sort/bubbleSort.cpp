/*************************************************************************
	> File Name: bubbleSort.cpp
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Thu 09 Jul 2020 05:51:14 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int>& num, int a , int b)
{
	int temp = num[a];
	num[a] = num[b];
	num[b] = temp;
}


void bubbleSort(vector<int>& num ,int n)
{
	int flag = 1;
	int i , j;
	for(i=1; i<n && flag==1; ++i)
	{
		flag = 0;
		for(j = n-1; j>=i; --j)
		{
			if(num[j]<num[j-1])
			{
				swap(num,j,j- 1);
				flag = 1;
			}
		}
	}
}

int main()
{
	vector<int> num = {1,4,7,9,2,3,6,8};
	int n = num.size();
	bubbleSort(num,n);

	for(auto it = num.begin(); it != num.end(); ++it)
	{
		cout<<*it<<endl;
	}


	return 0;
}
