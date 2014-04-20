#include <iostream>
#include <string>
#include "LinkedList.h"

using namespace std;

LinkedList::LinkedList()
{
    Head = NULL;
    Count = 0;
}

void LinkedList::Insert()
{
    int value;
    cout << "Enter value to insert: ";
    cin >> value;
    NewNode(value);
}

void LinkedList::NewNode(int value)
{
    if(Count == 0)
    {
	Head = new ListNode(value);
	Count++;
    }
    else
    {
	ListNode* newNode = new ListNode(value);
	ListNode* currentNode = Head;
	while (currentNode->Next)
	{
	    currentNode = currentNode->Next;
	}
	currentNode->Next = newNode;
	if(Count > 5)
	{
	    newNode->Next = Head;
	}
	Count++;
    }
}

void LinkedList::PrintList()
{
    if(Count >0)
    {
	ListNode* currentNode = Head;
	while (currentNode)
	{
	    cout<< currentNode->Value << endl;
	    currentNode = currentNode->Next;
	}
    }
}

void LinkedList::CheckForLoops()
{
    if(hasLoops(Head))
    {
	cout << "There are loops.\n\n";
    }
    else
    {
	cout << "No loops.\n\n";
    }
}

bool LinkedList::hasLoops(ListNode * myList)
{
    if(Count < 2)
    {
	cout << "Too few nodes for a node to exist..\n";
	return false;
    }
    else
    {
	ListNode* slowNode = myList;
	ListNode* fastNode = myList->Next;
	while (slowNode && fastNode)
	{
	    if(slowNode == fastNode)
	    {
		return true;
	    }
	    slowNode = slowNode->Next;
	    fastNode = fastNode->Next->Next;
	}
	return false;
    }
}

