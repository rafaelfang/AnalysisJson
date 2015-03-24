#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include "BlastResult.h"
#include "HHSearch64Result.h"
#include "Result.h"

#include "json/json.h"

using namespace std;

int main(int argc, char* argv[]) {

	BlastResult blastResult;
	HHSearch64Result hhsearch64Result;
	Result* result1=&blastResult;
	Result* result2=&hhsearch64Result;

	result1->analyze(argv[1]);
	result2->analyze(argv[2]);



}

