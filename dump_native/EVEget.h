#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct run
{
	unsigned char MAC[8];	//Real MAC 6 byte.
	unsigned int SerialNumber;
} RUN;

#define MAX_FILENAME_LENGTH	(32)

typedef enum {
	CUR_REC_NONE = 0,
	CUR_REC_NORMAL,
	CUR_REC_TIMER,
	CUR_REC_ALARM,
	CUR_REC_MOTION,
	CUR_REC_TAMPERING,
	CUR_REC_VIDEOLOSS,
	CUR_REC_MAX,
} CURRENT_REC_MODE;

#define MAX_REC_TYPE CUR_REC_MAX
typedef enum
{	
	FILE_STATUS_WRITING,
	FILE_STATUS_FULL,
	FILE_STATUS_REMAINED,

} FILESTATUS;

typedef struct __FileList
{
	RUN	FileRUN;
	char cstrHDDName[MAX_FILENAME_LENGTH];
	char cstrFileName[MAX_FILENAME_LENGTH];
	FILESTATUS	State;
	time_t RecStartTime;
	time_t RecEndTime;
	int	RecCHMask;
	off_t	LastOffset;
	off_t	MaxFileSize;
}FILELIST;	//108byte


#define EVENT_START_OFFSET		(200)	//byte

typedef struct _eve_buf
{
	int RecTypeCHMask[MAX_REC_TYPE];
	time_t	EventTime;
} EVE_BUF;





void printHeader(FILELIST* fileheader);
