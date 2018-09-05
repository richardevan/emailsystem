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
    compose.cpp \
    send_window.cpp \
    draft_window.cpp \
    trash_window.cpp \
    inbox_window.cpp

HEADERS  += login.h \
    signup.h \
    mail_window.h \
    compose.h \
    send_window.h \
    draft_window.h \
    trash_window.h \
    inbox_window.h

FORMS    += login.ui \
    signup.ui \
    mail_window.ui \
    compose.ui \
    send_window.ui \
    draft_window.ui \
    trash_window.ui \
    inbox_window.ui

OTHER_FILES +=

RESOURCES += \
    resource.qrc
