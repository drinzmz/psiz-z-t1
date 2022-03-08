#include "pch.h"
#include "list.h"
using namespace std;


List* initList(void)
{
	List* pRoot = (List*)malloc(sizeof(*pRoot));
	if(pRoot != NULL) 
	{
		pRoot->pNext = NULL;
		cout << "Operacja zakończona sukcesem. Pamięć zalokowana. " << endl;
	} else if (pRoot == NULL) {
		cout << "Brak miejsca w pamięci." << endl;
	} else {
		cout << "Nieznany błąd." << endl;
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
