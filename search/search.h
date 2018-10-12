#ifndef SEARCH_H_
#define SEARCH_H_

#include <time.h>
#include <stdio.h>

#include "NeoFMTypes.h"
#include "TimeLineContainer.h"

#include "file_manager.h"

int GeRectTimebarInfoAllCh(time_t StartTime, time_t EndTime, RUN RTBRUN, TimeLineContainer& container);


FMAN_PARA* get_fman_para_ptr(void);

harddisk_t*	get_hdd_entry();



#endif  // SEARCH_H_
