#include <iostream>
#include <define.hpp>

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
        std::cout << "Destruction of copies should not entail leaks or segfault" << std::endl;
    }
    std::cout << GREEN << "Test copy OK" << RESET << std::endl;

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
        std::cerr << "try negative index, should return std::excetion | Return = " << e.what() << GREEN << " | test OK" << RESET << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "try create an empty tab should return exception: " << e.what() << GREEN << "test OK" << RESET << '\n';
    }

    bool flag = true;
    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
        if (numbers[i] == mirror[i])
          flag = false;
    }
    if (flag == true) { 
      std::cout << "change values in source tab should not affect copy tab: values should differ." << GREEN << "test OK" << RESET << std::endl;
    }
    else {
      std::cerr << "Memory alloc problem" << std::endl;
    }
    delete [] mirror;
    std::cout << "destruction of mirror doesn't provoc leaks or segfault: " << GREEN << "test OK" << RESET << std::endl;
    return 0;
}
