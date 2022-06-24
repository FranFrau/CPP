#include "../inc/Span.hpp"

int main()
{
	Span sp = Span(6);
	sp.addNumber(4);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(99);
	sp.addNumber(100);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}