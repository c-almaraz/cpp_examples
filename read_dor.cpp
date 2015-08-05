
#include <stdio.h>
#include <QString>
#include <Dorade.h>

void myfunc1(const char * filename)
{
	FILE *fp;
	fp=fopen(filename,"ab"); 
	printf("%s\n",filename);
	fclose(fp);	
}

bool myfunc2(const QString& filename)
{
	Dorade swpfile;
	
	swpfile.setFilename(filename);

	if(swpfile.readSwpfile())
		return true;	
	
}

int main(int argc, char *argv[])
{
	const QString& newfilename=argv[1];

	QByteArray ba = newfilename.toLocal8Bit();
	const char * ccfilename = ba.constData();

 	// myfunc1(ccfilename);

 	myfunc2(newfilename);
 	printf("\nsweep read successfully\n");
	return 0;
}
