class Poly{
    private:
        int order;  // order of the polynomial
        int *coeff; // pointer to array of coeff on the heap
                    // size of coeff array predicated on (order + 1)

    public:
        Poly( );                          // default constructor – order=0 & coeff[0] =1
        Poly(int Order, int Default = 1); // creates Nth order poly
        // and inits all coeffs
        Poly(int Order, int *Coeff);      // creates an Nth polynomial & inits 
        ~Poly( );                         // destructor
        // copy constructor

        // mutators  & accessors
        void set( ){                      // Query user for coefficient values);
        void set(int coeff[ ], int size); // input coeffs via external coeff vector
        int getOrder( )const;             // get order of polynomial
        int* get( );                      // returns pointer to coeff array

        // overloaded operators
        Poly operator+( const Poly &rhs);    // add two polynomials
        Poly operator-( const Poly &rhs);    // subt two polynomials
        Poly operator*( const int scale);    // scale a  polynomial
        //    P2 = P1*scale
        Poly scale*Poly
        //    P2 = scale*P1
        Poly operator*(const Poly &rhs);     // mult two polynomials
        bool operator==(const Poly &rhs);    // equality operator
        const int & operator[ ](int I)const; // return the Ith coefficient
        int &operator[ ](int I);             // return the Ith coefficient

        int operator( )(int X);              // evaluate P(x) according 

        Poly & operator=(const Poly & rhs);
        friend ostream & operator<<(ostream & Out, const Poly &rhs);
          

        //other member functions
};

