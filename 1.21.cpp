#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[]){
	Sales_item item1,item2;
	std::cin >> item1 >> item2;
	if(item1.isbn() == item2.isbn()){
		std::cout << item1 + item2 << std::endl;
	}
	else{
		std::cout << "ISBN Error!" << std::endl;
	}
	return 0;
}