#ifndef COMPANI

struct DeprecatedAccurateNumber{
    //char IAmDesNum
    char Places[100];
    char IfIsPositive=1;
    char DesPlaces[100];
};

struct UnsignedNumber{
    char Places[100];
};


struct Number{
    //char IAmFraction =1
    struct UnsignedNumber UpperNumber;
    struct UnsignedNumber LowerNumber;
    bool IfIsPositive=1;//Ignore both?
    //I guess just do some math
};

//#define Number AccurateNumber
#define bool char

#define false 0
#define true 1

/*#define DesNumber_T 0
#define AccrateNumber_T 0
#define Fraction_T 1*/

#endif
#define COMPANI 1