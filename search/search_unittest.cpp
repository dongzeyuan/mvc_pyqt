#include "gtest/gtest.h"

#include <cstring>

#include "search.h"


#include "FileList.h"
#include "CReadSlot.h"

#include "enum_config.h"
//#include "gui_doc.h"

namespace {

TEST(SearchTest, basic) {

	/// Set value
	time_t StartTime = 1521730800;	// Thu Mar 22 15:00:00 2018
	time_t EndTime = 1521817199;	// Fri Mar 23 14:59:59 2018
	RUN RTBRUN;
	RTBRUN.SerialNumber= 0;
	RTBRUN.MAC[0] = 13;
	RTBRUN.MAC[1] = 17;
	RTBRUN.MAC[2] = '0';
	RTBRUN.MAC[3] = '0';
	RTBRUN.MAC[4] = 'c';
	RTBRUN.MAC[5] = '0';
	RTBRUN.MAC[6] = '0';
	RTBRUN.MAC[7] = '0';


	char rec_typeAsIs[(4*60*60*25)/8];//normal, schedule, alarm, motion, vloss, etc //per map_unit
	char rec_typeToBe[(4*60*60*25)/8];//normal, schedule, alarm, motion, vloss, etc //per map_unit

//	/// Get AsIs
//	TimeLineContainer retAsIs;;
//	for(int CHID=0; CHID<NUM_CHANNELS; CHID++)
//	{
//		EXPECT_EQ(GetRecTimeBarInfo(CHID, StartTime, EndTime, RTBRUN, retAsIs), SUCCESS);
//	}

	CReadSlot CRSlot;

	/// Get ToBe
	int SearchHour = 24;
	TimeLineContainerBuf container(StartTime, rec_typeToBe, (4*60*60*SearchHour)/8);
	EXPECT_EQ(GeRectTimebarInfoAllCh(StartTime, EndTime, RTBRUN, container), SUCCESS);


	// Diff
	EXPECT_TRUE( 0 == std::memcmp( rec_typeAsIs, rec_typeToBe, sizeof( rec_typeToBe ) ) );

}

}  // namespace
