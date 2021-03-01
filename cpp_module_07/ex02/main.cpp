#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> test(42);
	try{
		std::cout << test.size() << std::endl;
		for(unsigned int i = 0;i < test.size();i++)
		{
			test[i] = i + 1;
			std::cout << test[i] << " ";
		}
		std::cout << std::endl;
		Array<int> test2(test);
		for(unsigned int i = 0;i < test2.size();i++)
		{
			test[i] = i * 2;
			std::cout << test2[i] << " ";
		}
		std::cout << std::endl;
		std::cout << test[44] << std::endl;

	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}

	const Array<int> test3(3);
	try{
		std::cout << test3.size() << std::endl;
		for(unsigned int i = 0;i < test3.size();i++)
		{
			test3[i] = i + 1;
			std::cout << test3[i] << " ";
		}
		std::cout << std::endl;
		Array<int> test4(test3);
		for(unsigned int i = 0;i < test4.size();i++)
		{
			test3[i] = i * 2;
			std::cout << test4[i] << " ";
		}
		std::cout << std::endl;
		std::cout << test3[44] << std::endl;

	}catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}