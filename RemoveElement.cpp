//Leetcode #27: 
//��Ŀ��������������ֵΪval��Ԫ��ɾ��������ɾ��������鳤�ȡ�
//ע    �⣺����ʹ�ö���Ŀռ䡣
//˼    ·��
//          �����пգ�������Ϊ�գ�����0��
//          ������ǿգ��򽫲�����val������Ԫ�����θ�ֵ�������Ԫ�أ�����val��ֵ�ͱ����˵��ˣ�
//          ʹ��answer��¼��ֵ�Ĵ��������answer��Ϊ�����鳤��


#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
	{
		//�ж������Ƿ�Ϊ��
		if(nums.empty())
		{
			return 0;
		}
		//��ŷ��ؽ���ı���
		int answer = 0;

		for(size_t i = 0; i < nums.size(); i++)
		{
			if(nums[i] != val)
			{
				nums[answer] = nums[i];
				//answer�����ǳ��ȼ�һ��++֮������������ĳ���
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