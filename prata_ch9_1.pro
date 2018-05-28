QT += core
QT -= gui

CONFIG += c++11

TARGET = prata_ch9_1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    golf.cpp

HEADERS += \
    golf.h
