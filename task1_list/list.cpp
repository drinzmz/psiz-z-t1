#include "pch.h"
#include "list.h"
#include "iostream"
//Paweł Tomaszewski

using  namespace std;


List* initList(void)
	// Function to check free memory
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
dev
	free(pRoot);
	pRoot = NULL;
	
	 free(pRoot);
	 pRoot = NULL;
 dev
}

void addCar(List* pRoot, char* plateNum) //Function add car
{
 dev
}
	if (platenum == NULL) { // Check is platenumber is null
		cout << "Brak tablicy"<< endl;
		return 0;
	}  else {
	plateNum = pRoot;
	}
}

//function car removal
 dev
void removeCar(List* pRoot, char* plateNum)
{

} // Function to Printall List 
void printAll(List* pRoot) {

}

int numberOfElements(List* pRoot)
{
	return 0;
}
