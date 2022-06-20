QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adicionar_produto.cpp \
    admin.cpp \
    adminstrador.cpp \
    atualizar_cliente.cpp \
    atualizar_produto.cpp \
    carrinhocompras.cpp \
    cliente.cpp \
    generateid.cpp \
    main.cpp \
    mainwindow.cpp \
    pedido.cpp \
    produto.cpp \
    telaclienteadm.cpp \
    utils.cpp

HEADERS += \
    ICRUD.h \
    ITransformarDados.h \
    LLDE.h \
    No.h \
    adicionar_produto.h \
    admin.h \
    adminstrador.h \
    atualizar_cliente.h \
    atualizar_produto.h \
    carrinhocompras.h \
    cliente.h \
    generateid.h \
    mainwindow.h \
    pedido.h \
    produto.h \
    telaclienteadm.h \
    utils.h

FORMS += \
    adicionar_produto.ui \
    admin.ui \
    atualizar_cliente.ui \
    atualizar_produto.ui \
    mainwindow.ui \
    telaclienteadm.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
