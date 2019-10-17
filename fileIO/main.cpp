/*The goal of this quiz is to practice writing and reading files.
**Read the contents of input.txt and then write to it. 
*/

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  // remove if file exists
  remove("index.html") == 0 ? puts("new index file generated") : puts("index.html started");
  
  //create an output stream to write to the file
  //append the new lines to the end of the file
  ofstream myfileI("index.html");
  if (myfileI.is_open())
  {
    myfileI << "<html>\n";
    myfileI << "\t<head>\n";
    myfileI << "\t\t<title>New Page</title>\n";
    myfileI << "\t</head>\n";
    myfileI << "\t<body>\n";
    myfileI << "\t\t<h1>Index page</h1>\n";
    myfileI << "\t</body>\n";
    myfileI << "</html>\n";
    myfileI.close();
  }
  else
    cout << "Unable to open file for writing";

  return 0;
}