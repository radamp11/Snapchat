#include <opencv2/imgcodecs.hpp>
#include <opencv2/videoio/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <iostream>
#include <stdio.h>

using namespace cv;
using namespace std;

struct mesg_buffer {
    long mesg_type;
    char data;
} message;

int main( int argc, char** argv ) {



    return 0;
}

/*  cv::Mat image;

  VideoCapture cap(0);
    if(!cap.isOpened())
        return -1;

int key;
while(key != 27)
{
  cap >> image;

  if( !image.data ) {
      std::cout <<  "Could not load camera view." << std::endl ;
      return -1;
    }

  cv::imshow("Snapchat", image);
  key = waitKey(10);
}

  destroyAllWindows();
 */
