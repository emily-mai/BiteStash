#ifndef ITEM_H
#define ITEM_H

#include <iostream>

enum Location {Fridge, Freezer, Pantry};


class Item
{
public:
	Item() { };
	Item(std::string, Location);
	std::string getName();
	std::string getLocation();
	virtual std::string getDescription();
//protected:
	std::string itemName;
	std::string location;
	Location myLocation;
	std::string description;		
};
#endif
