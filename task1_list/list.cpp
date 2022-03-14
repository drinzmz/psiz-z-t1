#include "pch.h"
#include "list.h"

List* initList(void)
{
List* pRoot = (List*)malloc(sizeof(*pRoot));
if (pRoot != NULL)
{
      pRoot->pNext = NULL;
      std::cout<< "Alokacja pamieci zakonczona pomyslnie";
}
else
{
      std::cout<< "Blad alokacji pamieci";
     
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
