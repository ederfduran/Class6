#include <cassert>
#include <limits>

#include "Utils.h"


void cpp_class6::sortArray(float * const myArray, const unsigned int length)
{
	assert(myArray && length>0);
	for (unsigned int i = 1; i < length; ++i) {
		for (unsigned int j = 0; j < (length - i); ++j) {
			if (myArray[j] > myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

void cpp_class6::sortArray(int * const myArray, const unsigned int length)
{
	assert(myArray&& length>0);
	for (unsigned int i = 1; i < length; ++i) {
		for (unsigned int j = 0; j < (length - i); ++j) {
			if (myArray[j] > myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

char* cpp_class6::removeDuplicates(char * const myCharArray,unsigned int& length)
{
	assert(myCharArray && length>0);
	if (length ==1) {
		return myCharArray;
	}
	char* newCharArray = new char[length];
	unsigned int newArrayIndex = 0;
	char currentVal;

	for (unsigned int i=0;i< length;i++) {
		
		if (myCharArray[i] == -1) {
			continue;
		}
		currentVal = myCharArray[i];
		newCharArray[newArrayIndex++] = currentVal;

		for (unsigned int j = i+1; j< length; j++) {
			if (currentVal== myCharArray[j]) {
				myCharArray[j] = -1;
			}
		}
	}
	
	length = newArrayIndex;
	return newCharArray;
}

float * cpp_class6::removeDuplicates(float * const myfloatArray, unsigned int & length)
{
	assert(myfloatArray&& length >0);
	if (length == 1) {
		return myfloatArray;
	}
	float* newFloatArray = new float[length];
	unsigned int newArrayIndex = 0;
	float currentVal;

	for (unsigned int i = 0; i< length; i++) {

		if (myfloatArray[i] == -1) {
			continue;
		}
		currentVal = myfloatArray[i];
		newFloatArray[newArrayIndex++] = currentVal;

		for (unsigned int j = i + 1; j< length; j++) {
			if (areEqual(currentVal, myfloatArray[j])) {
				myfloatArray[j] = -1;
			}
		}
	}
	length = newArrayIndex;
	return newFloatArray;
}

bool cpp_class6::areEqual(const float a, const float b)
{
	return std::abs(a - b) <= std::numeric_limits<float>::epsilon();
}

void cpp_class6::rotateToLeft(unsigned int * const myArr, unsigned int length, unsigned int rotationNum)
{
	assert(myArr && length >0);

	if (rotationNum > length) {
		rotationNum = rotationNum % length;
	}

	for (unsigned int i = 0;i<rotationNum;i++) {
		unsigned int temp = myArr[0];
		for (unsigned int i = 0; i<length - 1; i++)
		{
			myArr[i] = myArr[i + 1]; //move all element to the left except first one
		}
		myArr[length - 1] = temp; //assign remembered value to last element
	}
}

void cpp_class6::rotateToLeft(short * const myArr, unsigned int length, unsigned int rotationNum)
{
	assert(myArr && length >0);
	if (rotationNum > length) {
		rotationNum = rotationNum % length;
	}
	for (unsigned int i = 0; i<rotationNum; i++) {
		short temp = myArr[0];
		for (unsigned int i = 0; i<length - 1; i++)
		{
			myArr[i] = myArr[i + 1]; //move all element to the left except first one
		}
		myArr[length - 1] = temp; //assign remembered value to last element
	}
}

