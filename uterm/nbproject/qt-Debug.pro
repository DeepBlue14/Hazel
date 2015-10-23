# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = UTerm
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets xml
SOURCES += src/Environment.cpp src/FormatText.cpp src/LoadParallels.cpp src/MasterGui.cpp src/OsCmdSwap.cpp src/UFile.cpp src/UProcess.cpp src/UTextEdit.cpp src/UnixExecution.cpp src/WindowsExecution.cpp src/main.cpp
HEADERS += src/Environment.h src/FormatText.h src/LoadParallels.h src/MasterGui.h src/OsCmdSwap.h src/UFile.h src/UProcess.h src/UTextEdit.h src/UnixExecution.h src/WindowsExecution.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = ./src/moc
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
