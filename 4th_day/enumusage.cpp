//Although enumerated types are distinct types in C++, 
//they are not type safe,
//and in some cases will allow you to do things that don’t make sense. Consider the following case:

/*
 * enum SortType
 * {
 *  SORTTYPE_FORWARD,
 * SORTTYPE_BACKWARDS
 * };
 * void sortData(SortType type)
 * {
 * if (type == SORTTYPE_FORWARD)
 *      // sort data in forward order
 *  else if (type == SORTTYPE_BACKWARDS)
 *      // sort data in backwards order
 * }
*/

#include<iostream>
#include<string>

enum ItemType{
	ITEMTYPE_SWORD,
	ITEMTYPE_TORCH,
	ITEMTYPE_POTION
};

std::string getItemType(ItemType itemType){
	if(itemType == ITEMTYPE_SWORD)
		return std::string("Sword");
	if(itemType == ITEMTYPE_TORCH)
		return std::string("Torch");
	if(itemType == ITEMTYPE_POTION)
		return std::string("Potion");
}

int main(){
	using namespace std;
	// ItemType is the enumerated type we've declared above.
    // itemType (lower case i) is the name of the variable we're defining (of type ItemType).
    // ITEMTYPE_TORCH is the enumerated value we're initializing variable itemType with.
    ItemType itemType(ITEMTYPE_TORCH);
    cout<<"You are carrying "<< getItemType(itemType)<< endl;
	return 0;
}
