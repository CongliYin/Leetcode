//Leetcode #26：原地移除有序数组中的重复元素，返回移除后的数组长度
//要求：不能利用额外的空间开销
//思路:先判断数组是否为空，为空返回0；
//     两个指针，一个 i 指向原数组的元素，一个 inedx 指向不重复数组的元素；
//     如果两个指针指向的数字相等，则i++；
//     如果两个指针指向的数字不相等，则index++，并用原数组的第i个值覆盖第index个值；
//     index是从0开始的，要输出个数，返回 index + 1


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

		//在用下标访问元素时，vector使用vector::size_type作为下标类型，而数组下标的类型是size_t
		for(size_t i = 1; i < nums.size(); i++)     
		{
			if(nums[index] != nums[i])
			{
				index ++;
				nums[index] = nums[i];
			}
		}
		return index + 1;            //index是从0开始的，要输出个数，所以是 index + 1
    }
};


int main(int argc, char** argv)
{
	Solution s;
	//定义一个数组
	vector<int> array;
	//给数组传值
	array.push_back(1);
	array.push_back(2);
	array.push_back(2);
	array.push_back(4);
	array.push_back(4);
	array.push_back(4);
	
	//输出原数组
	for(int i=0; i<array.size(); i++)
		cout << array[i]<<" ";
	cout << endl;
	
	//int t = 0;
	//t = s.removeDuplicates(array);
	cout<<"The duplicated number is: "<< s.removeDuplicates(array) << endl;

	//输出移除后的数组
	for(int i=0; i<s.removeDuplicates(array); i++)
		cout << array[i] <<" ";
	cout << endl;
	
	system("pause");
	return 0;
}
