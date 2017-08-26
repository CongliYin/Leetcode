#include<iostream>
#include<vector>
using namespace std;

/*������ⷨ��ʱ�临�Ӷ�O(n),�ռ临�Ӷ�O(1)*/
/*
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
	{
		//���뵽��һ��λ�ã�������Ϊ�գ�ֱ�ӷ���0λ��
		if(nums.empty())
		{
			return 0;
		}
		//���뵽���һ��λ�ã�����������һ��Ԫ�ض���targetС��ֱ�ӷ�������ĳ���
		else if(nums[nums.size() - 1] < target)
		{
			return nums.size();
		}

		for(int i = 0; i < nums.size(); i++)
		{
			//�����ҵ�������������������Ϊi��Ԫ�غ�target��ȣ��򷵻�i
			if(nums[i] == target)
			{
				return i;
				break;
			}
			//Ҫ���뵽�м������������Ϊi��Ԫ�ر�target������뵽��ǰi��λ�ã�����ѭ��
			else if(nums[i] > target)
			{
				return  i;
				break;
			}
		}
	 }
};
*/


/*���ַ���⣬ʱ�临�Ӷ�O(logn),�ռ临�Ӷ�O(n)�����Žⷨ*/
class Solution 
{
public:
    int searchInsert(vector<int>& nums, int target) 
	{
        //���뵽��һ��λ�ã�������Ϊ�գ�ֱ�ӷ���0λ��
		if(nums.empty())
		{
			return 0;
		}
		int left = 0;
		int right = nums.size() - 1;
		while(left <= right)
		{
			int mid = (right + left)/2;

			if(nums[mid] == target)
			{
				return mid;
			}
			else if(nums[mid] < target)
			{
				left = mid + 1;
			}
			else
			{
				right = mid -1;
				
			}
		}
		//���ص������ǲ����λ��
		return left;
    }
};

int main()
{
	Solution s;
	vector<int> arr;
	arr.push_back(1);
	arr.push_back(3);
	arr.push_back(5);
	arr.push_back(6);

	cout << s.searchInsert(arr, 0) << endl;

	system("pause");
	return 0;
}