/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   InfoClimat.h
 * Author: snir2g1
 *
 * Created on 8 janvier 2020, 15:04
 */

#ifndef INFOCLIMAT_H
#define INFOCLIMAT_H

class InfoClimat {
public:
    InfoClimat();
    InfoClimat(const InfoClimat& orig);
    virtual ~InfoClimat();
private:
    int hygrometrie();
    int temperature();
    int positionOuvrants();
    int luminosite();
    int date();

};

#endif /* INFOCLIMAT_H */

