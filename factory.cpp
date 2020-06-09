#ifndef FACTORY_CPP
#define FACTOR_CPP

#include "factory.h"
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <string>

void Factory::editList(std::string listName)
{
   std::ifstream inFile;
   inFile.open(listName + ".txt");
   if( !inFile.is_open()) {std::cout<<"cannot open file: " << listName << ".txt\n";}
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
   for(int k = 0; k < temp->myList.size();k++)
   {
	myfile << temp->myList.at(k)->itemName<< '\n' << temp->myList.at(k)->location<< '\n' << temp->myList.at(k)->description<< '\t';
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

void Factory::addItem(List* myList)
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
	Expiration* exp = new Expiration(temp, date);	
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
	   Category* Cat = new Category(exp, cat);
	}
	else
	{
	   Category* Cat = new Category(temp,cat);
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
           Quantity* qty = new Quantity(Cat,val,unit);
        }
        else if ( e == '1' && c == '0')
        {
           Quantity* qty = new Quantity(exp,val,unit);
        }
	else
	{
	   Quantity* qty = new Quantity(temp,val,unit);
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

#endif
