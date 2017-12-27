#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[]){
	Sales_item item[5];
	for(int i = 0;i < 3;++i){
		std::cin >> item[i];
	}
	for(int i = 0;i < 3;i++){
		std::cout << item[i] << std::endl;
	}
	return 0;
}