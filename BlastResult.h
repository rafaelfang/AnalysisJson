/*
 * BlastResult.h
 *
 *  Created on: Mar 19, 2015
 *      Author: Chao
 */
#include <iostream>
#include <fstream>
#include <string>
#include "json/json.h"

using namespace std;
#ifndef BLASTRESULT_H_
#define BLASTRESULT_H_
#include "Result.h"
class BlastResult: public Result {
public:
	BlastResult();
	void analyze(char*);
	void toString();
	virtual ~BlastResult();
	const string& getAlignment() const;
	void setAlignment(const string& alignment);
	double getValue() const;
	void setValue(double value);
	int getLength() const;
	void setLength(int length);
	const string& getName() const;
	void setName(const string& name);
	int getQueryFinishAt() const;
	void setQueryFinishAt(int queryFinishAt);
	const string& getQueryPart() const;
	void setQueryPart(const string& queryPart);
	int getQueryStartFrom() const;
	void setQueryStartFrom(int queryStartFrom);
	int getSubjectFinishAt() const;
	void setSubjectFinishAt(int subjectFinishAt);
	const string& getSubjectPart() const;
	void setSubjectPart(const string& subjectPart);
	int getSubjectStartFrom() const;
	void setSubjectStartFrom(int subjectStartFrom);

private:
	string name;
	int length;
	double EValue;
	int QueryStartFrom;
	string QueryPart;
	int QueryFinishAt;
	string Alignment;
	int SubjectStartFrom;
	string SubjectPart;
	int SubjectFinishAt;

};

#endif /* BLASTRESULT_H_ */
