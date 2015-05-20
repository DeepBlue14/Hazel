/* 
 * File:   RideFont.h
 * Author: James Kuczynski
 * Email: jkuczyns@cs.uml.edu
 * File Description:
 *
 * Created on May 20, 2015, 11:12 AM
 */

#ifndef RIDE_FONT_H
#define	RIDE_FONT_H

#include <QFont>

namespace RideFont
{
    QFont* font;
        
    void initDefaultValues();
    void setFamily(QString* fontName);
    QString* getFamily();
    void setFixedPitch(bool isFixedPitch);
    bool getFixedPitch();
    void setPointSize(int pointSize);
    int getPointSize();
    void setWeight(int fontWeight);
    int getWeight();
    QString* toString();
}

#endif	/* RIDE_FONT_H */