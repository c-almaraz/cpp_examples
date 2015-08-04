

#include <stdio.h>
#include <QString>

void myfunc(const char * filename)
{
	FILE *fp;
	fp=fopen(filename,"ab"); 
	printf("%s\n",filename);
	fclose(fp);	
}

int main(int argc, char *argv[])
{
	const QString& newfilename=argv[1];

	QByteArray ba = newfilename.toLocal8Bit();
	const char * ccfilename = ba.constData();

 	myfunc(ccfilename);

	return 0;
}




