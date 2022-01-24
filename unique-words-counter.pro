TEMPLATE = app
CONFIG += console c++1z c++17
CONFIG -= app_bundle
CONFIG -= qt

QMAKE_CXXFLAGS += -std=c++1z
QMAKE_CXXFLAGS += -std=c++17

SOURCES += \
        main.cpp
