#include <iostream>
#include "Sales_item.h"

int main(int argc, char const *argv[]){
	Sales_item item[10],itemSum;
	std::cin >> itemSum;
	for(int i = 0;i < 10;++i){
		std::cin >> item[i];
	}
	for(int i = 0;i < 9;++i){
		if(item[i].isbn() != item[i + 1].isbn()){
			std::cout << "ISBN Error!" << std::endl;
		}
	}
	for(int i = 0;i < 10;++i){
		itemSum += item[i];
	}
	std::cout << itemSum << std::endl;
	return 0;
}