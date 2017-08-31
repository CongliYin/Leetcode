//Leetcode#70: 求爬楼梯的方式数
//题目描述：爬n阶的楼梯，可以每次爬一阶或者两阶，求不同的方式数量
//思    路：动态规划问题，找到递推公式即可


#include<iostream>
using namespace std;

class Solution
{
public: 
	int climbStairs(int n) 
	{
		//当台阶数小于等于0时，方式为0
		if(n <= 0)
		{
			return 0;
		}

		//当台阶数等于1时，方式为1
		if(n == 1)
		{
			return 1;
		}

		//当台阶数等于2时，方式为2（1+1或者2）
		if(n == 2)
		{
			return 2;
		}

		//申请空间，从0到n个台阶，一定是n+1个空间！！！
		int *ways = new int[n + 1];
		ways[0] = 0;
		ways[1] = 1;
		ways[2] = 2;
		for(int i = 3; i <= n; i++ )
		{
			//递推公式
			ways[i] = ways[i - 1] + ways[i - 2];
		}
		return ways[n];

		delete []ways;
		ways = NULL;   
    }
};

int main()
{
	Solution s;
	cout << s.climbStairs(10) << endl;

	system("pause");
	return 0;
}

