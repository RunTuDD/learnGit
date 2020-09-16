/*************************************************************************
	> File Name: mergeSort.cpp
	> Author: lemon
	> Mail: runtudd@gmail.com 
	> Created Time: Tue 14 Jul 2020 12:42:36 PM CST
 ************************************************************************/

#include<iostream>
#include<vector>
using namespace std;

void mergeArray(vector<int>& nums,int start, int mid, int end, vector<int>& temp)
{
	int i =start;
	int j = mid+1;
	int t = 0;
    while(i<=mid&&j<=end)
	{
		if(nums[i]<nums[j])
		{
			temp[t] = nums[i];
			t++;
			i++;
		}
		else{
			temp[t] = nums[j];
			j++;
			t++;
		}
	}
	while(i<=mid)
	{
		temp[t] = nums[i];
		i++;
		t++;
	}
	while(j<=end)
	{
		temp[t] = nums[j];
		j++;
		t++;
	}

	for(int s = 0; s<t;s++)
	{
		nums[s+start] = temp[s];
	}
}


void mergeSort(vector<int>& nums,int start, int end, vector<int>& temp)
{
	if(start<end)
	{
		int mid = (start+end)/2;
		mergeSort(nums,start,mid,temp);
		mergeSort(nums,mid+1,end,temp);
		mergeArray(nums,start,mid,end,temp);
	}
}

int main()
{
	vector<int> nums = {1,5,9,2,7,9,4,1};
	int n = nums.size();
    vector<int> temp(n,0);

	mergeSort(nums,0,n-1,temp);

	for(auto i : nums)
	{
		cout<<i<<endl;
	}

	return 0;
}


