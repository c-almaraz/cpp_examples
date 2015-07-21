

#include <stdio.h>
#include <QString>

void myfunc(const char * filename)
{
	FILE *fp;
	fp=fopen(filename,"ab"); 
	printf("%s\n",filename);
	fclose(fp);	
}

int main()
{

	const QString& newfilename="/home/rvalenzuela/Github/cpp_examples/swp.1010123220700.TF43P3.40.19.2_AIR_v2.QC";

	QByteArray ba = newfilename.toLocal8Bit();
	const char * ccfilename = ba.constData();

 	myfunc(ccfilename);

	return 0;
}




