#ifndef LISTA_CPP
#define LISTA_CPP

#include "listA.h"
#include <vector>
#include <algorithm>

void ListA::sort( )
{
   mergeSort(val->myList, 0, val->myList.size() - 1);
   for (int i = 0; i < val->myList.size(); i++)
   {
	myItems.push_back(val->myList.at(i));
   }
}

void ListA:: display()
{
   int k = 1;
   for(int i = 0; i < val->myList.size(); i++)
   {
        std::cout << k << ".) " << val->myList.at(i)->getName() << " in the " << val->myList.at(i)->getLocation() << ".\n";
        k++;
   }
}

void ListA::mergeSort(std::vector<Item*> &myVec, int left, int right)
{
   if( left < right)
   {
	int m = (left + right)/2;
	mergeSort(myVec, left, m);
	mergeSort(myVec, m+1, right);	
	merge(myVec, left, m, right);
   }
}
bool ListA::myFunction(Item*a, Item*b)
{
   std::string temp1 = a->getName();
   std::string temp2 = b->getName();
   return temp1 < temp2;
}

void ListA::merge(std::vector<Item*> &myVec, int left, int middle, int right)
{
   int i,j,k;
   int n1 = middle -left +1;
   int n2 = right - middle;
   std::vector<Item*> temp1;
   std::vector<Item*> temp2;
   for (i = 0; i < n1; i++)
   {
	temp1.push_back(myVec.at(left+i));
   }
   for (j = 0; j < n2; j++)
   {
	temp2.push_back(myVec.at(middle + 1 + j));
   }
   i = 0;
   j = 0;
   k = left;
   while (i < n1 && j < n2)
   {
   //std::cout<< temp1.at(i)->getName() << " " << temp2.at(j)->getName() << "\n";
	if (myFunction(temp1.at(i),temp2.at(j)))
	{
	   myVec.at(k)= temp1.at(i);
	   i++;
	}
	else
	{
	   myVec.at(k) = temp2.at(j);
	   j++;	
	}
	k++;
   }
   //std::cout<<"\n";
   while (i  < n1)
   {
	myVec.at(k) = temp1.at(i);
	i++;
	k++;
   }
   while (j  < n2)
   {
        myVec.at(k) = temp2.at(j);
        j++;
        k++;
   }
}


#endif
