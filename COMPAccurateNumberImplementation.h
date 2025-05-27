#ifndef COMPANI
struct AccurateNumber{
    char Places[100];
    char IfIsPositive=1;
    char DesPlaces[100];
};

struct Fraction{
    AccurateNumber UpperNumber;
    AccurateNumber LowerNumber;
    char IfIsPositive=1;//Ignore both?
};

#define Number AccurateNumber
#endif
#define COMPANI 1