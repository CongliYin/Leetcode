//Leetcode #26��ԭ���Ƴ����������е��ظ�Ԫ�أ������Ƴ�������鳤��
//Ҫ�󣺲������ö���Ŀռ俪��
//˼·:���ж������Ƿ�Ϊ�գ�Ϊ�շ���0��
//     ����ָ�룬һ�� i ָ��ԭ�����Ԫ�أ�һ�� inedx ָ���ظ������Ԫ�أ�
//     �������ָ��ָ���������ȣ���i++��
//     �������ָ��ָ������ֲ���ȣ���index++������ԭ����ĵ�i��ֵ���ǵ�index��ֵ��
//     index�Ǵ�0��ʼ�ģ�Ҫ������������� index + 1


#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
	{
        if (nums.empty())
		{
			return 0;
		}

		int index = 0;

		//�����±����Ԫ��ʱ��vectorʹ��vector::size_type��Ϊ�±����ͣ��������±��������size_t
		for(size_t i = 1; i < nums.size(); i++)     
		{
			if(nums[index] != nums[i])
			{
				index ++;
				nums[index] = nums[i];
			}
		}
		return index + 1;            //index�Ǵ�0��ʼ�ģ�Ҫ��������������� index + 1
    }
};


int main(int argc, char** argv)
{
	Solution s;
	//����һ������
	vector<int> array;
	//�����鴫ֵ
	array.push_back(1);
	array.push_back(2);
	array.push_back(2);
	array.push_back(4);
	array.push_back(4);
	array.push_back(4);
	
	//���ԭ����
	for(int i=0; i<array.size(); i++)
		cout << array[i]<<" ";
	cout << endl;
	
	//int t = 0;
	//t = s.removeDuplicates(array);
	cout<<"The duplicated number is: "<< s.removeDuplicates(array) << endl;

	//����Ƴ��������
	for(int i=0; i<s.removeDuplicates(array); i++)
		cout << array[i] <<" ";
	cout << endl;
	
	system("pause");
	return 0;
}
