/*
 * CSmart.cpp
 *
 *  Created on: Jul 23, 2018
 *      Author: dm8
 */

#include "CSmart.h"

CSmart::CSmart() {
	// TODO Auto-generated constructor stub

	MapAttribute();


}

CSmart::~CSmart() {
	// TODO Auto-generated destructor stub
}



void CSmart::MapAttribute()
{
	attribute_name_by_id[1] = "Raw_Read_Error_Rate";
	attribute_name_by_id[3] = "Spin_Up_Time";
	attribute_name_by_id[4] = "Start_Stop_Count";
	attribute_name_by_id[5] = "Reallocated_Sector_Ct";
	attribute_name_by_id[7] = "Seek_Error_Rate";
	attribute_name_by_id[9] = "Power_On_Hours";
	attribute_name_by_id[10] = "Spin_Retry_Count";
	attribute_name_by_id[12] = "Power_Cycle_Count";
	attribute_name_by_id[184] = "End-to-End_Error";
	attribute_name_by_id[187] = "Reported_Uncorrect";
	attribute_name_by_id[188] = "Command_Timeout";
	attribute_name_by_id[189] = "High_Fly_Writes";
	attribute_name_by_id[190] = "Airflow_Temperature_Cel";
	attribute_name_by_id[191] = "G-Sense_Error_Rate";
	attribute_name_by_id[192] = "Power-Off_Retract_Count";
	attribute_name_by_id[193] = "Load_Cycle_Count";
	attribute_name_by_id[194] = "Temperature_Celsius";
	attribute_name_by_id[197] = "Current_Pending_Sector";
	attribute_name_by_id[198] = "Offline_Uncorrectable";
	attribute_name_by_id[199] = "UDMA_CRC_Error_Count";
	attribute_name_by_id[240] = "Head_Flying_Hours";
	attribute_name_by_id[241] = "Total_LBAs_Written";
	attribute_name_by_id[242] = "Total_LBAs_Read";
}


int CSmart::GetValue(const int id)
{
//	makecmd(id);
//	runcmd(cmd);
//	attribute_name_by_id(id)
	return id;
}



int CSmart::GetWorst(const int id)
{
	return id;

}


int CSmart::GetThresh(const int id)
{

	return id;
}


int CSmart::GetWhenFailed(const int id)
{
	return id;

}


int CSmart::GetRaw(const int id)
{
	return id;

}


int CSmart::getData(const std::string source, const int id, const CSmartAttribute attr)
{
	std::string command;

	//./smartctl -A /dev/sda | grep -i Reallocated_Sector_Ct | awk '{print $6}'
	command = "smartctl -A " + source + " | grep " + attribute_name_by_id.at(id) + " | awk \'{print $" + std::to_string(attr) + "}\'";

	system(command.c_str());


	fprintf(stderr,"\e[1;45;37m[%s:%d]%s : command, %s \e[0m\n",__FILE__, __LINE__, __FUNCTION__, command.c_str());

	return 1;
}


