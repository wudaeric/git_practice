#include <iostream>
#include <vector>


int main()
{
    std::cout << "hello git" << std::endl;
    std::cout << "One more change\n";

    std::vector<int> number;
    for(int i = 0; i < 4; i++)
    {
        number.emplace_back(i);
    }

    for(auto& n : number)
    {
        std::cout << n << std::endl;
    }
}