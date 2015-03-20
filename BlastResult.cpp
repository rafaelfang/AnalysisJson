/*
 * BlastResult.cpp
 *
 *  Created on: Mar 19, 2015
 *      Author: Chao
 */

#include "BlastResult.h"

BlastResult::BlastResult() {
	// TODO Auto-generated constructor stub

}

BlastResult::~BlastResult() {
	// TODO Auto-generated destructor stub
}

void BlastResult::toString() {

	cout << "Protein--" << name << ":" << endl;
	cout << "\tIt's length is: " << length;
	cout << "\tIt's EValue is: " << EValue << endl;
	cout << "\tIt's query starts from " << QueryStartFrom << " and ends at "
			<< QueryFinishAt << endl;
	cout << "\tIt's Query Part is:\t" << QueryPart << endl;
	cout << "\tThe alignment part is:\t" << Alignment << endl;
	cout << "\tIt's Subject Part is:\t" << SubjectPart << endl;
	cout << "\tIt's Subject starts from " << SubjectStartFrom
			<< " and ends at: " << SubjectFinishAt << endl;



}
const string& BlastResult::getAlignment() const {
	return Alignment;
}

void BlastResult::setAlignment(const string& alignment) {
	Alignment = alignment;
}

double BlastResult::getValue() const {
	return EValue;
}

void BlastResult::setValue(double value) {
	EValue = value;
}

int BlastResult::getLength() const {
	return length;
}

void BlastResult::setLength(int length) {
	this->length = length;
}

const string& BlastResult::getName() const {
	return name;
}

void BlastResult::setName(const string& name) {
	this->name = name;
}

int BlastResult::getQueryFinishAt() const {
	return QueryFinishAt;
}

void BlastResult::setQueryFinishAt(int queryFinishAt) {
	QueryFinishAt = queryFinishAt;
}

const string& BlastResult::getQueryPart() const {
	return QueryPart;
}

void BlastResult::setQueryPart(const string& queryPart) {
	QueryPart = queryPart;
}

int BlastResult::getQueryStartFrom() const {
	return QueryStartFrom;
}

void BlastResult::setQueryStartFrom(int queryStartFrom) {
	QueryStartFrom = queryStartFrom;
}

int BlastResult::getSubjectFinishAt() const {
	return SubjectFinishAt;
}

void BlastResult::setSubjectFinishAt(int subjectFinishAt) {
	SubjectFinishAt = subjectFinishAt;
}

const string& BlastResult::getSubjectPart() const {
	return SubjectPart;
}

void BlastResult::setSubjectPart(const string& subjectPart) {
	SubjectPart = subjectPart;
}

int BlastResult::getSubjectStartFrom() const {
	return SubjectStartFrom;
}

void BlastResult::setSubjectStartFrom(int subjectStartFrom) {
	SubjectStartFrom = subjectStartFrom;
}
