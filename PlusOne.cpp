//Leetcode#66: Plus One
//题目描述：大数相加问题，将大数的每一位存储在数组中，使大数加一；
//思    路：大数加1，应该是从最后一位起，加1或者进位；
//          当前数字为9时，将当前数字置为0；
//          当前数字不为9时，直接加1返回即可；
//          若整个数组全为9，则将数组的第一个位置元素置为1，并且数组最后再加一个0

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	vector<int> plusOne(vector<int> digits)
	{
		for(int i = digits.size() - 1; i >= 0; i--)
		{
			if(digits[i] == 9)
			{
				digits[i] = 0;
			}
			else
			{
				digits[i]++;
				return digits;
			}
		}
		digits[0] = 1;
		digits.push_back(0);
		return digits;
	}
};

int main()
{
	Solution s;
	vector<int> vec;
	vec.push_back(9);
	vec.push_back(9);
	vec.push_back(9);
	vec.push_back(9);
	vec.push_back(9);

	vector<int> vec1;
	vec1 = s.plusOne(vec);

	for(int j = 0; j < vec1.size(); j++)
	{
		cout << vec1[j];
	}
	cout << endl;
	system("pause");
	return 0;


}