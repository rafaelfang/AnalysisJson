/*
 * Result.h
 *
 *  Created on: Mar 23, 2015
 *      Author: Chao
 */
#include <iostream>
#ifndef RESULT_H_
#define RESULT_H_

using namespace std;
class Result {
public:
	Result();
	virtual void analyze(char*) = 0;
	virtual void toString();
	virtual ~Result();
};

#endif /* RESULT_H_ */
