#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <cmath>
#include <limits>

class ScalarConverter {
public:
    // Static method to convert input
    static void convert(const std::string& literal) {
        try {
            if (isCharLiteral(literal)) {
                char c = literal[1]; // Extract the character from 'c'
                printConversions(c);
            } else if (isIntLiteral(literal)) {
                int i = std::stoi(literal);
                printConversions(i);
            } else if (isFloatLiteral(literal)) {
                float f = std::stof(literal);
                printConversions(f);
            } else if (isDoubleLiteral(literal)) {
                double d = std::stod(literal);
                printConversions(d);
            } else if (isPseudoLiteral(literal)) {
                handlePseudoLiteral(literal);
            } else {
                throw std::invalid_argument("Invalid literal format.");
            }
        } catch (const std::exception& e) {
            std::cerr << "Error: " << e.what() << std::endl;
        }
    }

private:
    ScalarConverter() {} // Private constructor to prevent instantiation

    static bool isCharLiteral(const std::string& str) {
        return str.size() == 3 && str[0] == '\'' && str[2] == '\''; // Matches 'c'
    }

    static bool isIntLiteral(const std::string& str) {
        return !str.empty() && str.find('.') == std::string::npos && str.find('f') == std::string::npos;
    }

    static bool isFloatLiteral(const std::string& str) {
        return !str.empty() && str.back() == 'f';
    }

    static bool isDoubleLiteral(const std::string& str) {
        return !str.empty() && str.find('.') != std::string::npos && str.back() != 'f';
    }

    static bool isPseudoLiteral(const std::string& str) {
        return str == "-inf" || str == "+inf" || str == "nan" || 
               str == "-inff" || str == "+inff" || str == "nanf";
    }

    static void printConversions(char c) {
        if (isprint(c)) {
            std::cout << "char: '" << c << "'" << std::endl;
        } else {
            std::cout << "char: Non-displayable" << std::endl;
        }
        std::cout << "int: " << static_cast<int>(c) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(c) << std::endl;
    }

    static void printConversions(int i) {
        std::cout << "char: ";
        if (i >= 0 && i <= 127 && isprint(i)) {
            std::cout << "'" << static_cast<char>(i) << "'" << std::endl;
        } else {
            std::cout << "Non-displayable" << std::endl;
        }
        std::cout << "int: " << i << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    }

    static void printConversions(float f) {
        std::cout << "char: ";
        if (f >= 0 && f <= 127 && isprint(static_cast<int>(f))) {
            std::cout << "'" << static_cast<char>(f) << "'" << std::endl;
        } else {
            std::cout << "Non-displayable" << std::endl;
        }
        std::cout << "int: " << static_cast<int>(f) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(f) << std::endl;
    }

    static void printConversions(double d) {
        std::cout << "char: ";
        if (d >= 0 && d <= 127 && isprint(static_cast<int>(d))) {
            std::cout << "'" << static_cast<char>(d) << "'" << std::endl;
        } else {
            std::cout << "Non-displayable" << std::endl;
        }
        std::cout << "int: " << static_cast<int>(d) << std::endl;
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
        std::cout << "double: " << d << std::endl;
    }

    static void handlePseudoLiteral(const std::string& str) {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        if (str.back() == 'f') {
            std::cout << "float: " << str << std::endl;
            std::cout << "double: " << str.substr(0, str.size() - 1) << std::endl;
        } else {
            std::cout << "float: " << str << "f" << std::endl;
            std::cout << "double: " << str << std::endl;
        }
    }
};
