/*
 * CSmart.h
 *
 *  Created on: Jul 23, 2018
 *      Author: dm8
 */

#ifndef SMARTCTL_CSMART_H_
#define SMARTCTL_CSMART_H_


#include <string>
#include <map>



//ID# ATTRIBUTE_NAME          FLAG     VALUE WORST THRESH TYPE      UPDATED  WHEN_FAILED RAW_VALUE
//1   2                       3        4     5     6      7         8        9           10
typedef enum  {ID = 1,
	ATTRIBUTE_NAME,
	FLAG,
	VALUE,
	WORST,
	THRESH,
	TYPE,
	UPDATED,
	WHEN_FAILED,
	RAW_VALUE
}CSmartAttribute;


class CSmart {
public:
	CSmart();
	virtual ~CSmart();

	int GetValue(const int id);
	int GetWorst(const int id);
	int GetThresh(const int id);
	int GetWhenFailed(const int id);
	int GetRaw(const int id);


	int getData(const std::string source, const int id, const CSmartAttribute attr);

private:
	std::map<int, std::string> attribute_name_by_id;

	void MapAttribute();

};

#endif /* SMARTCTL_CSMART_H_ */
