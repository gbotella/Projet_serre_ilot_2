/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VueSerre.h
 * Author: snir2g1
 *
 * Created on 9 janvier 2020, 14:35
 */

#ifndef _VUESERRE_H
#define _VUESERRE_H
#include "../classeMetier/Observateur.h"

#include "ui_VueSerre.h"

class VueSerre : public QWidget {
    Q_OBJECT
public:
    VueSerre();
    virtual ~VueSerre();
    void mettreAjour();
private:
    Ui::VueSerre widget;
};

#endif /* _VUESERRE_H */
