//Leetcode#70: ����¥�ݵķ�ʽ��
//��Ŀ��������n�׵�¥�ݣ�����ÿ����һ�׻������ף���ͬ�ķ�ʽ����
//˼    ·����̬�滮���⣬�ҵ����ƹ�ʽ����


#include<iostream>
using namespace std;

class Solution
{
public: 
	int climbStairs(int n) 
	{
		//��̨����С�ڵ���0ʱ����ʽΪ0
		if(n <= 0)
		{
			return 0;
		}

		//��̨��������1ʱ����ʽΪ1
		if(n == 1)
		{
			return 1;
		}

		//��̨��������2ʱ����ʽΪ2��1+1����2��
		if(n == 2)
		{
			return 2;
		}

		//����ռ䣬��0��n��̨�ף�һ����n+1���ռ䣡����
		int *ways = new int[n + 1];
		ways[0] = 0;
		ways[1] = 1;
		ways[2] = 2;
		for(int i = 3; i <= n; i++ )
		{
			//���ƹ�ʽ
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

