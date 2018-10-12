
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(RUN), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(RUN));
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(MAX_FILENAME_LENGTH), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, MAX_FILENAME_LENGTH);
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(FILESTATUS), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(FILESTATUS));
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(time_t), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(time_t));
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(int), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(int));
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(off_t), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(off_t));
fprintf(stderr,"\e[1;45;37m[%s:%d]%s : hello sizeof(filelist), %d \e[0m\n",__FILE__, __LINE__, __FUNCTION__, sizeof(FILELIST));




	fprintf(stderr,"FileOffset : %d \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %d \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %d \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %d \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %d \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %d \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %d \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %ld \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %ld \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %ld \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %ld \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %ld \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %ld \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %ld \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %lld \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lld \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lld \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lld \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lld \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lld \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lld \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %lu \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lu \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lu \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lu \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lu \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lu \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %lu \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %llu \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %llu \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %llu \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %llu \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %llu \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %llu \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %llu \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %jd \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %jd \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %jd \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %jd \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %jd \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %jd \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %jd \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %zu \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zu \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zu \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zu \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zu \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zu \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zu \n", (unsigned long long)fileheader.LastOffset);

	fprintf(stderr,"FileOffset : %zd \n", fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zd \n", (int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zd \n", (unsigned int)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zd \n", (long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zd \n", (unsigned long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zd \n", (long long)fileheader.LastOffset);
	fprintf(stderr,"FileOffset : %zd \n", (unsigned long long)fileheader.LastOffset);

