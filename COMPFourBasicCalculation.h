#ifndef COMPFBC
#include <COMPAccurateNumberImplementation.h>

int ErrorExecuted=0;

#define Overflow_E 1
#define Underflow_E -1

bool Add_SinglePlace(char FirstPlace,char SecondPlace,char* Result,bool* NeedAddTen){
    char PreResult=FirstPlace+SecondPlace;
    if(PreResult>=10){
        (&NeedAddTen)=true;
    }else{
        (&NeedAddTen)=false;
    }
    (&Result)=PreResult%10;
    return true;
}

bool Add_Des(Number FirstNumber,Number SecondNumber,Number* Result){
    if(FirstNumber.IfIsPositive==true&&SecondNumber.IfIsPositive==true){
        bool IfIhadToAddOneOnTheNextPlace=false;
        
    }
    
}

#endif
#define COMPFBC