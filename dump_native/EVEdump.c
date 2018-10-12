/**
 *      Project Name : NeoFM
 *
 *      Copyright 2008 by Samsung Electronics Co., Ltd
 *
 *      Project Description :
 *      This software is the confidential and proprietary information
 *      of Samsung Electronics Co., Ltd. ("Confidential Information").
 *      You shall not disclose such Confidential Information and shall
 *      use it only in accordance with the terms of the license agreement
 *      you entered into with Samsung.
 */

/**
 *      File name       : EVEdump.c
 *
 *      File Description: 
 *
 *      Author          : Kim, KyungHo(kh1117.kim@samsung.com)
 *      Dept            : VSS R&D Samsung Electronics
 *      Created Date    : 2008 Jan
 *      Version         : 0.0.1
 *
 *
 *	Revision history ******************************************
 *
 *      Author          : 
 *      Dept            : 
 *      Revision Date   : 
 *      Version         : 
 *
 */


#include <stdio.h>
#include <sys/types.h>

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "EVEdump.h"

int main(int argc, char **argv)
{
	char filename[256];
	int i;

	for (i=1;i<argc;i++)
	{
		if (strstr(argv[i], ".eve")!=NULL)
		{
			strcpy(filename, argv[i]);
		}
		else
		{
			fprintf(stderr, "Bad options %s!.....\n", argv[i]);
			fprintf(stderr, "(example) ./EVEdump /mnt/hda3/080214050457_000.eve\n");
			return 0 ;
		}
	}
	
	if (access(filename, F_OK)!=0)
	{
		fprintf(stderr, "Can not find the target file....\n");
		return 0;
	}

	fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello, off_t %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(off_t));
	fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello, long int %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(long int));
	fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello, unsigned long int %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(unsigned long int));

	dump_event(filename);

	return 0;
}



