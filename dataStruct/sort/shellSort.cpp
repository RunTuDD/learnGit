/*************************************************************************
	> File Name: shellSort.cpp
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Sun 12 Jul 2020 05:48:09 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void shellSort(vector<int>& nums, int n)
{
	int increment = n;
	while(increment>1)
		{
			increment = increment/2;
			int i,j;
			for(i = increment; i<n; ++i)
			{
				int temp = nums[i];
				if(nums[i]<nums[i-increment])
				{
			    	for(j=i-increment;j>=0  && nums[j]>temp ;j -= increment)
			    	{
						nums[j+increment] = nums[j];
					    nums[j] = temp;
					}
				}
			}
		}
}

int main()
{
	vector<int> nums = {1,4,7,3,8,0,2,6,5,1};
	int n = nums.size();
    shellSort(nums,n);

	for(auto i : nums)
	{
		cout<<i<<endl;
	}
	for(auto j = nums.begin();j != nums.end();++j)
	{
		cout<<"\t"<<*j<<endl;
	}

	return 0;
}
	
