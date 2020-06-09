#ifndef FACTORY_CPP
#define FACTOR_CPP

#include "factory.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>
#include <stdexcept>

void Factory::editList(std::string listName)
{
   std::ifstream inFile;
   inFile.open(listName + ".txt");
   if( !inFile.is_open()) 
   {
	std::cout<<"cannot open file: " << listName << ".txt\n";
	throw std::invalid_argument( "Not a valid file name\n");
   }
   List* temp = new List();
   std::string dummy;
   std::getline(inFile, dummy, '\n');
   while(!inFile.eof())
   {
	Item* temp1 = new Item();
	std::getline(inFile, temp1->itemName);
	std::getline(inFile, temp1->location);
	std::getline(inFile,temp1->description, '\t');
	temp->addItem(temp1);
	if (inFile.eof()) {temp->myList.pop_back(); }
   }
   char i = '0';
   while( i != '3' )
   {
	std::cout<< "List: " << listName << '\n';
	std::cout<< "Press 1 to add an item onto the list\nPress 2 to remove an item from the list\nPress 3 to quit\n";
	std::cin>>i;
	std::cin.ignore(256,'\n');
	
	if (i=='1')
	{
	   addItem(temp);
	}
	if(i == '2')
	{
	   removeItem(temp);
	}
   }
   displayList(temp);
   std::string a = listName + ".txt";
   remove ( a.c_str());
   std::ofstream myfile (listName+".txt", std::ios::out);
   myfile << '\n';
   //std::cout << temp->myList.size() << '\n';
   for(int k = 0; k < temp->myList.size();k++)
   {
	myfile << temp->myList.at(k)->getName()<< '\n' << temp->myList.at(k)->getLocation()<< '\n' <<  temp->myList.at(k)->getDescription() << '\t';
   }
   myfile.close();
   inFile.close();
}

void Factory::deleteList(std::string listName)
{
   listName = listName + ".txt";
   if( remove( listName.c_str() ) != 0)
	perror ("Error deleting file");
   else
	puts("File successfully deleted" );
}

void Factory::addList(std::string listName )
{
   Item* myList = new Item();
   std::ofstream myFile;
   listName = listName + ".txt";
   myFile.open (listName);
   myFile << myList->itemName << myList->location << myList->description;
   myFile.close();
}

void Factory::addItem(List *myList)
{
   int i = 0;
   std::string name;
   std::cout<< "Please enter item name: ";
   std::getline(std::cin,name);
   while(i < 1 || i > 4)
   {
	std::cout<< "Press 1 for Fridge\nPress 2 for Freezer\nPress 3 for Pantry\nPress 4 to exit\n";
	std::cin>>i;
	std::cin.ignore(256,'\n');
	if (i < 1 || i > 4)
	{
	   std::cout<< i << " Invalid number!\n";
	}
   }
   Item* temp;
   if (i == 1)
   {
	temp = new Item(name, Fridge);
   }
   if (i == 2)
   {
        temp = new Item(name, Freezer);
   }
   if (i == 3)
   {
        temp = new Item(name, Pantry);
   }
   if (i!=4)
   {
      Expiration* exp;
      Category* Cat;
      Quantity* qty;
      char e = '0';
      std::string date;
      std::cout<< "Would you like to add an expiration date? Press 1 for yes and 2 for no.\n";
      std::cin>>e;
      std::cin.ignore(256,'\n');
      if (e == '1')
      {
	std::cout<< "Please add the date:\n";
	std::getline(std::cin, date);
	exp = new Expiration(temp, date);
      }
      char c = '0';
      std::string cat;
      std::cout<< "Would you like to add a category? Press 1 for yes and 2 for no.\n";
      std::cin>>c;
      std::cin.ignore(256,'\n');
      if (c == '1')
      {
        std::cout<< "Please add the category:\n";
        std::getline(std::cin, cat);
	if ( e == '1')
	{
	   Cat = new Category(exp, cat);
	}
	else
	{
	   Cat = new Category(temp,cat);
	}
      }
      char q = '0';
      std::string unit;
      std::cout<< "Would you like to add a quantity? Press 1 for yes and 2 for no.\n";
      std::cin>>q;
      std::cin.ignore(256,'\n');
      if (q == '1')
      {
	int val;
	std::cout<< "Please add the unit of measurement:\n";
        std::getline(std::cin, unit);
        std::cout<< "Please add the numeric value:\n";
        std::cin>> val;
        std::cin.ignore(256, '\n');

        if ( c == '1')
        {
	   qty = new Quantity(Cat,val,unit);
        }
        else if ( e == '1' && c == '0')
        {
           qty = new Quantity(exp,val,unit);
        }
	else
	{
	   qty = new Quantity(temp,val,unit);
	}
      }
      if (q == '1' )
      {
	myList->addItem(qty);
      }
      else if(c == '1')
      {
	myList->addItem(Cat);
      }
      else if (e == '1')
      {
	myList->addItem(exp);
      }
      else {myList->addItem(temp);}
   }
}

