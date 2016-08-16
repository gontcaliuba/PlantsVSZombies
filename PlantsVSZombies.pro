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
    data/ground/ground.cpp \
    data/ground/stone.cpp \
    data/other/hp.cpp \
    data/actor.cpp \
    data/complexity/complexity.cpp \
    data/complexity/easy.cpp \
    data/complexity/normal.cpp \
    data/complexity/hard.cpp \
    data/ground/sand.cpp \
    data/ground/grass.cpp \
    data/ground/soil.cpp \
    data/plants/plant.cpp \
    data/zombie/zombie.cpp \
    data/aliveactor.cpp \
    data/coord/position.cpp \
    data/plants/cabbage.cpp \
    data/plants/laser.cpp \
    data/plants/boxer.cpp \
    data/plants/thorns.cpp \
    data/plants/sunflower.cpp \
    data/zombie/weakzombie.cpp \
    data/zombie/strongzombie.cpp \
    data/zombie/boss.cpp \
    data/zombie/weakzombiewithbasket.cpp \
    data/plants/emptyplant.cpp

HEADERS  += mainwindow.h \
    data/ground/ground.h \
    data/ground/stone.h \
    data/other/hp.h \
    data/actor.h \
    data/defines.h \
    data/complexity/complexity.h \
    data/complexity/easy.h \
    data/complexity/normal.h \
    data/complexity/hard.h \
    data/ground/sand.h \
    data/ground/grass.h \
    data/ground/soil.h \
    data/plants/plant.h \
    data/zombie/zombie.h \
    data/aliveactor.h \
    data/coord/position.h \
    data/plants/cabbage.h \
    data/plants/laser.h \
    data/plants/boxer.h \
    data/plants/thorns.h \
    data/plants/sunflower.h \
    data/zombie/weakzombie.h \
    data/zombie/strongzombie.h \
    data/zombie/boss.h \
    data/zombie/weakzombiewithbasket.h \
    data/plants/emptyplant.h

FORMS    += mainwindow.ui
