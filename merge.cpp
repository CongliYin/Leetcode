//Leetcode#88: Merge Sorted Array
//��Ŀ�����������������������ϲ���һ������
//ע    �⣺����ԭ��������1���㹻�Ŀռ�������������
//˼    ·����������ֱ��ɺ���ǰ�Ƚϴ�С

#include<iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
	{
		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;
		
		//nums1.resize(k + 1);

		while(i >= 0 && j >= 0)
		{
			if(nums1[i] < nums2[j])
			{
				nums1[k] = nums2[j];
				k--;
				j--;
			}
			else
			{
				nums1[k] = nums1[i];
				k--;
				i--;
			}
		}
		while(j >= 0)
		{
			nums1[k] = nums2[j];
			k--;
			j--;
		}
	}
};

int main()
{
	Solution s;
	vector<int> vec1;
	vector<int> vec2;

	vec1.push_back(1);
	vec1.push_back(3);
	vec1.push_back(5);
	vec1.push_back(7);
	vec1.push_back(9);

	vec2.push_back(2);
	vec2.push_back(4);
	vec2.push_back(6);
	vec2.push_back(8);
	vec2.push_back(10);

	//������1��С��ʼ��Ϊ��������ĺ�
	vec1.resize(10);
	s.merge(vec1,5,vec2,5);

	for(int i = 0; i < 10; i++)
	{
		cout << vec1[i]<< endl;
	}

	system("pause");
	return 0;
}