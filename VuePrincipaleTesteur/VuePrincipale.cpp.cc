/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VuePrincipale.cpp
 * Author: snir2g1
 *
 * Created on 16 janvier 2020, 17:10
 */

#include "VuePrincipale.h"
VuePrincipale::VuePrincipale() {
    widget.setupUi(this);
    MaMeteo = new VueMeteo();
    MaSerre = new VueSerre();
    widget.meteo->addWidget(MaMeteo);
   
    widget.serre ->addWidget(MaSerre);
}

VuePrincipale::~VuePrincipale() {
}
