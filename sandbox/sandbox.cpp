#include "stdafx.h"
#include <iostream>
#include <pthread.h>


std::string hashtobreak;
std::string algo;
std::string alphabet;
int chunksize;

/**
void sandbox() {
	// Add here all your tests
	return;
}**/


void main(int argc, char *argv[])	
{

	bool isMaster = false;
	if (argc < 3)
	{
		isMaster = true;
		//std::cout << "ca marche bien";
	}

	for (int i = 0; i < argc; i++)
	{
		std::string argument;
		argument = std::string(argv[i]);
		std::cout << i;
		if (argv[i] == "-hash")
		{
			hashtobreak = argv[i + 1];
		}
		if (argv[i] == "-algo")
		{
			algo = argv[i + 1];
		}
		if (argv[i] == "-alphabet")
		{
			alphabet = argv[i + 1];
		}
		if (argv[i] == "-chunksize")
		{
			chunksize = int(argv[i + 1]);
		}
		if (isMaster)
		{
			/*hashtobreak = *argv[3];
			algo = *argv[5];
			Alphabet = *argv[7];
			chunksize = *argv[9];*/
		}

	}
}
