#include<iostream>
#include "Sorting.h"

void PrintArray(int arr[], int size) {
	std::cout << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << "    ";
	}
	std::cout << std::endl;
}

void InsertionSort01(int arr[], int size) {
	if (size <= 1) {
		return;
	}
	int val;
	int j;
	for (int i = 1; i < size; i++) {
		val = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (arr[j] > val && j >= 0) {
				arr[j + 1] = arr[j];
			}
			else {	
				break;
			}
		}
		arr[j+1] = val;
	}
}
void InsertionSort02(int arr[], int size)
{
	int i, key, j;
	for (i = 1; i < size; i++) {
		key = arr[i];
		j = i - 1;

		// Move elements of arr[0..i-1],
		// that are greater than key, 
		// to one position ahead of their
		// current position
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void SelectionSort01(int arr[], int size) {
	int min_index = 0;
	for (int i = 0; i < size - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < size; j++) {
			if (arr[j] < arr[i]) {
				min_index = j;
			}
		}
		if (min_index != i) {
			int temp = arr[i];
			arr[i] = arr[min_index];
			arr[min_index] = temp;
		}
	}
}

void BubbleSort01(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void BubbleSort02(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void BubbleSort03(int arr[], int size) {
	int flag;
	for (int i = 0; i < size; i++) {
		flag = 1;
		for (int j = 0; j < size - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag) {
			std::cout << "Opt" << std::endl;
			break;
		}
	}
}
