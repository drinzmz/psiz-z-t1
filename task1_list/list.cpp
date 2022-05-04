#include "pch.h"
#include "list.h"
#include "iostream"
//Paweł Tomaszewski

using  namespace std;


List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	if (pRoot != NULL)

		{
		  	pRoot->pNext = NULL;
			cout << "Pomyślnie Zalokowano pamięć" << endl;
		}
			else if (pRoot == NULL)

			{ 			
				cout << "Niepowodzenie - Brak miejsca w pamięci." << endl;
			}	
				else

				{
					cout << "Błąd - nie rozpoznano " << endl;
				}
	return pRoot;
}

void deinitList(List* pRoot)
{
	free(pRoot);
	pRoot = NULL;
	
}

void addCar(List* pRoot, char* plateNum)
{
//function adding a new car to list
}

void removeCar(List* pRoot, char* plateNum)
{

}
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
