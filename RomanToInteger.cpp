//Leetcode #13: Roman to Integer
//��Ŀ��������������ת���ɰ���������
//˼·���������������밢��������֮��Ĺ�ϵ��������toNumber()����
//�������ּ�������
//��1����ͬ��������д������ʾ����������Щ����֮��
//��2��С�������ڴ�������ұߣ�����ʾ����������Щ����֮��
//��3��С�������ڴ��������ߣ�����ʾ����=���ұߵ���-��ߵ���*2��+��ߵ���


#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Solution
{
public:

	//����ÿһ�����������밢��������֮���ת����ϵ
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
		//ת�������洢��answer��
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
	//ʵ����һ��������֤���
	Solution s;
	cout << s.romanToInt("IV")<<endl;

	system("pause");
	return 0;
}
