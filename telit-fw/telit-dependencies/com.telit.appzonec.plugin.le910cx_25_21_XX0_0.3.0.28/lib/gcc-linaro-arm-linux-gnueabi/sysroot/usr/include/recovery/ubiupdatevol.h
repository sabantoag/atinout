#ifndef UBIUPDATEVOL_H_
#define UBIUPDATEVOL_H_

int ubi_updateVolume(char * node,char * filePath);
int ubi_readVolume(char * file, char * data, int size, int offset);


#endif
