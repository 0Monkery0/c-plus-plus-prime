#include <iostream>

int main(int argc, char const *argv[]){
	int a = 0,b = 0;
	std::cout << "Please input to integers:" << std::endl;
	std::cin >> a >> b;
	while(a > b + 1){
		++b;
		std::cout << b << std::endl;
	}
	while(b > a + 1){
		++a;
		std::cout << a << std::endl;
	}
	return 0;
}