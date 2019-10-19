/*This program accepts inputs from the user*/ 

#include <iostream>
#include <string>
#include <sstream>

int main()
{
    int year = 0;
    int age = 0;
    std::string name;
    std::string length, width;
    float flength, fwidth, area = 0;

    //using getline to get more words that are spaced
    std::cout<<"Please, enter your full name: ";
    std::getline(std::cin, name);
    std::cout<<"Hello "<<name<<" !\n";

    //using the stringstream to convert string values to numeric values
    std::cout<<"so how big is your room now?"<<"\n";
    
    std::cout<<"Enter the length: ";
    std::getline(std::cin, length);
    std::stringstream(length) >> flength;

    std::cout<<"Enter the width: "; 
    std::getline(std::cin, width);
    std::stringstream(width) >> fwidth;
     
    area = flength * fwidth;
    
    std::cout<<"The area of your room is: ";
    std::cout<<area<<std::endl;
    
    //print a message to the user
    std::cout<<"What year is your favorite? ";
    
    //get the user response and assign it to the variable year
    std::cin >> year;
    
    //output response to user
    std::cout<<"How interesting, your favorite year is "<<year<<"!\n";
    
    //print a message to the user
    std::cout<<"At what age did you learn to ride a bike? ";
    
    //get the user response and assign it to the variable age
    std::cin >> age;
    
    //output response to user
    std::cout<<"How interesting you learned to ride at "<<age<<std::endl;

    return 0;
}