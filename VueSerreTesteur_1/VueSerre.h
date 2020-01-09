/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g1
 *
 * Created on 9 janvier 2020, 15:03
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H

#include "ui_VueSerre.h"
#include "../classeMetier/Observable.h"
#include "../classeMetier/InfoClimat.h"
//#include "VuePrincipale.h"

class VueSerre : public QWidget, public Observateur {
    Q_OBJECT
public:
    VueSerre();
    virtual ~VueSerre();
    void mettreAJour();
private:
    Ui::VueSerre widget;
    InfoClimat* infosClimat;
    //VuePrincipale* laVuePrincipale;
};

#endif /* _VUESERRE_H */
