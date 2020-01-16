/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 9 janvier 2020, 14:35
 */

#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAjour(){
    widget.temperature->setText("1");
    widget.hygrometrie->setText("5");
    widget.luminosite->setText("10");
    widget.positionOuvrants->setText("15");
}
