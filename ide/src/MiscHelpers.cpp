#include "MiscHelpers.h"

namespace MiscHelpers
{
    bool isRegex = false;
    
    bool containsOneOfThese(QString* str, QStringList* these, Qt::CaseSensitivity cs)
    {
        for(size_t i = 0; i < these->size(); i++)
        {
            if(str->contains(these->at(i), cs) )
            {
                return true;
            }
        }

        return false;
    }
    
    
    bool isPartOfOneOfThese(QString* str, QStringList* these, Qt::CaseSensitivity cs)
    {
        for(size_t i = 0; i < these->size(); i++)
        {
            if(these->at(i).contains(str, cs) )
            {
                return true;
            }
        }
        
        return false;
    }
    
    
}//end of namespace MiscHelpers