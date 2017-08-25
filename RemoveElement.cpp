#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
	{
		//判断数组是否为空
		if(nums.empty())
		{
			return 0;
		}
		//存放返回结果的变量
		int answer = 0;

		for(size_t i = 0; i < nums.size(); i++)
		{
			if(nums[i] != val)
			{
				nums[answer] = nums[i];
				//answer本身是长度减一，++之后正好是数组的长度
				answer++;
			}
		}
		return answer;
    }
};



int main()
{
	Solution s;
	vector<int> array;
	array.push_back(1);
	array.push_back(2);
	array.push_back(3);
    array.push_back(4);
	array.push_back(5);

	cout << s.removeElement(array,3) << endl;

	for(int i = 0 ; i < s.removeElement(array,3) - 1; i++)
	{
		cout << array[i] << " ";
	}
		

	system("pause");
	return 0;
}