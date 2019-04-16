#include <cassert>
#include <iostream>

#include "TestUtils.h"
#include "Utils.h"

void cpp_class6_test::testSortIntArray()
{
	int intMockArray[10] = {12,314,123,-1,-14,109,56,-134,83,6};
	int intMockResult[10] = {-134,-14,-1,6,12,56,83,109,123,314};
	cpp_class6::sortArray(&intMockArray[0],10);
	for (size_t i=0;i<10;i++) {
		assert(intMockArray[i] == intMockResult[i]);
	}


}
void cpp_class6_test::testSortFloatArray()
{
	float  floatMockArray[5] = { -3.f,10.23f,34.5f,-9.3f,128.f };
	float  floatMockResult[5] = { -9.3f,-3.f,10.23f,34.5f,128.f };
	cpp_class6::sortArray(floatMockArray, 5);
	for (size_t i = 0; i<5; i++) {
		assert(floatMockArray[i] == floatMockResult[i]);
	}
}


void cpp_class6_test::testRemoveIntDuplicates()
{
	unsigned int length = 9;
	char* mockArray = new char [length]{'H','e', 'l', 'l', 'o', 'W', 'o', 'l', 'd' };
	char* charExpectedResult = new char [6] {'H', 'e', 'l', 'o', 'W', 'd' };
	char* mockResult=cpp_class6::removeDuplicates(mockArray,length);
	for (size_t i = 0;i<length;i++) {
		assert(mockResult[i]==charExpectedResult[i]);
	}
	delete[] mockResult;
	delete[] mockArray;
	delete[] charExpectedResult;
}

void cpp_class6_test::testRemoveFloatDuplicates()
{
	unsigned int length = 9;
	float* mockArray = new float [length] {10.5f, -4.f, 10.55f, 4.f, 40.24f, 10.5f, 9.2f, -4.f, 10.24f};
	float* floatExpectedResult = new float[7]{ 10.5f, -4.f, 10.55f, 4.f,40.24f,9.2f ,10.24f };
	float* mockResult = cpp_class6::removeDuplicates(mockArray, length);
	for (size_t i = 0; i<length; i++) {
		assert(mockResult[i] == floatExpectedResult[i]);
	}
	delete[] mockResult;
	delete[] mockArray;
	delete[] floatExpectedResult;
}

void cpp_class6_test::testRotateToleft()
{
	unsigned int intMockArray[5] = {1,2,3,4,5};
	unsigned int expectedResult[5] = { 4,5,1,2,3 };
	const unsigned int rotation = 3;
	cpp_class6::rotateToLeft(intMockArray,5,rotation);
	for (size_t i=0 ;i<5;i++) {
		assert(intMockArray[i]== expectedResult[i]);
	}
}

void cpp_class6_test::testShortRotateToleft()
{
	short shortMockArray[10] = { 10,12,9,1,51,15,2,2,-12,1 };
	short expectedResult[10] = { 15,2,2,-12,1,10,12,9,1,51 };
	const unsigned int rotation = 15;
	cpp_class6::rotateToLeft(shortMockArray, 10, rotation);
	for (size_t i = 0; i<10; i++) {
		assert(shortMockArray[i] == expectedResult[i]);
	}
}
