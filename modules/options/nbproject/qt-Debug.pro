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
SOURCES += ../custom_widgets/src/RosEnv.cpp ../custom_widgets/src/UnixConsoleText.cpp ../custom_widgets/src/WindowsConsoleText.cpp src/EditorFoldingTab.cpp src/EditorGeneralTab.cpp src/OptionContainer.cpp src/OptionTabInterface.cpp src/OptionsGui.cpp src/main.cpp
HEADERS += ../custom_widgets/src/RosEnv.h ../custom_widgets/src/UnixConsoleText.h ../custom_widgets/src/WindowsConsoleText.h src/AppearEditorTabsTab.h src/AppearLookFeelTab.h src/AppearWindowsTab.h src/CCppBuildToolsTab.h src/CCppCodeAssistTab.h src/CCppDebugOptionTab.h src/CCppFileTmplTab.h src/CCppOtherTab.h src/CCppProjOptionTab.h src/EditorApiSrcTab.h src/EditorAutoMemTab.h src/EditorCodeComplTab.h src/EditorCodeTmplTab.h src/EditorFoldTab.h src/EditorFormatTab.h src/EditorGeneralTab.h src/EditorGoToTab.h src/EditorHighlightTab.h src/EditorHintsTab.h src/EditorLookFeelTab.h src/EditorMacrosTab.h src/EditorOnSaveTab.h src/EditorSpellCheckTab.h src/FontNColorAnnotTab.h src/FontNColorDiffTab.h src/FontNColorHighlightTab.h src/FontNColorSyntaxTab.h src/FontNColorVingTab.h src/OptionContainer.h src/OptionTabInterface.h src/OptionsGui.h src/RosEnvVarTab.h
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
