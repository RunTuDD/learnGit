/*************************************************************************
	> File Name: selectSort.cpp
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Sat 11 Jul 2020 01:06:24 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void swap(vector<int>& nums, int a, int b)
{
	int temp = nums[a];
	nums[a] = nums[b];
	nums[b] = temp;
}

void selectSort(vector<int>& nums, int n)
{
	int i , j;
	for(i=0; i<n; ++i)
	{
		int min = i;
		for(j =i+1;j<n;j++)
		{
			if(nums[j]<nums[min])
			{
				min = j;
			}
		}
		if(min != i)
		{
			swap(nums,min,i);
		}
	}
}

int main()
{
	vector<int>nums = {2,5,8,2,6,9,0};
	int n = nums.size();
	
	selectSort(nums,n);

	for(auto i : nums)
	{
		cout<<i<<endl;
	}

	return 0;
}
