#include "factory.hpp"

int main()
{
	std::cout << "choose : 1 Apple   2 : Banana  3 : Cherry   ---> ";
	int i;
	std::cin >> i;

	Factory* factory = new Factory;	
	Food* now = factory->select(i);
	now->display();
}