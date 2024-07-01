//42 HEADER


#include <string>
#include <iostream>

using namespace std;
  

int main (int argc, char *argv[]) {

  (void)argv;

  if (argc > 1)
    return (0);

  string theString = "HI THIS IS BRAIN";
  string *stringPTR = &theString;
  string& stringREF = theString;

  cout << endl;
  cout << "The memory address of theString is : " << &theString << endl;
  cout << "The memory address of stringPTR is : " << stringPTR << endl;
  cout << "The memory address of stringREF is : " << &stringREF << endl;

  cout << endl;
  cout << "The Value of theString is : " << theString << endl;
  cout << "The Value of stringPTR is : " << *stringPTR << endl;
  cout << "The Value of stringREF is : " << stringREF << endl;



  
  return 0;
}
