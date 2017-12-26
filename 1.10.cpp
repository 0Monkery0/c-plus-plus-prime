#include <iostream>

int main(int argc, char const *argv[]){
	int num = 10;
	while(num > 1){
		--num;
		std::cout << num << std::endl;
	}
	return 0;
}