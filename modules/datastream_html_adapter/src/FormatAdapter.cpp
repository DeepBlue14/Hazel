/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


#include "FormatAdapter.h"


namespace FormatAdapter
{

    
QString toHtml(QString unixStr)
{
    QString result;
    
    for(size_t i = 0; i < FontSpecs::codesStrPairVec.size(); i++)
    {
        if(unixStr.contains(FontSpecs::codesStrPairVec.at(i).first) )
        {
            return FontSpecs::codesStrPairVec.at(i).second;
        }
    }
    
    return FontSpecs::codesStrPairVec.at(0).second;
}


QString toUnix(QString htmlStr)
{
    QString result;
    
    for(size_t i = 0; i < FontSpecs::codesStrPairVec.size(); i++)
    {
        if(htmlStr.contains(FontSpecs::codesStrPairVec.at(i).second) )
        {
            return FontSpecs::codesStrPairVec.at(i).first;
        }
    }
    
    return FontSpecs::codesStrPairVec.at(0).first;
}


} // END of namespace FormatAdapter