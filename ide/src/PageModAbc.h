/* 
 * File:   PageModAbc.h
 * Module: Unaffiliated
 * Author: james
 * Email: 
 * File Description: This provides an abstract base class for a button-operated
 *                   multi-page module.
 *
 * Created on July 28, 2015, 10:42 AM
 */

#ifndef PAGE_MOD_ABC_H
#define	PAGE_MOD_ABC_H

#include <QWidget>
#include <QPushButton>
#include <QHBoxLayout>
#include <QGridLayout>

class PageModAbc : public QWidget
{
    Q_OBJECT
            
    private:
        ;
        
    private slots:
        /**
         * 
         */
        virtual void handleBackBtnSlot() = 0; // = 0 means it is "pure virtual"
        
        /**
         * 
         */
        virtual void handleNextBtnSlot() = 0;
        
        /**
         * 
         */
        virtual void handleFinishBtnSlot() = 0;
        
        /**
         * 
         */
        virtual void handleHelpBntSlot() = 0;
        
        /**
         * 
         */
        virtual void handleCancelBtnSlot() = 0;
        
    public:
        /**
         * Constructor.
         * 
         * @param parent reference to parent type.
         */
        PageModAbc(QWidget* parent = 0);
        
        /**
         * 
         */
        virtual void initBtns() = 0;
        
        /**
         * 
         */
        virtual void swapNextPage() = 0; // the number of pages in unknown, but there will be at least two
        
        /**
         * 
         */
        virtual void swapBackPage() = 0;
        
        /**
         * 
         */
        virtual void loadPage_1() = 0;
        
        /**
         * 
         */
        virtual void unloadPage_1() = 0;
        
        /**
         * 
         */
        virtual void loadPage_2() = 0;
        
        /**
         * 
         */
        virtual void unloadPage_2() = 0;
        
        /**
         * 
         * 
         * @return 
         */
        virtual QString* toString() = 0;
        
        /**
         * 
         */
        ~PageModAbc();
};

#endif	/* PAGE_MOD_ABC_H */