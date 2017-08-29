//Leetcode#53: Maximum Subarray
//题目描述：求一个数组中子数组和的最大值，需要注意的是，子数组一定要是连续的
//思   路1：传统解法中，这是一道典型的动态规划题目，利用最优子结构求解
//          当数组元素为0个时，返回最大值为0
//          当数组元素大于0个时，遍历数组，当前最优解为：max(上一个最优解 + 当前数组元素，当前数组元素)
//          全局最优解为：max(上一个全局最优解，当前最优解)
//思   路2：分治法，将数组分成左右两部分，分别求最优解 lmax,rmax
//          然后从中间向左右两边扫描，再求出最优解 mmax
//          全局最优解为：max(lmax,rmax,mmax)


#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//复杂度为O(n)的解法，动态规划
class Solution 
{
public:
    int maxSubArray(vector<int>& nums) 
	{
		if(nums.size() == 0)
		{
			return 0;
		}
		int sum = nums[0];
		int maxSum = nums[0];

		for(int i = 1; i < nums.size(); i++)
		{
			sum = max(sum + nums[i], nums[i]);
			maxSum = max(maxSum,sum);
		}
		return maxSum;
    }
};

//复杂度为O(logn)的解法，分治法
//将数组从中间分成两部分，分别求最大值，然后求整个的最大值
/*
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if (nums.empty()) return 0;
        return helper(nums, 0, (int)nums.size() - 1);
    }
    int helper(vector<int>& nums, int left, int right) {
        if (left >= right) return nums[left];
        int mid = left + (right - left) / 2;
        int lmax = helper(nums, left, mid - 1);
        int rmax = helper(nums, mid + 1, right);
        int mmax = nums[mid], t = mmax;
        for (int i = mid - 1; i >= left; --i) {
            t += nums[i];
            mmax = max(mmax, t);
        }
        t = mmax;
        for (int i = mid + 1; i <= right; ++i) {
            t += nums[i];
            mmax = max(mmax, t);
        }
        return max(mmax, max(lmax, rmax));
    }
};
*/

int main()
{
	Solution s;
	vector<int> vec;
	vec.push_back(-2);
	vec.push_back(1);
	vec.push_back(-3);
	vec.push_back(4);
	vec.push_back(-1);
	vec.push_back(2);
	vec.push_back(1);
	vec.push_back(-5);
	vec.push_back(4);

	cout << s.maxSubArray(vec);

	system("pause");
	return 0;
}