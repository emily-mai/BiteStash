#include <iostream>

#include "factory.cpp"
#include "itemDecorator.hpp"
#include "list.cpp"
#include "listA.cpp"
#include "listL.cpp"

using namespace std;

int menu() {
   int choice = 0;
   cout << endl << "Enter menu choice: ";
   cout << endl;
   cout
	<< "1. Create a list." << endl		
	<< "2. Edit a list." << endl
	<< "3. Remove a list" << endl
	<< "4. Display a list" << endl
	<< "5. Quit" << endl;
	cin >> choice;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	return choice;
}

int main()
{
   int choice = menu();

	string entry;
	Factory* myFac = new Factory();

	while (choice != 5) 
	{
	   if (choice == 1)
	   {
		cout << "Enter name for the list you would like to create: ";
		getline(cin,entry);
		cout << endl;
		//Factory* myFac = new Factory();
		myFac->addList(entry);
	   }
	   else if (choice == 2)
	   {	
		cout << "Enter name of list you would like to make an edit to: ";
		getline(cin, entry);
		cout << endl;
		myFac->editList(entry);	
	   }
	   else if (choice == 3) 
	   {
		cout << "Enter name of list you would like to remove: ";
                getline(cin, entry);
                cout << endl;
                myFac->deleteList(entry);
	   }
	   else if (choice == 4) 
	   {
		cout << "Enter name of list you would like to display: ";
                getline(cin, entry);
                cout << endl;
                myFac->displayList(entry);
	   }
	choice = menu();
	}

   return 0;
}
