//Leetcode#58: Length of Last Word
//��Ŀ���������ַ������һ���ʵĳ��ȣ���������ڣ�����0
//˼    ·���򵥵��ַ���ƥ������
//�����ַ����������ǰ�ַ���Ϊ�ն���ǰ�ַ���ǰһ���ַ�Ϊ�գ��򽫳�����Ϊ1��Ȼ�󳤶�++��ֱ���´������ո�

#include<iostream>
#include<string>
using namespace std;



class Solution
{
public:
	int lengthOfLastWord(string s)
	{
		int answer = 0;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] != ' ')
			{
				if(i != 0 && s[i - 1] == ' ')
				{
					answer = 1;
				}
				else
				{
					answer++;
				}
			}
		}
		return answer;
	}
};


int main()
{
	Solution s;
	cout << s.lengthOfLastWord("hello world!!! !");

	system("pause");
	return 0;
}