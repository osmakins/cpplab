#include <iostream>
#include <iomanip>

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
    enum MONTH {Jan, feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};
    
    //define bestMonth as a variable type MONTHS
    MONTH bestMonth;
    
    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;
    
    //now we can check the value of bestMonths just 
    //like any other variable
    if(bestMonth == Jan)
    {
        std::cout<<"I'm not so sure January is the best month\n";
    }

    // using the iomanip library and escape characters to format output
    std::cout<<"\n\nThe text without any formating\n";
    std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    std::cout<<"\nThe text with setw(15)\n";
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    std::cout<<"\n\nThe text with tabs\n";
    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n\n";

    //further output formating example
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    std::cout<<"Ints"<<std::setw(10)<<"Floats"<<std::setw(10)<<"Doubles"<< std::setw(10)<<"\n";
    std::cout<<a<<"\t"<<b<<"\t"<<c<<"\n";
    std::cout<<aa<<"\t"<<bb<<"\t"<<cc<<"\n";
    std::cout<<aaa<<"\t"<<bbb<<"\t"<<ccc<<"\n";

    return 0;
}