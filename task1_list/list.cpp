#include "pch.h"
#include "list.h"



List* initList(void)
	// Function to check free memory
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	
	return pRoot;
}

void deinitList(List* pRoot)
{
	 free(pRoot);
	 pRoot = NULL;
}

void addCar(List* pRoot, char* plateNum)
{
	plateNum = pRoot;
	
}

//function car removal
void removeCar(List* pRoot, char* plateNum)
{

} // Function to Printall List 
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
