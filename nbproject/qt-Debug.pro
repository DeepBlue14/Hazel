# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = Hazel
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += src/Build.cpp src/CentralGui.cpp src/CentralTabs.cpp src/FileGui.cpp src/FileTreeGui.cpp src/GenRosPkg.cpp src/Highlighter.cpp src/LineNumberArea.cpp src/MasterActions.cpp src/MasterGui.cpp src/MasterMenus.cpp src/MasterToolBars.cpp src/NewFileGui.cpp src/NewProjectGui.cpp src/NewProjectPage_1.cpp src/NewProjectPage_2.cpp src/NewProjectPage_3.cpp src/OpeningGui.cpp src/OutputGui.cpp src/ScoutGui.cpp src/Terminal.cpp src/main.cpp
HEADERS += src/Build.h src/CentralGui.h src/CentralTabs.h src/FileGui.h src/FileTreeGui.h src/GenRosPkg.h src/Highlighter.h src/LineNumberArea.h src/MasterActions.h src/MasterGui.h src/MasterMenus.h src/MasterToolBars.h src/NewFileGui.h src/NewProjectGui.h src/NewProjectPage_1.h src/NewProjectPage_2.h src/NewProjectPage_3.h src/OpeningGui.h src/OutputGui.h src/ScoutGui.h src/Terminal.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux-x86
MOC_DIR = src/moc
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += -lX11  
