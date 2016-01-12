# This file is generated automatically. Do not edit.
# Use project properties -> Build -> Qt -> Expert -> Custom Definitions.
TEMPLATE = app
DESTDIR = dist/Debug/GNU-Linux
TARGET = text_editor
VERSION = 1.0.0
CONFIG -= debug_and_release app_bundle lib_bundle
CONFIG += debug 
PKGCONFIG +=
QT = core gui widgets
SOURCES += src/CodeFoldingArea.cpp src/FileGui.cpp src/GitStatusArea.cpp src/Highlighter.cpp src/LineNumberArea.cpp src/MirrorChar.cpp src/RosEnv.cpp src/TextArea.cpp src/UnixConsoleText.cpp src/WindowsConsoleText.cpp src/main.cpp
HEADERS += src/CodeFoldingArea.h src/FileGui.h src/GitStatusArea.h src/Highlighter.h src/LineNumberArea.h src/MirrorChar.h src/RosEnv.h src/TextArea.h src/UnixConsoleText.h src/WindowsConsoleText.h
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
