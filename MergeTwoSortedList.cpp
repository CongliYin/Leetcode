//Leetcode#21: Merge Two Sorted Lists
//题目描述：将已排好序的两个链表连接到一起，返回连接好的链表。
//



#include<iostream>
#include<stdio.h>
using namespace std;


//在C++中，结构体中若包含构造函数，完全可以把结构体当做类来使用
struct ListNode
{
	int val;
	ListNode *next;
	//构造函数
	ListNode(int x) : val(x),next(NULL){};

};

class Solution
{
public:
	ListNode* mergeTwoLists(ListNode *l1, ListNode *l2)
	{
		if(l1 == NULL)
		{
			return l2;
		}
		if(l2 == NULL)
		{
			return l1;
		}
		//
		if(l1->val >= l2->val)
		{
			ListNode *temp = l2;
			temp->next = mergeTwoLists(l1,l2->next);
			return temp;
		}
		else
		{
			ListNode *temp = l1;
			temp->next = mergeTwoLists(l1->next, l2);
			return temp;
		}
	}
};


int main()
{
	Solution s;
	


	//链表list1和链表list3均不为空的情况
	ListNode *list1 = new ListNode(20);
	ListNode *list2 = new ListNode(30);
	list1->next = list2;
	ListNode *list3 = new ListNode(10);
	ListNode *list4 = new ListNode(20);
	list3->next = list4;
	ListNode *list5 = new ListNode(100);
	list4->next = list5;


	//其中一个链表为空的情况
	//ListNode *list6;
	//list6 = NULL;
	
	
	ListNode *temp = s.mergeTwoLists(list1, list3);
	//遍历链表打印结果
	while(temp != NULL)
	{
		cout<<temp->val<<endl;
		temp = temp->next;
	}
	
	//释放空间
	delete list1;
	list1 = NULL;
	
	delete list2;
	list2 = NULL;

	delete list3;
	list3 = NULL;

	delete list4;
	list4 = NULL;

	delete list5;
	list5 = NULL;

	//delete list6;
	//list6 = NULL;

	system("pause");
	return 0;

}