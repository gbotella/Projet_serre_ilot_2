#ifndef _VUEMETEO_H
#define _VUEMETEO_H

#include "ui_VueMeteo.h"

class VueMeteo : public QWidget {
    Q_OBJECT
public:
    VueMeteo();
    virtual ~VueMeteo();
    void mettreAjour();
private:
    Ui::VueMeteo widget;
};

#endif /* _VUEMETEO_H */