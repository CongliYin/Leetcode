#include<iostream>
using namespace std;


class Solution
{
public:
	int mySqrt(int x)
	{
		long long y = x;
		while(y * y > x)
		{
			y = (y + x / y) / 2;
		}
		return y;
	}
};


int main()
{
	Solution s;
	cout << s.mySqrt(49) << endl;

	system("pause");
	return 0;
}