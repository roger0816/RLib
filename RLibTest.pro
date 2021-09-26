#-------------------------------------------------
#
# Project created by QtCreator 2017-03-07T16:43:36
#
#-------------------------------------------------

QT       += core gui
QT       += network sql testlib


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RLibTest
TEMPLATE = app


OBJECTS_DIR = $$PWD/obj
MOC_DIR = $$PWD/obj
UI_DIR = $$PWD/obj/ui_header

#include(RLib/include/RLib.pri)

DESTDIR = $$PWD/


SOURCES += main.cpp\
        TestDataBase.cpp \
        widget.cpp

HEADERS  += widget.h \
    TestDataBase.h

FORMS    += widget.ui \
    TestDataBase.ui

win32: LIBS += -L$$PWD/RLib/ -lRLibQt5Win

INCLUDEPATH += $$PWD/RLib/include
DEPENDPATH += $$PWD/RLib/include

win32:!win32-g++: PRE_TARGETDEPS += $$PWD/RLib/RLibQt5Win.lib
else:win32-g++: PRE_TARGETDEPS += $$PWD/RLib/libRLibQt5Win.a



unix:!macx: LIBS += -L$$PWD/RLib/ -lRLibQt5Linux

INCLUDEPATH += $$PWD/RLib/include
DEPENDPATH += $$PWD/RLib/include

unix:!macx: PRE_TARGETDEPS += $$PWD/RLib/libRLibQt5Linux.a

macx: LIBS += -L$$PWD/RLib/ -lRLibQt5Osx

INCLUDEPATH += $$PWD/RLib/include
DEPENDPATH += $$PWD/RLib/include

macx: PRE_TARGETDEPS += $$PWD/RLib/libRLibQt5Osx.a
