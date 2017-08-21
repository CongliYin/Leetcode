//Leetcode #9：判断一个数字是否为回文数字；
//参看 #7：整数反转，可以判断反转后的数字与原数字是否相等，但是会出现反转后溢出
//以下是正确解法：循环取数字的第一位和最后一位作比较，若相等则取第二位和倒数第二位作比较
//                直到完成比较或者遇到不相等情况程序结束

#include<stdio.h>
#include<iostream>
//#include<string>

using namespace std;

class Solution
{
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
			return false;
		//除数
		int d = 1;
		while(x / d >= 10 )
		{
			d = d * 10;
		}

		while(x > 0)
		{
			//quotient商
			int q = x / d;
			//remainder余数
			int r = x % 10;

			if(q != r)
				return false;
			//将 x 的第一位和最后一位去掉之后的十进制数
			x = x % d / 10;
			//去掉两位后，原来的 x 少了两位，除数要缩小100倍
			d = d / 100;
		}
		return true;
	}
};


int main()
{
	Solution s;
	cout << s.isPalindrome(1212)<<endl;

	system("pause");
	return 0;
}
