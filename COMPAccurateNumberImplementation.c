struct AccurateNumber{
    char Places[100];
    char IfIsPositive=1;
    char DesPlaces[100];
};

struct Fraction{
    struct AccurateNumber UpperNumber;
    struct AccurateNumber LowerNumber;
    char IfIsPositive=1;//Ignore Both one?
};


