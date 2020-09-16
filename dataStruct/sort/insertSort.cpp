/*************************************************************************
	> File Name: insertSort.cpp
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Sat 11 Jul 2020 12:33:35 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void insertSort(vector<int>& nums,int n)
{
	int i,j;
	for(i=1; i<n; ++i)
	{
		int temp = nums[i];
		if(nums[i]<nums[i-1])
		{
			for(j = i-1; nums[j]>temp;--j)
			{
				nums[j+1] = nums[j];
			}
			nums[j+1] = temp;
		}
	}
}

int main()
{
	vector<int> nums ={ 1,4,2,9,6,5,8};
	int n = nums.size();
	insertSort(nums,n);

	for(auto i : nums)
	{
		cout<<i<<endl;
	}

	return 0;
}


