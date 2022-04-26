#include "pch.h"
#include "list.h"



List* initList(void)
	// Function to check free memory
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	if (pRoot != NULL)

	{
		pRoot->pNext = NULL;
		cout << "Przydzielono pamiec" << endl;

		}	else if (pRoot == NULL)

			{ 			

				cout << "Nie znaleziono miejsca w pamieci." << endl;

				}	else

					{

						cout << "Nieznany blad." << endl;

						}
	return pRoot;
}

void deinitList(List* pRoot)
{
	if(NULL != pRoot)
	{
	 free(pRoot);
	 pRoot = NULL;
	}
}

void addCar(List* pRoot, char* plateNum)
{

}

void removeCar(List* pRoot, char* plateNum)
{
//Function remove car
}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