void Factory::removeItem(List* myList)
{
   std::string name;
   std::cout<<"Please enter the name of the item you would like to remove:\n";
   std::cin>>name;
   myList->removeItem(name);
}

void Factory::displayList(List* myList)
{
   myList->display();
}

void Factory::displayList(std::string listName)
{
   std::ifstream inFile;
   inFile.open(listName + ".txt");
   if(!inFile.is_open()) 
   {
	std::cout << "Error: cannot open file: " << listName << ".txt.\n";
	throw std::invalid_argument( "Not a valid file name\n");

   }
   List* myList = new List();
   std::string dummy;
   std::getline(inFile, dummy, '\n');
   while(!inFile.eof())
   {
	Item* temp1 = new Item();
	std::getline(inFile, temp1->itemName);
	std::getline(inFile, temp1->location);
	std::getline(inFile,temp1->description, '\t');
	myList->addItem(temp1);
	if (inFile.eof()) {myList->myList.pop_back(); }
   }
   displayList(myList);
   inFile.close();
}

void Factory::sortList(std::string listName)
{
    std::ifstream inFile;
   inFile.open(listName + ".txt");
   if(!inFile.is_open())
   {
        std::cout << "Error: cannot open file: " << listName << ".txt.\n";
	throw std::invalid_argument( "Not a valid file name\n");
   }
   List* myList = new List();
   std::string dummy;
   std::getline(inFile, dummy, '\n');
   while(!inFile.eof())
   {
        Item* temp1 = new Item();
        std::getline(inFile, temp1->itemName);
        std::getline(inFile, temp1->location);
        std::getline(inFile,temp1->description, '\t');
        myList->addItem(temp1);
        if (inFile.eof()) {myList->myList.pop_back(); }
   }
   char choice = '0';
   std::cout<< "Press 1 to sort the list alphabetically\nPress 2 to sort the list by location\nPress any other key to quit\n";
   std::cin>>choice;
   std::cin.ignore(256,'\n');
   if (choice == '1')
   {
	ListA* alphabetList = new ListA(myList);
	std::string a = listName + ".txt";
        remove ( a.c_str());
        std::ofstream myfile (listName+".txt", std::ios::out);
        myfile << '\n';
        for(int k = 0; k < alphabetList->myList.size();k++)
	{
	   myfile <<  alphabetList->myList.at(k)->getName()<< '\n' <<  alphabetList->myList.at(k)->getLocation()<< '\n' <<   alphabetList->myList.at(k)->getDescription() << '\t';
	}
	myfile.close();
   }
   else if (choice == '2')
   {
	listL* locationList = new listL(myList);
	std::string a = listName + ".txt";
        remove ( a.c_str());
        std::ofstream myfile (listName+".txt", std::ios::out);
        myfile << '\n';
        for(int k = 0; k < locationList->myFridgeList.size();k++)
        {
           myfile <<  locationList->myFridgeList.at(k)->getName()<< '\n' <<  locationList->myFridgeList.at(k)->getLocation()<< '\n' <<   locationList->myFridgeList.at(k)->getDescription() << '\t';
        }

	 for(int k = 0; k < locationList->myFreezerList.size();k++)
        {
           myfile <<  locationList->myFreezerList.at(k)->getName()<< '\n' <<  locationList->myFreezerList.at(k)->getLocation()<< '\n' <<   locationList->myFreezerList.at(k)->getDescription() << '\t';
        }

	 for(int k = 0; k < locationList->myPantryList.size();k++)
        {
           myfile <<  locationList->myPantryList.at(k)->getName()<< '\n' <<  locationList->myPantryList.at(k)->getLocation()<< '\n' <<   locationList->myPantryList.at(k)->getDescription() << '\t';
        }
	myfile.close();
   }
   inFile.close();
}
#endif
