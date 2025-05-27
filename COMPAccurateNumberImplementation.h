#ifndef COMPANI

struct AccurateNumber{
    char IAmDesNum
    char Places[100];
    char IfIsPositive=1;
    char DesPlaces[100];
};

struct Fraction{
    char IAmFraction =1
    struct AccurateNumber UpperNumber;
    struct AccurateNumber LowerNumber;
    //char IfIsPositive=1;//Ignore both?
    //I guess just do some math
};

#define Number AccurateNumber
#define bool char

#define false 0
#define true 1

/*#define DesNumber_T 0
#define AccrateNumber_T 0
#define Fraction_T 1*/

#endif
#define COMPANI 1