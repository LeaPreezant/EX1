#include "Stack.h"
#include <windows.h> 

#include <iostream>
#include <sstream>
#include <cstdlib>

void reverse(int* nums, unsigned int size)
{
    if (nums == NULL || size == 0) {
        return;
    }

    unsigned int start = 0;
    unsigned int end = size - 1;

    while (start < end)
    {

        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;

        start++;
        end--;
    }
}

int* reverse10()
{
    const int SIZE = 10;
    int inputArray[SIZE];

    std::cout << "Please enter 10 integers:" << std::endl;
    for (unsigned int i = 0; i < SIZE; i++) 
    {
        std::cin >> inputArray[i];
    }

    reverse(inputArray, SIZE);

    return inputArray;
}