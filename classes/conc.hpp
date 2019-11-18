#include <iostream>
using namespace std;

//The cats class that we used earlier in the lesson.
class Cats
{
  string name;
  string breed;
  int age;

public:
  ~Cats(); // declaring the destructor
  Cats();  //declaring the constructor
  void setName(string nameIn);
  void setBreed(string breedIn);
  void setAge(int ageIn);
  string getName();
  string getBreed();
  int getAge();
  void printInfo();
};

// Calling the destructor
Cats::~Cats()
{
  cout << "Clean up!";
}
//defining the constructor
Cats::Cats()
{
  cout << "Assigning inital values in the constructor\n";
  name = "Unknown";
  breed = "Unknown"; //the initial value of the breed
  age = 99;          //the initial value of the age
}
void Cats::setName(string nameIn)
{
  name = nameIn;
}

void Cats::setBreed(string breedIn)
{
  breed = breedIn;
}

void Cats::setAge(int ageIn)
{
  age = ageIn;
}
string Cats::getName()
{
  return name;
}
string Cats::getBreed()
{
  return breed;
}
int Cats::getAge()
{
  return age;
}
void Cats::printInfo()
{
  cout << name << " " << breed << " " << age;
}