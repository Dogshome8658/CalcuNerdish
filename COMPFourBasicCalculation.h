#ifndef COMPFBC
#include <COMPAccurateNumberImplementation.h>
#include<stdlib.h>

int ErrorExecuted=0;

#define Overflow_E 1
#define Underflow_E -1

/*bool Add_SinglePlace(char FirstPlace,char SecondPlace,char* Result,bool* NeedAddTen){
    char PreResult=FirstPlace+SecondPlace;
    if(PreResult>=10){
        (&NeedAddTen)=true;
    }else{
        (&NeedAddTen)=false;
    }
    (&Result)=PreResult%10;
    return true;
}

bool Add_Des(Number FirstNumber,Number SecondNumber,c){
    if(FirstNumber.IfIsPositive==true&&SecondNumber.IfIsPositive==true){
        bool IfIhadToAddOneOnTheNextPlace=false;
        int Pointer=99;
        while (Pointer!=0){
            
        }//Desmal Place
        Pointer=99;
        while (Pointer!=0){
            
        }//Non blabla
    }
    
}*/

Number* CreateANumber(Number* NumberAllocating){
    if(NumberAllocating==NULL){
        Number TheNumberAllocating=malloc(sizeof(Number));
        if (TheNumberAllocating==NULL){
            return NULL;
        }
        TheNumberAllocating.IfIsPositive=1;
        TheNumberAllocating.LowerNumber=1;
        TheNumberAllocating.UpperNumber=0;
        return TheNumberAllocating;
    }else{
        
    }
    return NULL;
}

bool Addition(Number First,Number Sercond){

}

#endif
#define COMPFBC