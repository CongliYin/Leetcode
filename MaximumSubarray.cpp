//Leetcode#53: Maximum Subarray
//��Ŀ��������һ��������������͵����ֵ����Ҫע����ǣ�������һ��Ҫ��������
//˼   ·1����ͳ�ⷨ�У�����һ�����͵Ķ�̬�滮��Ŀ�����������ӽṹ���
//          ������Ԫ��Ϊ0��ʱ���������ֵΪ0
//          ������Ԫ�ش���0��ʱ���������飬��ǰ���Ž�Ϊ��max(��һ�����Ž� + ��ǰ����Ԫ�أ���ǰ����Ԫ��)
//          ȫ�����Ž�Ϊ��max(��һ��ȫ�����Ž⣬��ǰ���Ž�)
//˼   ·2�����η���������ֳ����������֣��ֱ������Ž� lmax,rmax
//          Ȼ����м�����������ɨ�裬��������Ž� mmax
//          ȫ�����Ž�Ϊ��max(lmax,rmax,mmax)


#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//���Ӷ�ΪO(n)�Ľⷨ����̬�滮
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

//���Ӷ�ΪO(logn)�Ľⷨ�����η�
//��������м�ֳ������֣��ֱ������ֵ��Ȼ�������������ֵ
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