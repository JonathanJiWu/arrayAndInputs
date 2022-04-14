// arrayAndInputs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

void PrintArray(int array[], int size)//square bracket for array(taking in)
{
    for (int i = 0; i < size; i++)//run the full size of the array
    {
        std::cout << array[i] << "\t";//printout that element at the index

    }
    std::cout << std::endl;
}

int main()
{
    const int SIZE = 10;
    int nums[SIZE];// = { 12, 15, 18, 22, 29 };
    //std::cout << sizeof(nums) << std::endl;
    //PrintArray(nums, SIZE);//anything outside of size parameter will be garbage value
    int count = 0;
    for (int i = 0; i < SIZE; i++)
    {

        if (std::cin >> nums[i])//this statement will return cin => cin only evalue true if properly stored with a value
        {
            count++;
            //input worked
        }
        else
        {
            break;//invalid char
        }
    }
    PrintArray(nums, count);
    std::cin.clear();//clear input wrong status

    std::cin.ignore(1000, '\n');//ignore 1000 chars until the new line inputs
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');//ignore max amount of the chars


    std::string test;//test input leftover
    std::cin >> test;
    std::cout << test << std::endl;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
