QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    admin.cpp \
    adminstrador.cpp \
    carrinhocompras.cpp \
    cliente.cpp \
    main.cpp \
    mainwindow.cpp \
    pedido.cpp \
    produto.cpp \
    telaclienteadm.cpp

HEADERS += \
    ICRUD.h \
    ITransformarDados.h \
    LLDE.h \
    No.h \
    admin.h \
    adminstrador.h \
    carrinhocompras.h \
    cliente.h \
    mainwindow.h \
    pedido.h \
    produto.h \
    telaclienteadm.h

FORMS += \
    admin.ui \
    mainwindow.ui \
    telaclienteadm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
