#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
		const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
		numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }

    delete [] mirror;//

	// Array<std::string> array(5);
	// for (int i = 0; i < 5; i++)
	// {
	// 	array[i] = std::string("Hello" + std::to_string(i));
	// }
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << array[i] << std::endl;
	// }

	// std::cout << std::endl;

	// Array<std::string> array2;
	// array2 = array;
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << array2[i] << std::endl;
	// }
	// for (int i = 0; i < 5; i++)
	// {
	// 	array2[i] = std::string("Changed" + std::to_string(i));
	// }
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << array[i] << std::endl;
	// }
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << array2[i] << std::endl;
	// }




	// std::cout << std::endl;

	// Array<std::string> array3(array);
	// for (int i = 0; i < 5; i++)
	// {
	// 	std::cout << array3[i] << std::endl;
	// }



    return 0;
}