#include "EVEget.h"

int dump_event(char * filename)
{
	int fd;
	FILELIST	fileheader;
	EVE_BUF	event;
	size_t size;

	//open file
	fd = open(filename, O_RDONLY);
	if(fd < 0 )
	{
		perror("EVE File Open");
		return -1;
	}

	//dump File Header information
	lseek(fd, 0, SEEK_SET);
	size = read(fd, &fileheader, sizeof(FILELIST));
	if(size != sizeof(FILELIST))
	{
		perror("EVE File Read");
		close(fd);
		return -1;
	}

	printHeader(&fileheader);


	fprintf(stderr, "------------------------------------------------------------------------------------------\n");
	fprintf(stderr, "NORMAL TIMER  ALARM  MOTION TAMPER V.LOSS       UNIX time    Calendar time \n");
	fprintf(stderr, "------------------------------------------------------------------------------------------\n");

	lseek(fd, EVENT_START_OFFSET, SEEK_SET);
	while(1)
	{
		size = read(fd, &event, sizeof(EVE_BUF));
		if(size != sizeof(EVE_BUF))
		{
			perror("EVE File Read");
			close(fd);
			return -1;
		}

//		fprintf(stderr, "%#06x %#06x %#06x %#06x %#06x %#06x	%ld %s", //this prints 000000 for 0x0000
		fprintf(stderr, "0x%04x 0x%04x 0x%04x 0x%04x 0x%04x 0x%04x	%ld   %s",
				event.RecTypeCHMask[1],	event.RecTypeCHMask[2],	event.RecTypeCHMask[3],
				event.RecTypeCHMask[4],	event.RecTypeCHMask[5],	event.RecTypeCHMask[6],
				event.EventTime, ctime(&(event.EventTime)));
	}

}

void printHeader(FILELIST* fileheader){
	int i = 0;
	fprintf(stderr, "\n-----------------------------------------------------------\n");
	fprintf(stderr, "MAC : ");
	for(i=0; i<8; i++)
	{
		fprintf(stderr, "%02X ",fileheader->FileRUN.MAC[i]);
	}
	fprintf(stderr, "\n");
	fprintf(stderr, "RUN : %u\n", fileheader->FileRUN.SerialNumber);
	fprintf(stderr, "HDDNAME : %s\n", fileheader->cstrHDDName);
	fprintf(stderr, "FILENAME : %s\n", fileheader->cstrFileName);
	fprintf(stderr, "State : %d\n", fileheader->State);
	fprintf(stderr, "RecStartTime : %ld %s",fileheader->RecStartTime, ctime(&(fileheader->RecStartTime)));
	fprintf(stderr, "RecEndTime : %ld %s", fileheader->RecEndTime, ctime(&(fileheader->RecEndTime)));
	fprintf(stderr, "RecCHMask : 0x%04x\n", fileheader->RecCHMask);
	fprintf(stderr, "FileOffset : %lld\n", fileheader->LastOffset);
	fprintf(stderr, "MaxFileSize : %lld\n", fileheader->MaxFileSize);

}
