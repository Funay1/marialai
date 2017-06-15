#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/opencv.hpp"
#include "opencv2/videoio.hpp"
#include "thermapp.h"
#include <stdio.h>
using namespace std;
using namespace cv;
VideoCapture cap;

void pegaWebcam(){
    if(!cap.open(0))
        return;
    Mat frame;
    cap >> frame;
    //if( frame.empty() ){ printf("\n\n\n\nFALHOU\n\n\n\n"); return;} // end of video stream
    //imshow("this is you, smile! :)", frame);
    //printf("\n\n\n\nAQUI\n\n\n\n");
}
