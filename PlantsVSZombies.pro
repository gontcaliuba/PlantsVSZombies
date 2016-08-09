#-------------------------------------------------
#
# Project created by QtCreator 2016-08-09T20:33:55
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PlantsVSZombies
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    data/coord/graphicalposition.cpp \
    data/coord/logicposition.cpp \
    data/coord/physicposition.cpp \
    data/ground/ground.cpp \
    data/ground/stone.cpp \
    data/other/hp.cpp \
    data/actor.cpp \
    data/complexity/complexity.cpp

HEADERS  += mainwindow.h \
    data/coord/graphicalposition.h \
    data/coord/logicposition.h \
    data/coord/physicposition.h \
    data/ground/ground.h \
    data/ground/stone.h \
    data/other/hp.h \
    data/actor.h \
    data/defines.h \
    data/complexity/complexity.h

FORMS    += mainwindow.ui
