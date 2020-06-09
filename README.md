# CS 100 Programming Project

Group members:

	Christian Torres : ctorr016@ucr.edu

	Emily Mai : cmai007@ucr.edu


Title: Pantry to-go (tentatively)

App idea:
	This app will help keep track of what is in one's pantry, fridge, and freezer.
This will make shopping more effiecient by keeping track of what to buy and what one already has. 
Features will include filters: by expiration, item alphabetically, location, quantity, and category.

Importance: 
	Serves to remind you what you need and what you already have at home. Will make shopping more efficient and helps keep track of how much you are buying.

Language, tools, technology: 
	c++

Input/output:
Manual item input.
Generated list of items you have and items you need.

## Decorator:

Using a decorator diagram we will create a base class named item. This item will have at the very least a name and location. The location will be an enum(Freezer, Fridge, Pantry) while the name a string. The user can add an expiration date, quantity or category by their own descretion. getDescription() function will be a string that will output to the console the name, location and any of the decorators that were added.

![](images/Untitled%20Diagram.png)
	
## Factory:

Using a factory we will allow the client to be able to create a list of Item*. This will allow us to add, remove items on to any list. This will save the list into a seperate file which can be later edited. The client interface will have options to add a list, edit the default list, delete a list or generate a shopping list based on default and any list of the user's choosing.

![](images/FactoryPattern.png)

## Composite:

Using a composite design on the list that factory creates will allow us to add filtering to the list. This will allow us to filter via alphabetically, by location or a mix of the two. The class will have a vector where it will store the list. The base should display the list and the composite will be able to sort the list. The base class will have ways of adding or removing items. While the composite will only filter.

![](images/CompositePattern.png)
## Report
The goal of this program was to make a simple to use algorithm that will allow users to easily create an inventory of items that are in either the pantry, fridge or freezer. We also kept in mind the ability to expand from these locations. We did this by implementing three design patterns. The first design pattern we used was the decorator. Using the decorator design pattern we made a base class called item which contains a name, location and description. Description only takes information from the name and location but with the decorator we can add more. The decorators we used allowed us to add an expiration date, category or even quantity or a combination of the three. After we created this decorator we created a composite class. This was our list class. This included basic features like adding or removing an Item, sorting the list or even displaying said list. The sort specifically was what we made into a composite class. The list class takes in Items and adds them into the vector located in the list. Sorting can sort the list alphabetically or even by location or both. This sorting method is at worst an nlogn runtime. The output of the list will be the display which will display the elements inside the vector. The final design pattern we used was the factory design pattern. We used this to manipulate lists and to create a file to save the elements in the list. This helps create an interface for our program. It also allows the user to make changes to the list, sort the list or even delete a list. Our main function is the last part of the program and this solidifies the interface that the user works with. 
## Screenshot Area
something something dark side
## Tutorial
Pantry-to-go is a simple to use application.
First git clone the repository into your system.
Next, run cmake3 . and then a make. 
Finally just run the executable with the command ./pantry-to-go
If you want to edit code then edit the CMakeLists.txt file to uncomment the test executable.
This will allow you to see the test already done on the code but before that you must get the google test submodule.
