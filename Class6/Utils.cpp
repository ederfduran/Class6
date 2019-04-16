#include <cassert>
#include <limits>

#include "Utils.h"


void cpp_class6::sortArray(float * myArray, const unsigned int length)
{
	assert(myArray);
	for (size_t i = 1; i < length; ++i) {
		for (size_t j = 0; j < (length - i); ++j) {
			if (myArray[j] > myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

void cpp_class6::sortArray(int * myArray, const unsigned int length)
{
	assert(myArray);
	for (unsigned int i = 1; i < length; ++i) {
		for (unsigned int j = 0; j < (length - i); ++j) {
			if (myArray[j] > myArray[j + 1]) {
				swap(&myArray[j], &myArray[j + 1]);
			}
		}
	}
}

char* cpp_class6::removeDuplicates(char *& myCharArray,unsigned int& length)
{
	assert(myCharArray);
	if (length==0 || length ==1) {
		return myCharArray;
	}
	char* newCharArray = new char[length];
	unsigned int newArrayIndex = 0;
	char currentVal;

	for (size_t i=0;i< length;i++) {
		
		if (myCharArray[i] == NULL) {
			continue;
		}
		currentVal = myCharArray[i];
		newCharArray[newArrayIndex++] = currentVal;

		for (size_t j = i+1; j< length; j++) {
			if (currentVal== myCharArray[j]) {
				myCharArray[j] = NULL;
			}
		}
	}
	delete[] myCharArray;
	myCharArray = nullptr;
	length = newArrayIndex;
	return newCharArray;
}

float * cpp_class6::removeDuplicates(float *& myfloatArray, unsigned int & length)
{
	assert(myfloatArray);
	if (length == 0 || length == 1) {
		return myfloatArray;
	}
	float* newFloatArray = new float[length];
	unsigned int newArrayIndex = 0;
	float currentVal;

	for (size_t i = 0; i< length; i++) {

		if (myfloatArray[i] == NULL) {
			continue;
		}
		currentVal = myfloatArray[i];
		newFloatArray[newArrayIndex++] = currentVal;

		for (size_t j = i + 1; j< length; j++) {
			if (areEqual(currentVal, myfloatArray[j])) {
				myfloatArray[j] = NULL;
			}
		}
	}
	delete[] myfloatArray;
	myfloatArray = nullptr;
	length = newArrayIndex;
	return newFloatArray;
}

bool cpp_class6::areEqual(const float a, const float b)
{
	return std::abs(a - b) <= std::numeric_limits<float>::epsilon();
}

void cpp_class6::rotateToLeft(unsigned int * myArr, unsigned int length, unsigned int rotationNum)
{
	if (rotationNum > length) {
		rotationNum = rotationNum % length;
	}
	int movement=0;

	unsigned int * bufferArray = new unsigned int[length];

	for (size_t i = 0;i< length;i++) {
		movement = i - rotationNum;
		movement = movement >= 0 ? movement : (length-std::abs(movement)) % length;
		bufferArray[movement] = myArr[i];
	}
	// Array Copy
	for (size_t i = 0; i < length; i++) {
		myArr[i] = bufferArray[i];
	}
	delete[] bufferArray;

	// Second Alternative Implementation, what is more efficient?.... 

	//if (rotationNum > length) {
	//	rotationNum = rotationNum % length;
	//}

	//for (size_t i = 0;i<rotationNum;i++) {
	//	unsigned int temp = myArr[0];
	//	for (size_t i = 0; i<length - 1; i++)
	//	{
	//		myArr[i] = myArr[i + 1]; //move all element to the left except first one
	//	}
	//	myArr[length - 1] = temp; //assign remembered value to last element
	//}
}

void cpp_class6::rotateToLeft(short * myArr, unsigned int length, unsigned int rotationNum)
{
	assert(myArr);
	if (rotationNum > length) {
		rotationNum = rotationNum % length;
	}
	int movement = 0;

	short * bufferArray = new short[length];

	for (size_t i = 0; i < length; i++) {
		movement = i - rotationNum;
		movement = movement >= 0 ? movement : (length - std::abs(movement)) % length;
		bufferArray[movement] = myArr[i];
	}
	// Array Copy
	for (size_t i = 0; i < length; i++) {
		myArr[i] = bufferArray[i];
	}
	delete[] bufferArray;

}

