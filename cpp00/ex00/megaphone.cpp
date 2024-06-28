//42 HEADER
//42 HEADER

#include <iostream>

std::string stringToUpper(std::string str)
{
  for (int i = 0; str[i]; i++) {
    str[i] = std::toupper(str[i]);
  }
  return (str);
}

int main (int argc, char *argv[])
{
  if (argc < 2)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";

  for (int i = 1; i < argc; i++)
    std::cout << stringToUpper(argv[i]) << " ";
  std::cout << std::endl;
  return (0);
}
