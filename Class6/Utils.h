#ifndef UTILS_H
#define UTILS_H

namespace cpp_class6 {

	void sortArray(float * myArray, const unsigned int length);
	void sortArray(int * myArray, const unsigned int length);
	template<typename T>
	void swap(T* firstValue, T *secondValue) {
		T temp = *firstValue;
		*firstValue = *secondValue;
		*secondValue = temp;
	}

	char* removeDuplicates(char* const myCharArray, unsigned int &length);
	float* removeDuplicates(float* const myfloatArray, unsigned int &length);
	bool areEqual(const float a, const float b);
	void rotateToLeft(unsigned int * const myArr,unsigned int length, unsigned int rotationNum);
	void rotateToLeft(short * const myArr, unsigned int length, unsigned int rotationNum);

}

#endif // !UTILS_H


