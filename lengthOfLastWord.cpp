//Leetcode#58: Length of Last Word
//题目描述：求字符串最后一个词的长度，如果不存在，返回0
//思    路：简单的字符串匹配问题
//遍历字符串，如果当前字符不为空而当前字符的前一个字符为空，则将长度置为1，然后长度++，直到下次遇到空格

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