#include <iostream>
#include <string>

int myadd(int a, int b);

int main(int argc, char** argv)
{
	std::string str="hello ndk!";
	std::cout<<str<<std::endl;

	std::cout<< myadd(10, 10) << std::endl;
	return 0;
}
