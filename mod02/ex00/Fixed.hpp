//42 HEADER


#include <iostream>

class Fixed {
public:
  Fixed();
  Fixed(Fixed &&) = default;
  Fixed(const Fixed &) = default;
  Fixed &operator=(Fixed &&) = default;
  Fixed &operator=(const Fixed &) = default;
  ~Fixed();

private:
  
};

Fixed::Fixed() {
}

Fixed::~Fixed() {
}
