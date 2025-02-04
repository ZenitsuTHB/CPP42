#include <iostream>
#include "Vertex.class.tpp"

int main ()
{
	Vertex< int > v1( 12,23,32 );
	Vertex< float > v2( 12,23,32 );

	std::cout << v1 << std::endl;
	std::cout << v2 << std::endl;

	return 0;
}
