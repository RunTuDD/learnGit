/*************************************************************************
	> File Name: quickSort.cpp
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Sun 12 Jul 2020 07:42:08 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

int getIndex(vector<int>& nums,int low , int high)
{
	int temp = nums[low];

	while(low<high)
	{
		while(nums[high]>=temp  && low<high)
		{
			high--;
		}
		nums[low] = nums[high];

		while(nums[low]<=temp  && low<high)
		{
			low++;
		
		}
		nums[high] = nums[low];
	}
	nums[low] = temp;
	return 0;
}
void quickSort(vector<int>& nums,int low , int high)
{
	int index;
	if(low<high)
	{
		index = getIndex(nums,low,high);
	    quickSort(nums,low,index-1);
	    quickSort(nums,index+1,high);
	}
}

int main(){
	vector<int> nums = {1,4,2,0,5,7,9,3,0};
	int n = nums.size();
	quickSort(nums,0,n-1);

	for(auto i : nums)
	{
		cout<<i<<endl;
	}
	return 0;
}


			

