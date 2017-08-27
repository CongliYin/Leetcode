//Leetcode#21: Merge Two Sorted Lists
//��Ŀ�����������ź���������������ӵ�һ�𣬷������Ӻõ�����
//



#include<iostream>
#include<stdio.h>
using namespace std;


//��C++�У��ṹ�������������캯������ȫ���԰ѽṹ�嵱������ʹ��
struct ListNode
{
	int val;
	ListNode *next;
	//���캯��
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
	


	//����list1������list3����Ϊ�յ����
	ListNode *list1 = new ListNode(20);
	ListNode *list2 = new ListNode(30);
	list1->next = list2;
	ListNode *list3 = new ListNode(10);
	ListNode *list4 = new ListNode(20);
	list3->next = list4;
	ListNode *list5 = new ListNode(100);
	list4->next = list5;


	//����һ������Ϊ�յ����
	//ListNode *list6;
	//list6 = NULL;
	
	
	ListNode *temp = s.mergeTwoLists(list1, list3);
	//���������ӡ���
	while(temp != NULL)
	{
		cout<<temp->val<<endl;
		temp = temp->next;
	}
	
	//�ͷſռ�
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