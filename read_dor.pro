
#TEMPLATE = app
#QT += widgets

CONFIG += qt

TARGET = read_dor

HEADERS += ./Dorade.h
SOURCES += read_dor.cpp \
			Dorade.cpp

# debug mode on/off
#--------------------------------
CONFIG -= debug

# turn on/off g++ messages
#----------------------------------------
CONFIG += silent 

# turn on/off warning messages
#-----------------------------------------------
CONFIG += warn_off