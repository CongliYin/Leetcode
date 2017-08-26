#include<iostream>
#include<vector>
using namespace std;

/*暴力求解法，时间复杂度O(n),空间复杂度O(1)*/
/*
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
	{
		//插入到第一个位置：若数组为空，直接返回0位置
		if(nums.empty())
		{
			return 0;
		}
		//插入到最后一个位置：若数组的最后一个元素都比target小，直接返回数组的长度
		else if(nums[nums.size() - 1] < target)
		{
			return nums.size();
		}

		for(int i = 0; i < nums.size(); i++)
		{
			//正好找到的情况：若数组中序号为i的元素和target相等，则返回i
			if(nums[i] == target)
			{
				return i;
				break;
			}
			//要插入到中间的情况：若序号为i的元素比target大，则插入到当前i的位置，跳出循环
			else if(nums[i] > target)
			{
				return  i;
				break;
			}
		}
	 }
};
*/


/*二分法求解，时间复杂度O(logn),空间复杂度O(n)，最优解法*/
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
	{
        //插入到第一个位置：若数组为空，直接返回0位置
		if(nums.empty())
		{
			return 0;
		}
		int left = 0;
		int right = nums.size() - 1;
		while(left <= right)
		{
			int mid = (right + left)/2;

			if(nums[mid] == target)
			{
				return mid;
			}
			else if(nums[mid] < target)
			{
				left = mid + 1;
			}
			else
			{
				right = mid -1;
				
			}
		}
		//返回的正好是插入的位序
		return left;
    }
};

int main()
{
	Solution s;
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(6);

	cout << s.searchInsert(arr, 0) << endl;

	system("pause");
	return 0;
}