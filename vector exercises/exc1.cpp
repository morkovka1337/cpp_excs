#include <vector>
#include <iostream>
#include <locale>
#include <stdlib.h>

int main()
{	
	setlocale(LC_ALL, "Russian");
    std::vector<int> numArray;
    int num;
    size_t ind;
    while (true)
    {
        std::cout<<"Enter number"<<std::endl;
        std::cin>>num;
		if (std::find(numArray.begin(), numArray.end(), num) == numArray.end())
		{
			numArray.push_back(num);
			std::cout << "Your element has been inserted into position" << numArray.size() - 1 << std::endl;
			if (num == -1)
				break;
		}
        std::cout << "Enter index of the element you want to return" << std::endl;
		std::cin >> ind;
		if (ind >= 0 && ind < numArray.size())
		std::cout << numArray.at(ind);
    }
};