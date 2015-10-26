#include "stdafx.h"
#include <iostream>

#include "DemoException.h"
#include "DemoHash.h"
#include "DemoSocket.h"
#include "DemoThreads.h"
#include "DemoFiles.h"
#include "DemoDateTime.h"
#include "pthread.h"

std::string hashtobreak;
std::string algo;
std::string Alphabet;
int chunksize;

/**
void demos( int argc, char *argv[] ) {
	//
	// Display parameters received from command line
	std::cout << std::endl;
	std::cout << "** Parameters dump:" << std::endl;
	for (int i = 0; i < argc; i++) {
		std::cout << "argv[" << i << "] = \"" << argv[ i ] << "\"" << std::endl;
	}

	//
	// Test libraries
	std::cout << std::endl;
	//TestThreads();
	TestException();
	//TestHashes();
	//TestSocket();
	//TestFiles();
	//TestDateTime();
	//TestUtil();

	return;
}**/

/**
int main( int argc, char *argv[] ) {
	std::cout << "** Welcome to this demo skeleton." << std::endl;

	demos( argc, argv );

	std::cout << "** Goodbye" << std::endl;
	system( "pause" );
	return 0;
}**/

void main(int argc, char *argv[])
{
	bool isMaster = false;
	if (argc < 3)
	{
		isMaster = true;
	}
	
	for (int i = 0; i < argc; i++)
	{
		if(argv[i]="-hash")
		{
			hashtobreak = argv[i + 1];
		}
		if (argv[i] = "-algo")
		{
			algo = argv[i + 1];
		}
		if (argv[i] = "-alphabet")
		{
			Alphabet = argv[i + 1];
		}
		if (argv[i] = "-chunksize")
		{
			chunksize = int(argv[i + 1]);
		}
		if (isMaster) 
		{
			hashtobreak = *argv[3];
			algo = *argv[5];
			Alphabet = *argv[7];
			chunksize = *argv[9];
		}
		
	}
}
