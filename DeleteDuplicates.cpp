//Leetcode#83: Remove Duplicates from Sorted List
//和之前数组中删除重复元素的思路一样，将不重复的元素保留在链表中即可


#include<iostream>
using namespace std;

class ListNode
{
public:
	int val;
	ListNode *next;
	ListNode(int x):val(x), next(NULL) {}
};

class Solution
{
public:
	ListNode *deleteDuplicates(ListNode *head)
	{
		if(head == NULL)
		{
			return head;
		}
		ListNode *p_current = head;
		ListNode *p_next = head->next;

		while(p_current != NULL && p_next != NULL)
		{
			if(p_current->val == p_next->val)
			{
				p_current->next = p_next->next;
			}
			else
			{
				p_current = p_current->next;
			}
			p_next = p_next->next;
		}
		return head;
	}
};

int main()
{
	ListNode list1(10);
	ListNode list2(10);
	ListNode list3(11);
	list1.next = &list2;
	list2.next = &list3;
	list3.next = NULL;

	Solution s;
	ListNode *head = s.deleteDuplicates(&list1);

	cout << head->val << endl;
	cout << head->next->val << endl;

	system("pause");
	return 0;

}