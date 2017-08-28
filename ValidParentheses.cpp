//Leetcode#20: Valid Parentheses
//题目描述：判断一个字符串是否有效，该字符串是括号“()[]{}”组成的，若前后括号是匹配的则有效，反之无效
//思路：这是一道使用栈解决的题目，如果是左括号，就压入栈中；
//      如果是右括号，就要判定其与栈顶元素是否匹配，若匹配则栈顶元素出栈；
//      直到最后，若栈中的左括号全部出栈，栈为空则有效；反之栈非空，则无效

#include<iostream>
#include<string>
#include<stack>
using namespace std; 

class Solution 
{
public:
    bool isValid(string s) 
	{
		//声明一个名为myStack的栈，栈中元素为char类型
		stack <char> myStack;

		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '('||s[i] == '['||s[i] == '{')
			{
				myStack.push(s[i]);
			}
			else
			{
				//若s[0]没有进栈，那么肯定是无效的
				if(myStack.empty())
				{
					return false;
				}
				else if(myStack.top() == '(' && s[i] == ')')
				{
					myStack.pop();
				}
				else if(myStack.top() == '[' && s[i] == ']')
				{
					myStack.pop();
				}
				else if(myStack.top() == '{' && s[i] == '}')
				{
					myStack.pop();
				}
				else
				{
					return false;
				}
			}
		}
		return myStack.empty();
    }
};


int main()
{
	Solution s;
	cout << s.isValid("((([[[]]])))") << endl;

	system("pause");
	return 0;
}