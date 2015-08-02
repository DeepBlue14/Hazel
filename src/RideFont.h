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
#include <QString>

#include <iostream>

#include "WindowsConsoleText.h"
#include "UnixConsoleText.h"

#ifdef _WIN32
namespace cct = WindowsConsoleText;
#elif __APPLE
namespace cct = UnixConsoleText;
#elif __linux
namespace cct = UnixConsoleText;
#endif

using namespace std;

namespace RideFont
{
    QFont* font;
        
    /**
     * 
     */
    void initDefaultValues();
    
    /**
     * 
     * 
     * @param fontName
     */
    void setFamily(QString* fontName);
    
    /**
     * 
     * 
     * @return 
     */
    QString* getFamily();
    
    /**
     * 
     * 
     * @param isFixedPitch
     */
    void setFixedPitch(bool isFixedPitch);
    
    /**
     * 
     * 
     * @return 
     */
    bool getFixedPitch();
    
    /**
     * 
     * 
     * @param pointSize
     */
    void setPointSize(int pointSize);
    
    /**
     * 
     * 
     * @return 
     */
    int getPointSize();
    
    /**
     * 
     * 
     * @param fontWeight
     */
    void setWeight(int fontWeight);
    
    /**
     * 
     * 
     * @return 
     */
    int getWeight();
    
    /**
     * 
     * 
     * @return 
     */
    QString* toString();
}

#endif	/* RIDE_FONT_H */