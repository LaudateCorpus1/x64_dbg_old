#ifndef REGISTERSVIEW_H
#define REGISTERSVIEW_H

#include <QtGui>
#include "Bridge.h"

namespace Ui {
class RegistersView;
}

class RegistersView : public QWidget
{
    Q_OBJECT
    
public:
    enum REGISTER_NAME {
        CAX,
        CCX,
        CDX,
        CBX,
        CDI,
        CBP,
        CSI,
        CSP,

        R8,
        R9,
        R10,
        R11,
        R12,
        R13,
        R14,
        R15,

        CIP,

        CFLAGS,
        CF,
        PF,
        AF,
        ZF,
        SF,
        TF,
        IF,
        DF,
        OF,

        GS,
        FS,
        ES,
        DS,
        CS,
        SS,

        DR0,
        DR1,
        DR2,
        DR5,
        DR6,
        DR7
    };

    explicit RegistersView(QWidget *parent = 0);
    ~RegistersView();
    void mousePressEvent(QMouseEvent* event);
    void mouseDoubleClickEvent(QMouseEvent* event);

public slots:
    void updateRegistersSlot();
    void displayCustomContextMenuSlot(QPoint pos);
    void setRegister(REGISTER_NAME reg, uint_t value);
    
private:
    Ui::RegistersView *ui;
    QList<QWidget*>* mRegList;
    QList<REGISTER_NAME>* mRegNamesList;
    int mSelected;
};

#endif // REGISTERSVIEW_H
