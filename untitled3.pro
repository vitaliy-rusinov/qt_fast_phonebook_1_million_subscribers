#-------------------------------------------------
#
# Project created by QtCreator 2013-04-20T19:37:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    stat.cpp \
    edit.cpp \
    avail.cpp \
    phb.cpp \
    lists.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    stat.h \
    edit.h \
    avail.h \
    phb.h \
    main.h \
    lists.h

FORMS    += mainwindow.ui \
    dialog.ui \
    stat.ui \
    edit.ui \
    avail.ui \
    lists.ui

OTHER_FILES += \
    Zoom-icon.png \
    my-numbers-icon.png \
    chart-icon.png \
    add-icon.png \
    Actions-edit-delete-icon.png \
    Actions-document-edit-icon.png

RESOURCES += \
    1.qrc
