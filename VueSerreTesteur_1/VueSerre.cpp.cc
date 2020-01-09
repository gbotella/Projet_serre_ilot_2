/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   VueSerre.cpp
 * Author: snir2g1
 *
 * Created on 9 janvier 2020, 15:03
 */

#include <QApplication>
#include <QWidget>
#include <QString>
#include "VueSerre.h"

VueSerre::VueSerre() {
    widget.setupUi(this);
    infosClimat = new InfoClimat();
}

VueSerre::~VueSerre() {
}

void VueSerre::mettreAJour() {
   widget.temperature->setText(QString::number(infosClimat->getTemperature()));
   widget.hygrometrie->setText(QString::number(infosClimat->getHydrometrie()));
   widget.luminosite->setText(QString::number(infosClimat->getLuminosite()));
   widget.positionOuvrants->setText(QString::number(infosClimat->getPositionOuvrant()));
}
