/* Mark Silvius
 * C++ Linked List Implementation
 */

#include <iostream>
#include <string>
#include "LinkedList.cpp"
#include <cstddef>

using namespace std;

void Run();
void PrintMenu();

int main(int argc, char* argv[])
{
    Run();
    return 0;
}

void Run()
{
    LinkedList ll = LinkedList();
    char input = 'a';

    while(input != 'q')
    {
	PrintMenu();
	cin >> input;

	switch (input)
	{
	    case '1':
		ll.Insert();
		break;
	    case '2':
		ll.PrintList();
		break;
	    case '3':
		ll.CheckForLoops();
		break;
	    //case 'q':
	//	return 0;
	    default:
		break;
	}
    }
}

void PrintMenu()
{
    cout << "Linked List Menu" << std::endl;
    cout << "1. Insert" << std::endl;;
    cout << "2. Print list" << std::endl;
    cout << "3. Check for loops" << std::endl;
    cout << "q. Quit" << std::endl << std::endl;
    cout << "Input: ";
}

