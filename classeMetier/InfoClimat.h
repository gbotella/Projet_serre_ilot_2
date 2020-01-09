/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfoClimat.h
 * Author: snir2g1
 *
 * Created on 8 janvier 2020, 16:04
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H

#include "Observable.h"

class InfoClimat : public Observable {
public:
    InfoClimat();
    virtual ~InfoClimat();
    int getHydrometrie();
    int getTemperature();
    int getPositionOuvrant();
    int getLuminosite();
    void setHydrometrie(int val);
    void setTemperature(int val);
    void setPositionOuvrant(int val);
    void setLuminosite(int val);
private:
    int hydrometrie;
    int temperature;
    int positionOuvrant;
    int luminosite;
    int date;
};

#endif /* INFOCLIMAT_H */

