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
    return 0;
}