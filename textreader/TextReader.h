/*
 * TextReader.h
 *
 *  Created on: Aug 1, 2018
 *      Author: dm8
 */

#ifndef MID_DBFILEMAN_TEXTREADER_H_
#define MID_DBFILEMAN_TEXTREADER_H_

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>


class TextReader {
public:
	TextReader();
	virtual ~TextReader();

	bool Open(const std::string& full_path);
	bool Print();

private:
	std::ifstream in;

	void parseline(const std::string line);
};

#endif /* MID_DBFILEMAN_TEXTREADER_H_ */
