/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avolcy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:00:26 by avolcy            #+#    #+#             */
/*   Updated: 2024/07/15 13:00:40 by avolcy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <string>
# include <iostream>
# include <fstream>

int main (int argc, char *argv[]) {
  
  size_t pos;
  std::string line;
  std::string target;
  std::string newstr;

  if (argc != 4)
    return (std::cout << "This program only takes 3 parameters" << std::endl, 1);

  newstr = argv[1];
  newstr += ".replace";

  std::ifstream input(argv[1]);
  if (input.fail())
    return (std::cerr << "Error reading input file !" << std::endl, 1);

  std::ofstream output(newstr.c_str());
  if (output.fail())
    return (std::cerr << "Error creating the output.replace file !" << std::endl, 1);

  target = argv[2];
  newstr = argv[3];

  while (getline(input, line)) {

    pos = 0;
    while (line.find(target, pos) != std::string::npos) {
      pos = line.find(target, pos);
      line.erase(pos, target.length());
      line.insert(pos, newstr);
      line += newstr.length(); 
    }
    output << line << std::endl;
  }
  input.close();
  output.close();
  return 0;
}
