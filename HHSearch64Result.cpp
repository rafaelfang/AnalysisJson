/*
 * HHSearch64.cpp
 *
 *  Created on: Mar 23, 2015
 *      Author: Chao
 */

#include "HHSearch64Result.h"

HHSearch64Result::HHSearch64Result() {
	// TODO Auto-generated constructor stub

}
void HHSearch64Result::analyze(char* filename) {
	Json::Reader reader;
	Json::Value root;

	//read from file
	ifstream is;
	is.open(filename, ios::binary);
	string returnString;
	if (reader.parse(is, root)) {

		//read info from root
		unsigned int i = 0;
		char buffer[50];
		for (i = 1; i < root.size(); i++) {

			sprintf(buffer, "protein%d", i);

			string proteinName = root[buffer]["name"].asString();
			setName(proteinName);

			double EValue = root[buffer]["EValue"].asDouble();
			setValue(EValue);

			string querySSPred = root[buffer]["querySSPred"].asString();
			setQuerySsPred(querySSPred);

			int queryStartFrom = root[buffer]["queryStartFrom"].asInt();
			setQueryStartFrom(queryStartFrom);

			string queryPDB = root[buffer]["queryPDB"].asString();
			setQueryPdb(queryPDB);

			int queryFinishAt = root[buffer]["queryFinishAt"].asInt();
			setQueryFinishAt(queryFinishAt);

			string queryConsensus = root[buffer]["queryConsensus"].asString();
			setQueryConsensus(queryConsensus);

			string Alignment = root[buffer]["alignment"].asString();
			setAlignment(Alignment);


			int targetStartFrom = root[buffer]["targetStartFrom"].asInt();
			setTargetStartFrom(targetStartFrom);

			string targetConsensus = root[buffer]["targetConsensus"].asString();
			setTargetConsensus(targetConsensus);

			int targetFinishAt = root[buffer]["targetFinishAt"].asInt();
			setTargetFinishAt(targetFinishAt);

			string target = root[buffer]["target"].asString();
			setTarget(target);

			string targetSSPred = root[buffer]["targetSSPred"].asString();
			setTargetSSPred(targetSSPred);

			string confidence=root[buffer]["confidence"].asString();
			setConfidence(confidence);

			toString();
		}

	}

	is.close();
}
void HHSearch64Result::toString() {
	cout << "Protein--" << name << ":" << endl;
	cout << "\tIt's EValue is: " << EValue << endl;
	cout << "\tIt's query starts from:" << queryStartFrom << " and ends at "
			<< queryFinishAt << endl;
	cout << "\tIt's target starts from:" << targetStartFrom << " and ends at "
			<< targetFinishAt << endl;
	cout << "\tIt's query SSPred is:\t" << querySSPred << endl;
	cout << "\tIt's Query PDB is:\t" << queryPDB << endl;
	cout << "\tIt's Query Consensus:\t" << queryConsensus << endl;
	cout << "\tIt's alignment is:\t" << alignment << endl;
	cout << "\tThe target Consensus:\t" << targetConsensus << endl;
	cout << "\tIt's target is: \t" << target << endl;
	cout << "\tIt's target SSPred:\t" << targetSSPred << endl;
	cout << "\tIt's confidence is:\t" << confidence << endl;
}
HHSearch64Result::~HHSearch64Result() {
	// TODO Auto-generated destructor stub
}

const string& HHSearch64Result::getAlignment() const {
	return alignment;
}

void HHSearch64Result::setAlignment(const string& alignment) {
	this->alignment = alignment;
}

const string& HHSearch64Result::getConfidence() const {
	return confidence;
}

void HHSearch64Result::setConfidence(const string& confidence) {
	this->confidence = confidence;
}

double HHSearch64Result::getValue() const {
	return EValue;
}

void HHSearch64Result::setValue(double value) {
	EValue = value;
}

const string& HHSearch64Result::getName() const {
	return name;
}

void HHSearch64Result::setName(const string& name) {
	this->name = name;
}

const string& HHSearch64Result::getQueryConsensus() const {
	return queryConsensus;
}

void HHSearch64Result::setQueryConsensus(const string& queryConsensus) {
	this->queryConsensus = queryConsensus;
}

int HHSearch64Result::getQueryFinishAt() const {
	return queryFinishAt;
}

void HHSearch64Result::setQueryFinishAt(int queryFinishAt) {
	this->queryFinishAt = queryFinishAt;
}

const string& HHSearch64Result::getQueryPdb() const {
	return queryPDB;
}

void HHSearch64Result::setQueryPdb(const string& queryPdb) {
	queryPDB = queryPdb;
}

const string& HHSearch64Result::getQuerySsPred() const {
	return querySSPred;
}

void HHSearch64Result::setQuerySsPred(const string& querySsPred) {
	querySSPred = querySsPred;
}

int HHSearch64Result::getQueryStartFrom() const {
	return queryStartFrom;
}

void HHSearch64Result::setQueryStartFrom(int queryStartFrom) {
	this->queryStartFrom = queryStartFrom;
}

const string& HHSearch64Result::getTarget() const {
	return target;
}

void HHSearch64Result::setTarget(const string& target) {
	this->target = target;
}

const string& HHSearch64Result::getTargetConsensus() const {
	return targetConsensus;
}

void HHSearch64Result::setTargetConsensus(const string& targetConsensus) {
	this->targetConsensus = targetConsensus;
}

int HHSearch64Result::getTargetFinishAt() const {
	return targetFinishAt;
}

void HHSearch64Result::setTargetFinishAt(int targetFinishAt) {
	this->targetFinishAt = targetFinishAt;
}

const string& HHSearch64Result::getTargetSSPred() const {
	return targetSSPred;
}

void HHSearch64Result::setTargetSSPred(const string& targetSSPred) {
	this->targetSSPred = targetSSPred;
}

int HHSearch64Result::getTargetStartFrom() const {
	return targetStartFrom;
}

void HHSearch64Result::setTargetStartFrom(int targetStartFrom) {
	this->targetStartFrom = targetStartFrom;
}
