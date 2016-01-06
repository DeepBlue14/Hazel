# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = file_tree
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += src/DirPropGui.cpp src/FTDirMenu.cpp src/FTFileMenu.cpp src/FTProjectMenu.cpp src/FTPropertiesGui.cpp src/FilePropGui.cpp src/FileTreeGui.cpp src/RosEnv.cpp src/TreeItemIconFactory.cpp src/UnixConsoleText.cpp src/WindowsConsoleText.cpp src/main.cpp
HEADERS += src/DirPropGui.h src/FTDirMenu.h src/FTFileMenu.h src/FTProjectMenu.h src/FTPropertiesGui.h src/FilePropGui.h src/FileTreeGui.h src/RosEnv.h src/TreeItemIconFactory.h src/UnixConsoleText.h src/WindowsConsoleText.h
FORMS +=
RESOURCES +=
TRANSLATIONS +=
OBJECTS_DIR = build/Debug/GNU-Linux
MOC_DIR = src/moc
RCC_DIR = 
UI_DIR = 
QMAKE_CC = gcc
QMAKE_CXX = g++
DEFINES += 
INCLUDEPATH += 
LIBS += 
