#include<iostream>
#include "LinkedList.h"
#include "Sorting.h"


//using namespace std;


int main() {
	
	
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int brr[] = { 1, 2, 3, 4, 5, 6, 7, 9, 8, 10 };
	PrintArray(arr, 10);
	InsertionSort02(arr, 10);
	PrintArray(arr, 10);
	
	return 0;
}


