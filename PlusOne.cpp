//Leetcode#66: Plus One
//��Ŀ����������������⣬��������ÿһλ�洢�������У�ʹ������һ��
//˼    ·��������1��Ӧ���Ǵ����һλ�𣬼�1���߽�λ��
//          ��ǰ����Ϊ9ʱ������ǰ������Ϊ0��
//          ��ǰ���ֲ�Ϊ9ʱ��ֱ�Ӽ�1���ؼ��ɣ�
//          ����������ȫΪ9��������ĵ�һ��λ��Ԫ����Ϊ1��������������ټ�һ��0

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