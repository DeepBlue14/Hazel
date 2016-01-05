#include "MasterGui.h"


MasterGui::MasterGui(QWidget* parent) : QWidget(parent)
{
    pub = new ros::Publisher();    
    
    currImagePtr = new QImage("/home/james/NetBeansProjects/ImageView/loading.jpg");
    imageLblPtr = new QLabel();
    imageLblPtr->setPixmap(QPixmap::fromImage(*currImagePtr));
    
    outerLayout = new QGridLayout();
    outerLayout->addWidget(imageLblPtr);
    
    setLayout(outerLayout);
}


void MasterGui::callback(const sensor_msgs::ImageConstPtr& input)
{
    cv_bridge::CvImagePtr cv_ptr;
    Mat cvImage;
    
    try
    {
        cv_ptr = cv_bridge::toCvCopy(input);
    }
    catch(cv_bridge::Exception& e)
    {
        ROS_ERROR("cv_bridge exception: %s", e.what() );
    }
    
    cvImage = cv_ptr->image;
    
    //...
    
    cv_ptr->image = cvImage;
    pub->publish(cv_ptr->toImageMsg() );
}


QImage MasterGui::Mat2QImage(const cv::Mat& src)
{
     cv::Mat temp; // make the same cv::Mat
     cvtColor(src, temp,CV_BGR2RGB); // cvtColor Makes a copt, that what i need
     QImage dest((const uchar *) temp.data, temp.cols, temp.rows, temp.step, QImage::Format_RGB888);
     dest.bits(); // enforce deep copy, see documentation 
     // of QImage::QImage ( const uchar * data, int width, int height, Format format )
     return dest;
}


cv::Mat MasterGui::QImage2Mat(QImage const& src)
{
     cv::Mat tmp(src.height(),src.width(),CV_8UC3,(uchar*)src.bits(),src.bytesPerLine());
     cv::Mat result; // deep copy just in case (my lack of knowledge with open cv)
     cvtColor(tmp, result,CV_BGR2RGB);
     return result;
}


ros::Publisher* MasterGui::getPublisher()
{
    return pub;
}


MasterGui::~MasterGui()
{
    ;
}
