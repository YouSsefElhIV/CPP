#include "iter.hpp"

int main()
{
  int int_tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  float float_tab[10] = {1.2, 2.1, 3.5, 4.0, 5.8, 6.5, 7.3, 8.3, 9.3, 10.3};
  char char_tab[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'g'};

	std::cout << "\nTests For Int\n";
	::iter(int_tab, 10, AddOne<int>);
	for (int i = 0; i < 10; i++)
		std::cout << int_tab[i] << " ";

	std::cout << "\n";

	::iter(int_tab, 10, MultipleByTwo<int>);

	for (int i = 0; i < 10; i++)
		std::cout << int_tab[i] << " ";
	std::cout << "\n";

	::iter(int_tab, 10, RemoveOne<int>);

	for (int i = 0; i < 10; i++)
		std::cout << int_tab[i] << " ";
	
	std::cout << "\n";

	std::cout << "\nTests For float\n";
	::iter(float_tab, 10, AddOne<float>);
	for (int i = 0; i < 10; i++)
		std::cout << float_tab[i] << " ";

	std::cout << "\n";

	::iter(float_tab, 10, MultipleByTwo<float>);

	for (int i = 0; i < 10; i++)
		std::cout << float_tab[i] << " ";
	std::cout << "\n";

	::iter(float_tab, 10, RemoveOne<float>);

	for (int i = 0; i < 10; i++)
		std::cout << float_tab[i] << " ";
	
	std::cout << "\n";

	std::cout << "\nTests For char\n";
	::iter(char_tab, 10, AddOne<char>);
	for (int i = 0; i < 10; i++)
		std::cout << char_tab[i] << " ";

	std::cout << "\n";

	::iter(char_tab, 10, RemoveOne<char>);

	for (int i = 0; i < 10; i++)
		std::cout << char_tab[i] << " ";

	std::cout << "\n";
	
	::iter(char_tab, 10, ToUpper<char>);

	for (int i = 0; i < 10; i++)
		std::cout << char_tab[i] << " ";
	
	std::cout << "\n";

	::iter(char_tab, 10, ToLower<char>);

	for (int i = 0; i < 10; i++)
		std::cout << char_tab[i] << " ";
	
	std::cout << "\n";

}