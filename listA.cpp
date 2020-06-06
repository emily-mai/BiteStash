#ifndef LISTA_CPP
#define LISTA_CPP

#include "listA.h"
#include <vector>
#include <algorithm>

void ListA::sort()
{
   sort(val->myList.begin(),val->myList.end(), myFunction);
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



#endif
