#include<iostream>
#include "Sorting.h"

void PrintArray(int arr[], int size) {
	std::cout << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << "    ";
	}
	std::cout << std::endl;
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
