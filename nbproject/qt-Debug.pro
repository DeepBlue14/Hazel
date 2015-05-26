# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux-x86
TARGET = ride
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets xml
SOURCES += file_templates/Class_Source_Template.cpp src/Build.cpp src/CentralGui.cpp src/Directory.cpp src/EnvCmds.cpp src/FileGui.cpp src/FileTreeGui.cpp src/Highlighter.cpp src/LineNumberArea.cpp src/MasterActions.cpp src/MasterGui.cpp src/MasterMenus.cpp src/MasterStatusBar.cpp src/MasterToolBars.cpp src/NavigatorGui.cpp src/NewFileGui.cpp src/NewFilePage_1.cpp src/NewFilePage_2.cpp src/NewFilePage_3.cpp src/NewFilePage_4.cpp src/NewProjectGui.cpp src/NewProjectPage_1.cpp src/NewProjectPage_2.cpp src/NewProjectPage_3.cpp src/NewProjectPage_4.cpp src/OpenProjectGui.cpp src/OpeningGui.cpp src/OutputGui.cpp src/ParseFontConfigXml.cpp src/PhysicalAttribLog.cpp src/RideFile.cpp src/RideFont.cpp src/Run.cpp src/RunGui.cpp src/RunPage_1.cpp src/RunPage_2.cpp src/RunPage_3.cpp src/SaveAll.cpp src/ScoutGui.cpp src/SplashScreen.cpp src/TabGui.cpp src/Terminal.cpp src/main.cpp
HEADERS += file_templates/Class_Header_Template.h src/Build.h src/CentralGui.h src/Directory.h src/EnvCmds.h src/FileGui.h src/FileTreeGui.h src/Highlighter.h src/LineNumberArea.h src/MasterActions.h src/MasterGui.h src/MasterMenus.h src/MasterStatusBar.h src/MasterToolBars.h src/NavigatorGui.h src/NewFileGui.h src/NewFilePage_1.h src/NewFilePage_2.h src/NewFilePage_3.h src/NewFilePage_4.h src/NewProjectGui.h src/NewProjectPage_1.h src/NewProjectPage_2.h src/NewProjectPage_3.h src/NewProjectPage_4.h src/OpenProjectGui.h src/OpeningGui.h src/OutputGui.h src/ParseFontConfigXml.h src/PhysicalAttribLog.h src/RideFile.h src/RideFont.h src/Run.h src/RunGui.h src/RunPage_1.h src/RunPage_2.h src/RunPage_3.h src/SaveAll.h src/ScoutGui.h src/SplashScreen.h src/TabGui.h src/Terminal.h
FORMS +=
RESOURCES += resources/scout/scout.qrc
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
