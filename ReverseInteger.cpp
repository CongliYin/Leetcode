#include<stdio.h>
#include<iostream>
using namespace std;

class Solution{
public:
	int reverse(int x)
	{
		int answer = 0;
		int n;
		while (x != 0)
		{
			 n = x % 10;
			 if (answer > INT_MAX/10 || answer < INT_MIN/10)
			 {
				 return 0;
			 }
			 answer = answer * 10 + n;
			 x = x / 10;
		}
		return answer;
	}
};


int main()
{
	Solution s;
	cout << s.reverse(321)<<endl;

	system("pause");
	return 0;
}