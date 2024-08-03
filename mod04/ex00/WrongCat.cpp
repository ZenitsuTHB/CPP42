//42 HEADER



WrongCat::WrongCat() : WrongAnimal() {}

WrongCat::WrongCat(const std::string &type) {}

WrongCat::WrongCat(const WrongCat &oldWrongCat) {}

WrongCat& WrongCat::operator=(const WrongCat &oldWrongCat) {}

std::string WrongCat::getType() const {}

void WrongCat::makeSound() const {}

WrongCat::~WrongCat() {}
