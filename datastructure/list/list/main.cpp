#include<stdlib.h>
#include"List.h"
#include<iostream>
using namespace std;
int main(void)
{

	int e1 = 3;
	int e2 = 2;
	int e3 = 1;
	int e4;
	List *list1 = new List(10);
	list1->ListInsert(0, &e1);
	list1->ListInsert(1, &e2);
	list1->ListInsert(2, &e3);
	list1->ListInsert(0, &e3);



	list1->ListTraverse();
	cout << list1->ListLength() << endl;

	list1->ListDelete(1, &e4);
	list1->ListTraverse();
	cout << list1->ListLength() << endl;




}