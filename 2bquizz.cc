#include <iostream>

class X {
	public:
		void memberFunctionThree(int one = 1234, int two = 345, int three = 32);
};

int main(void)
{
	X x;
	x.memberFunctionThree();
	x.memberFunctionThree(32);
	x.memberFunctionThree(982, 25);
	x.memberFunctionThree(6, 43, 23954);
}

void X::memberFunctionThree(int one, int two, int three)
{
	std::cout << "three arguments: " << one << ", " << two << ", " << three << std::endl;
}
