#include "search.h"



int GeRectTimebarInfoAllCh(time_t StartTime, time_t EndTime, RUN RTBRUN, TimeLineContainer& container)
{
//	fprintf(stdout, "%ld", StartTime);
//	fprintf(stdout, "%ld", EndTime);
//	fprintf(stdout, "%ld", RTBRUN);
//	fprintf(stdout, "%ld", container);
	return SUCCESS;
}


static FMAN_PARA s_fpara;

FMAN_PARA* get_fman_para_ptr(void)
{

	return &s_fpara;
}

static harddisk_t* hard_disk_start_entry;

harddisk_t*	get_hdd_entry()
{
	return hard_disk_start_entry;
}

