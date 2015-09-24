

#include "geotiff.h"
#include "geo_normalize.h"
#include "tiffio.h"

#include "xtiffio.h"
#include "geo_simpletags.h"
#include "geovalues.h"
#include "cpl_serv.h"
#include <stdio.h>
#include <string.h>
#include <GeographicLib/TransverseMercator.hpp>

// #include <QString> //(RV)

using namespace GeographicLib;


int main (int argc, char *argv[]) {

	char * fname;
	TIFF 	*tif=(TIFF*)0;  /* TIFF-level descriptor */
	GTIF	*gtif=(GTIF*)0; /* GeoKey-level descriptor */

	// fname = "/home/rvalenzuela/Github/RadarQC/merged_dem_38-39_123-124_extended.tif";
	fname = "/home/dkingsmill/Aircraft_NavCor_QC/geotiff_merge-master/merged_dem_127to121W_35to41N.tif";
	tif=XTIFFOpen(fname,"r");
	gtif = GTIFNew(tif);
	GTIFFree(gtif);
	XTIFFClose(tif);


	return 0;

}
