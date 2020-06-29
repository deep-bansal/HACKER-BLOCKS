#include<iostream>
using namespace std;
#include<unordered_map>

bool isrepeated = false;

class node {
public:

	int data;
	node* next;
	node(int d)
	{
		data = d;
		next = NULL;
	}
};

void buildLL(node* &head, int d)
{
	if (head == NULL)
	{
		head = new node(d);
		return;
	}
	node* temp = head;
	while (temp->next != NULL and temp->data != d)
	{
		temp = temp->next;
	}
	if (temp->next == NULL)
	{
		temp->next = new node(d);
		return;
	}

	else if (temp->data == d)
	{
		node* temp2 = temp;
		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}
		temp2->next = temp;
		isrepeated = true;
		return;
	}
}

void removeCycle(node*head) {
	node*fast = head;
	node*slow = head;
	node*prev = NULL;
	while (fast && fast->next) {
		prev = slow;
		fast = fast->next->next;
		slow = slow->next;

		if (fast->data == slow->data) {
			slow = head;
			while (slow->data != fast->data) {
				prev = fast;
				slow = slow->next;
				fast = fast->next;
			}
			prev->next = NULL;
			break;
		}
	}
}


void printLL(node* head)
{
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
}

int main() {
	node* head = NULL;
	int n;
	cin >> n;
	while (n != -1)
	{
		buildLL(head, n);
		cin >> n;
		if (isrepeated == true)
		{
			while(n!=-1)
			{
				cin>>n;
			}
			break;
		}

	}
	removeCycle(head);
	printLL(head);
	return 0;
}