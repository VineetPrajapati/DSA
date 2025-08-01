// Reverse the array
#include <iostream>
#include <vector>
#include <algorithm>

void reverseArray(std::vector<int> &arr)
{
	int start = 0;
	int end = arr.size() - 1;

	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}
}

void printArray(std::vector<int> &arr)
{
	for (int i = 0; i < arr.size(); i++)
	{
		std::cout << arr[i] << " ";
	}
}

int main()
{
	std::vector<int> myArr = {1, 2, 3, 4, 5};
	std::cout << "Original arr : ";
	printArray(myArr);

	reverseArray(myArr);

	std::cout << std::endl;

	std::cout << "Reverse Array : ";
	printArray(myArr);

	std::cout<<std::endl;
}