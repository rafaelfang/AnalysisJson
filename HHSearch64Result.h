/*
 * HHSearch64.h
 *
 *  Created on: Mar 23, 2015
 *      Author: Chao
 */
#include <iostream>
#include <fstream>
#include <string>
#include "json/json.h"

using namespace std;
#ifndef HHSearch64Result_H_
#define HHSearch64Result_H_

#include "Result.h"

class HHSearch64Result: public Result {
public:
	HHSearch64Result();
	void analyze(char*);
	void toString();
	virtual ~HHSearch64Result();
	const string& getAlignment() const;
	void setAlignment(const string& alignment);
	const string& getConfidence() const;
	void setConfidence(const string& confidence);
	double getValue() const;
	void setValue(double value);
	const string& getName() const;
	void setName(const string& name);
	const string& getQueryConsensus() const;
	void setQueryConsensus(const string& queryConsensus);
	int getQueryFinishAt() const;
	void setQueryFinishAt(int queryFinishAt);
	const string& getQueryPdb() const;
	void setQueryPdb(const string& queryPdb);
	const string& getQuerySsPred() const;
	void setQuerySsPred(const string& querySsPred);
	int getQueryStartFrom() const;
	void setQueryStartFrom(int queryStartFrom);
	const string& getTarget() const;
	void setTarget(const string& target);
	const string& getTargetConsensus() const;
	void setTargetConsensus(const string& targetConsensus);
	int getTargetFinishAt() const;
	void setTargetFinishAt(int targetFinishAt);
	const string& getTargetSSPred() const;
	void setTargetSSPred(const string& targetSSpred);
	int getTargetStartFrom() const;
	void setTargetStartFrom(int targetStartFrom);

private:
	string name;
	double EValue;
	string querySSPred;
	int queryStartFrom;
	string queryPDB;
	int queryFinishAt;
	string queryConsensus;
	string alignment;
	int targetStartFrom;
	string targetConsensus;
	int targetFinishAt;
	string target;
	string targetSSPred;
	string confidence;
};

#endif /* HHSEARCH64_H_ */
