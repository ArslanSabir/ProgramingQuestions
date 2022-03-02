#include <iostream>
#include <fstream>
#include <sstream> //sstream auto-includes string.h, so no need to include that too
#include <conio.h> //conio.h for "_kbhit()"

int main()
{
	std::string input;
	int intFromFile = 0;

	std::ifstream file;
	file.open( "test.txt", std::ios::binary );

	if( file.is_open() )
	{
		std::cout << "File open.\n";
		std::getline( file, input, '\n' );	//get the text line
		std::getline( file, input );	//get the integer

		std::stringstream ss( input ); //create a stringstream with the input variable

		if( ss >> intFromFile ) //if the 'input' goes into the int...
			std::cout << "Integer from file was " << intFromFile << '\n';

		file.close();
	}
	else
		std::cout << "Error opening file.\n";

	std::cout << "Please press a key to exit.\n";

	while( ! _kbhit() ) //while there's no key press
	{
		//do nothing until a key is hit
	}

	return 0;
}
