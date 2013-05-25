/*
 * assignment1.cpp
 *
 *  Created on: May 22, 2013
 *      Author: das_cruel
 */

#include <iostream>
using namespace std;

int binarySearch(int[],int, int);
int recBinarySearch(int intArray[], int key, int low, int high);
int linearSearch(int intArray[], int key, int size);

int main(){
	int arr[] = {1, 3, 23, 25,43, 54};
	int answer;
	answer = recBinarySearch(arr, 43, 0, 5);
	cout << answer;
	return 0;
}

int binarySearch(int intArray[], int size, int key){
	int low = 0;
	int high = size-1;
	int mid;

	while(low <= high){
		mid = (low + high)/2;
		if(key == intArray[mid]){
			return mid;
		}
		else if(key < intArray[mid]){
			high = mid -1;
		}
		else
			low = mid+1;
	}
	return -1;
}

int recBinarySearch(int intArray[], int key, int low, int high){
	int mid = (low+high)/2;

	if(key == intArray[mid]){
		return mid;
	}
	else if(key < intArray[mid]){
		return recBinarySearch(intArray,key, low, mid -1);
	}
	else{
		return recBinarySearch(intArray,key, mid+1, high);
	}
	return -1;
}

int linearSearch(int intArray[], int key, int size){
	for(int i = 0; i < size; i++){
		if(key == intArray[i]){
			return i;
		}
	}

	return -1;
}
