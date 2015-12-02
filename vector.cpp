#include <iostream>

///////////////////////////////////////
// interface
///////////////////////////////////////

class Vector {
    private:
        int size;
        int capacity; // make sure to be generous
        int *heapPtr; // pointer to heap
    
    public:
        //  Vector Constructors & Destructors  //
        Vector();                        // constructor - creates zero length vector
        Vector(int Size, int Value = 0); // overloaded constructor
        ~Vector();                       // destructor
        Vector(Vector & rhs);            // copy constructor

        //  Accessor/Mutators  //
        int getSize()const;
        int getValue(int element);
        int getCapacity();
        void setValue(int element, int value);

        //  other member functions  //
        void resize(int size, int value = 0);  // resize vector and init tew values
        void push_back(int value);  
        void push_front(int value);
        int pop_back();
        int pop_front();
        void VectorPrint();                    // prints the entire vector
        void VectorPrint(int length);          // prints the first length elements
        void VectorConcat(const Vector& rhs); //concatenate rhs vector to existing vector
};

///////////////////////////////////////
//  unit test driver 
///////////////////////////////////////

int main (void)
{
    int popped;

    Vector X(8);
    std::cout << "i:        X ";
    X.VectorPrint();

    Vector Y(8,10);
    std::cout << "ii:       Y ";
    Y.VectorPrint();

    X.resize(16);
    std::cout << "iii:      X ";
    X.VectorPrint();

    popped = X.pop_front();    
    std::cout << "iiii:     X ";
    X.VectorPrint();
    std::cout << "    popped = " << popped << std::endl;

    popped = X.pop_back();
    std::cout << "v:        X ";
    X.VectorPrint();
    std::cout << "    popped = " << popped << std::endl;
    
    Y.push_front(100);
    std::cout << "vi:       Y ";
    Y.VectorPrint();
    
    Y.setValue(10,-99);
    std::cout << "vii:      Y ";
    Y.VectorPrint();
    
    Y.push_back(100);
    std::cout << "viii:     Y ";
    Y.VectorPrint();
    
    X.VectorConcat(Y);
    std::cout << "ix:       X ";
    X.VectorPrint();
    
    std::cout << "x:        X ";
    X.VectorPrint();

    std::cout << "xi:       Y ";
    Y.VectorPrint();

    std::cout << "xii:      X ";
    X.VectorPrint(12);
}

///////////////////////////////////////
// definitions    
///////////////////////////////////////

// constructor
Vector::Vector(void)
{
    size = 0;
    capacity = 32;
    heapPtr = new int[32];
}

// overloaded constructor
Vector::Vector(int Size, int Value)
{
    size = Size;
    capacity = 32;
    heapPtr = new int[32];
    
    for (int i = 0; i < Size; ++i)
        heapPtr[i] = Value;
}

// destructor
Vector::~Vector(void)
{
    size = 0;
    capacity = 0;
    heapPtr = NULL;
    delete heapPtr;
}

// copy constructor
Vector::Vector(Vector& rightHandSide)
{
    size = rightHandSide.size;
    capacity = rightHandSide.capacity;
    heapPtr = *(new int*);
}

int Vector::getSize(void)const
{
    return size;
}

int Vector::getValue(int element)
{
    return heapPtr[element];
}

void Vector::resize(int Size, int Value)
{
    int oldSize = getSize();
    int newSize = Size + oldSize; 
    size = newSize;    

    for (int i = oldSize; i < newSize; ++i)
        heapPtr[i] = Value;
}

int Vector::pop_front(void)
{   
    int front = heapPtr[0];
    for (int i = 0; i < size; ++i)
        heapPtr[i] = heapPtr[i + 1];
    size -= 1;
    return front;
}

int Vector::pop_back(void)
{
    size -= 1;
    return heapPtr[size];
}

void Vector::push_front(int newValue)
{
    for (int i = 0; i < size + 1; ++i)
        heapPtr[i + 1] = heapPtr[i];
    heapPtr[0] = newValue;
    ++size;
}

void Vector::push_back(int newValue)
{
    heapPtr[size] = newValue;
    ++size;
}

void Vector::setValue(int element, int value)
{
    heapPtr[element] = value;

    if (size < element)
        size = element + 1;
}

void Vector::VectorPrint(void)
{
    std::cout << "vector: <";
    for (int i = 0; i < size; ++i)
    {
        std::cout << heapPtr[i]; 
        if (i != size - 1)
            std::cout << ",";
    }
    std::cout << ">" << std::endl;
}

void Vector::VectorPrint(int length)
{
    std::cout << "vector: <";
    for (int i = 0; i < length - 1; ++i)
    {
        std::cout << heapPtr[i];
        if (i != length - 2)
            std::cout << ",";
    }
    std::cout << ">" << std::endl;
}

void Vector::VectorConcat(const Vector& rightHandSide)
{
    int j = 0;
    int newSize = size + rightHandSide.size;
    for (int i = size; i < newSize; ++i)
    {
        heapPtr[i] = rightHandSide.heapPtr[j];
        ++j;
    }
    size = newSize;
}
