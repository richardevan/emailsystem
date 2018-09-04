#-------------------------------------------------
#
# Project created by QtCreator 2018-09-04T04:59:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    signup.cpp \
    mail_window.cpp \
    compose.cpp

HEADERS  += login.h \
    signup.h \
    mail_window.h \
    compose.h

FORMS    += login.ui \
    signup.ui \
    mail_window.ui \
    compose.ui

OTHER_FILES +=

RESOURCES += \
    resource.qrc
