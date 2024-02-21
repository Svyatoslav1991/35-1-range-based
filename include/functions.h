#include <iostream>

template <typename T>
void printInitializerList(const std::initializer_list<T>& il) 
{
    if (il.size()) 
    {
        for (const auto& value : il)
        {
            std::cout << value << " ";
        }
    }
    else
    {
        std::cout << "Initializer list is empty";
    }

    
    std::cout << "\n";
}