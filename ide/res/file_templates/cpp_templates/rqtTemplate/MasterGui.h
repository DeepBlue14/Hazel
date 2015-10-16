/* 
 * File:   MasterGui.h
 * Author: james
 *
 * Reference: http://library.isr.ist.utl.pt/docs/roswiki/eros_python_tools(2f)roscreate_qt_pkg.html
 *            http://stackoverflow.com/questions/7934176/compiling-c-source-file-using-boost-thread
 *            http://wiki.ros.org/ecl_threads
 *
 * Created on June 19, 2015, 11:50 AM
 */

#ifndef MASTER_GUI_H
#define	MASTER_GUI_H

#include <QWidget>
#include <QImage>
#include <QLabel>
#include <QPixmap>
#include <QGridLayout>

#include <ros/ros.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/image_encodings.h>
#include <geometry_msgs/Point.h>
#include <opencv/cv.h>
#include <image_transport/image_transport.h>
#include <cv_bridge/cv_bridge.h>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

#include <iostream>

//using namespace ros; // This would make spinner expode (compilation errors) ???
using namespace cv;
using namespace std;

class MasterGui : public QWidget
{
    Q_OBJECT

    private:
        QImage* currImagePtr;
        QLabel* imageLblPtr;
        QGridLayout* outerLayout;
        
        ros::Publisher* pub;
        
    private slots:
        ;
    
    public:
        MasterGui(QWidget* parent = 0);
        void callback(const sensor_msgs::ImageConstPtr& input);
        QImage Mat2QImage(const cv::Mat& src);
        cv::Mat QImage2Mat(const QImage& src);
        void updateImage(QImage image);
        ros::Publisher* getPublisher();
        ~MasterGui();
            
};

#endif	/* MASTER_GUI_H */
