TEMPLATE = app
QT += widgets
CONFIG += qt
SOURCES += read_dem.cpp
TARGET = read_dem

# debug mode on/off
#--------------------------------
CONFIG -= debug

# turn on/off g++ messages
#----------------------------------------
CONFIG += silent 

# turn on/off warning messages
#-----------------------------------------------
CONFIG += warn_off

INCLUDEPATH += 	/usr/include/geotiff \
						/usr/local/include/GeographicLib\

LIBS += -lgeotiff -ltiff -lgeographic # for noaa
