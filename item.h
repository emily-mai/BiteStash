#ifndef Item_H
#define Item_H

enum Location{Fridge, Freezer, Pantry};

class Item
{
public:
	Item(std::string, Location);
	std::string getDescription();

private:
	std::string itemName;
	Location myLocation;
	std::string description;
	std::string getStringEnum(Location);		
};
#endif
