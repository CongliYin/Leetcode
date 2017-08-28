//Leetcode#20: Valid Parentheses
//��Ŀ�������ж�һ���ַ����Ƿ���Ч�����ַ��������š�()[]{}����ɵģ���ǰ��������ƥ�������Ч����֮��Ч
//˼·������һ��ʹ��ջ�������Ŀ������������ţ���ѹ��ջ�У�
//      ����������ţ���Ҫ�ж�����ջ��Ԫ���Ƿ�ƥ�䣬��ƥ����ջ��Ԫ�س�ջ��
//      ֱ�������ջ�е�������ȫ����ջ��ջΪ������Ч����֮ջ�ǿգ�����Ч

#include<iostream>
#include<string>
#include<stack>
using namespace std; 

class Solution 
{
public:
    bool isValid(string s) 
	{
		//����һ����ΪmyStack��ջ��ջ��Ԫ��Ϊchar����
		stack <char> myStack;

		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] == '('||s[i] == '['||s[i] == '{')
			{
				myStack.push(s[i]);
			}
			else
			{
				//��s[0]û�н�ջ����ô�϶�����Ч��
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