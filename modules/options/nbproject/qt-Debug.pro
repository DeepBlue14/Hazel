# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = options
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += ../custom_widgets/src/RosEnv.cpp ../custom_widgets/src/UnixConsoleText.cpp ../custom_widgets/src/WindowsConsoleText.cpp src/OptionContainer.cpp src/OptionTab.cpp src/OptionsGui.cpp src/main.cpp
HEADERS += ../custom_widgets/src/RosEnv.h ../custom_widgets/src/UnixConsoleText.h ../custom_widgets/src/WindowsConsoleText.h src/OptionContainer.h src/OptionTab.h src/OptionsGui.h
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
