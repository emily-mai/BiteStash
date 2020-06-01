#ifndef ITEM_H
#define ITEM_H

enum Location {Fridge, Freezer, Pantry};

class Item
{
public:
	Item() { };
	Item(std::string, Location);
	virtual std::string getDescription();

protected:
	std::string itemName;
	Location myLocation;
	std::string description;
	std::string getStringEnum(Location);		
};
#endif
