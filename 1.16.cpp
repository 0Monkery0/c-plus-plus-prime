#include <iostream>

int main(int argc, char const *argv[]){
	int num = 0,sum = 0;
	while(std::cin >> num){
		sum += num;
	}
	std::cout << sum << std::endl;
	return 0;
}