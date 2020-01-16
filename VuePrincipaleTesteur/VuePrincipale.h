/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   VuePrincipale.h
 * Author: snir2g1
 *
 * Created on 16 janvier 2020, 17:10
 */

#ifndef _VUEPRINCIPALE_H
#define _VUEPRINCIPALE_H

#include "ui_VuePrincipale.h"
#include "VueMeteo.h"
class VuePrincipale : public QWidget {
    Q_OBJECT
public:
    VuePrincipale();
    virtual ~VuePrincipale();
private:
    Ui::VuePrincipale widget;
    VueMeteo* MaMeteo;
};

#endif /* _VUEPRINCIPALE_H */
