// vanessa pyne
// quiz #2

#include <iostream>

class X {
	public:
		void memberFunctionZero();
		void memberFunctionOne(int one);
		void memberFunctionTwo(int one, int two);
		void memberFunctionThree(int one, int two, int three);
};

int main(void)
{
	X x;
	x.memberFunctionZero();
	x.memberFunctionOne(32);
	x.memberFunctionTwo(982, 25);
	x.memberFunctionThree(6, 43, 23954);
}

void X::memberFunctionZero()
{
	std::cout << "zero arguments" << std::endl;
}

void X::memberFunctionOne(int one)
{
	std::cout << "one argument: " << one << std::endl;
}

void X::memberFunctionTwo(int one, int two)
{
	std::cout << "two arguments: " << one << ", " << two << std::endl;
}

void X::memberFunctionThree(int one, int two, int three)
{
	std::cout << "three arguments: " << one << ", " << two << ", " << three << std::endl;
}

// returns:
// zero arguments
// one argument: 32
// two arguments: 982, 25
// three arguments: 6, 43, 23954

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

// returns
// zero arguments: 1234, 345, 32
// one arguments: 32, 345, 32
// two arguments: 982, 25, 32
// three arguments: 6, 43, 23954
