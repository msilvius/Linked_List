#include "ListNode.cpp"

class LinkedList
{
    private :
	ListNode * Head;
	int Count;
	void NewNode(int value);
	bool HasLoops(ListNode * myList);

    public:
	LinkedList();
	void Insert();
	void PrintList();
	void CheckForLoops();
};

