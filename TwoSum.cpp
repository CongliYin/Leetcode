//Leetcode #1: twoSum
//��Ŀ����������һ�����������һ����target��
//��������ĳ�������ĺ͵���target����������������±ꡣ
//����ֻ��һ���⣬����ͬһ���������ظ�ʹ�á�

#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2);
        for(int i = 0; i<nums.size(); i++)
        {
            for(int j = i + 1; j<nums.size(); j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    v[0] = i;
                    v[1] = j;
                    return v;
                }
                    
            }
        }
       return v;
    }
};

int main()
{
	Solution s;
	vector<int> v1;
	vector<int> v2;
	vector<int>::iterator ite;

	v1.push_back(0);
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);

	int target = 4;
	v2 = s.twoSum(v1, target);

	for(int i = 0; i < v2.size(); i++)
	{
		cout<<v2[i]<<endl;
	}
	
	system("pause");
	return 0;
}