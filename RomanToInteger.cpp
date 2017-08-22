//Leetcode #13: Roman to Integer
//题目描述：罗马数字转换成阿拉伯整数
//思路：对于罗马数字与阿拉伯数字之间的关系，如下面toNumber()函数
//罗马数字计数规则：
//（1）相同的数字连写，所表示的数等于这些数字之和
//（2）小的数字在大的数字右边，所表示的数等于这些数字之和
//（3）小的数字在大的数字左边，所表示的数=（右边的数-左边的数*2）+左边的数


#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Solution
{
public:

	//定义每一个罗马数字与阿拉伯数字之间的转换关系
	int toNumber(char ch)
		{
			switch(ch)
			{
			case 'I':
				return 1;
			case 'V':
				return 5;
			case 'X':
				return 10;
			case 'L':
				return 50;
			case 'C':
				return 100;
			case 'D':
				return 500;
			case 'M':
				return 1000;
			}
			return 0;
		}


	int romanToInt(string s)
	{
		//转换后结果存储在answer中
		int answer = toNumber(s[0]);

		for(int i = 1; i < s.length(); i++)
		{
			if(toNumber(s[i - 1]) < toNumber(s[i]))
			{
				answer += (toNumber(s[i]) - 2 * toNumber(s[i - 1]));
			}
			else
			{
				answer += toNumber(s[i]);
			}
		}
		return answer;
	}
};


int main()
{
	//实例化一个对象验证结果
	Solution s;
	cout << s.romanToInt("IV")<<endl;

	system("pause");
	return 0;
}
