#include <iostream>

int main() 
{
    //print the sizes of each varible types available in C++
    std::cout<<"int size = "<<sizeof(int)<<"\n";
    std::cout<<"short size = "<<sizeof(short)<<"\n";
    std::cout<<"long size = "<<sizeof(long)<<"\n";
    std::cout<<"char size = "<<sizeof(char)<<"\n";
    std::cout<<"float size = "<<sizeof(float)<<"\n";
    std::cout<<"double size = "<<sizeof(double)<<"\n";
    std::cout<<"bool size = "<<sizeof(bool)<<std::endl;

    // constants cannot be changed during the program
    const int weightGoal = 100;
    std::cout<<"WeightGoal = "<<weightGoal<<"\n";

    //enum example
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        std::cout<<"I'm not so sure January is the best month\n";
    }

    return 0;
}