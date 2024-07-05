//$"42 HEADER"




# include <string>
# include <iostream>
# include <fstream>

using namespace std;

int main (int argc, char *argv[]) {
  
  size_t pos;
  std::string line;
  std::string target;
  std::string newstr;

  if (argc != 4)
    return (cout << "This program only takes 3 parameters" << endl, 1);

  newstr = argv[1];
  newstr += ".replace";

  std::ifstream input(argv[1]);
  if (input.fail())
    return (cerr << "Error reading input file !" << endl, 1);

  std::ofstream output(newstr.c_str());
  if (output.fail())
    return (cerr << "Error creating the output.replace file !" << endl, 1);

  target = argv[2];
  newstr = argv[3];

  while (getline(input, line)) {

    pos = 0;
    while (line.find(target, pos) != string::npos) {
      pos = line.find(target, pos);
      line.erase(pos, target.length());
      line.insert(pos, newstr);
      line += newstr.length(); 
    }
    output << line << endl;
  }
  input.close();
  output.close();
  return 0;
}
