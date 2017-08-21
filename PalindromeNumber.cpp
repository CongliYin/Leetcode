//Leetcode #9���ж�һ�������Ƿ�Ϊ�������֣�
//�ο� #7��������ת�������жϷ�ת���������ԭ�����Ƿ���ȣ����ǻ���ַ�ת�����
//��������ȷ�ⷨ��ѭ��ȡ���ֵĵ�һλ�����һλ���Ƚϣ��������ȡ�ڶ�λ�͵����ڶ�λ���Ƚ�
//                ֱ����ɱȽϻ����������������������

#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

class Solution
{
public:
	bool isPalindrome(int x)
	{
		if (x < 0)
			return false;
		//����
		int d = 1;
		while(x / d >= 10 )
		{
			d = d * 10;
		}

		while(x > 0)
		{
			//quotient��
			int q = x / d;
			//remainder����
			int r = x % 10;

			if(q != r)
				return false;
			//�� x �ĵ�һλ�����һλȥ��֮���ʮ������
			x = x % d / 10;
			//ȥ����λ��ԭ���� x ������λ������Ҫ��С100��
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