#include <stdio.h>
#include <assert.h>
#include <iostream>
#include <fstream>
#include "BlastResult.h"
#include "json/json.h"

using namespace std;

int main(int argc, char* argv[]) {

	Json::Reader reader;
	Json::Value root;

	//read from file
	ifstream is;
	is.open(argv[1], ios::binary);
	string returnString;
	if (reader.parse(is, root)) {

		//read info from root
		unsigned int i = 0;
		char buffer[50];
		for (i = 1; i < root.size(); i++) {

			sprintf(buffer, "protein%d", i);
			BlastResult blastResult;
			string proteinName = root[buffer]["name"].asString();
			blastResult.setName(proteinName);
			int length = root[buffer]["length"].asInt();
			blastResult.setLength(length);
			double EValue = root[buffer]["EValue"].asDouble();
			blastResult.setValue(EValue);
			int QueryStartFrom=root[buffer]["QueryStartFrom"].asInt();
			blastResult.setQueryStartFrom(QueryStartFrom);
			string QueryPart = root[buffer]["QueryPart"].asString();
			blastResult.setQueryPart(QueryPart);
			int QueryFinishAt=root[buffer]["QueryFinishAt"].asInt();
			blastResult.setQueryFinishAt(QueryFinishAt);
			string Alignment = root[buffer]["Alignment"].asString();
			blastResult.setAlignment(Alignment);
			int SubjectStartFrom=root[buffer]["SubjectStartFrom"].asInt();
			blastResult.setSubjectStartFrom(SubjectStartFrom);
			string SubjectPart = root[buffer]["SubjectPart"].asString();
			blastResult.setSubjectPart(SubjectPart);
			int SubjectFinishAt=root[buffer]["SubjectFinishAt"].asInt();
			blastResult.setSubjectFinishAt(SubjectFinishAt);



			blastResult.toString();
		}


	}

	is.close();

}

