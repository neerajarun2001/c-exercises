#include <iostream>
#include <string>
#include <sstream>
#include <stdio.h>

// OpenCV includes
#include "opencv2/core.hpp"
#include "opencv2/videoio.hpp"
#include "opencv2/highgui.hpp"

// OpenCV command line parser keys
const char* keys =
{
  "{help h usage ?  |                 | print this message    }"
  "{@video          | test.mp4 | video file to display }"
};
int main( int argc, const char** argv )
{
  cv::CommandLineParser parser(argc, argv, keys);
  parser.about("Chapter 2, v1.0.0");

  if(parser.has("help"))
  {
    parser.printMessage();
    return 0;
  }
  // get the name of the video file
  std::string videoFile = parser.get<std::string>(0);

  // check for errors in parsing 
  if(!parser.check())
  {
    parser.printErrors();
    return 0;
  }
  // initialize video capture class
  cv::VideoCapture cap(videoFile);
  /*
  if(!cap.isOpened())
  {
    std::cout << "Could not open " << videoFile << '\n';
    return -1;
  }
  */

  // create a named window
  cv::namedWindow("Video", 1);
  for(;;)
  {
    std::cout << "Entered loop" << '\n';
    cv::Mat frame;
    cap >> frame; // get a new frame from the videoo
    if(!frame.empty()) 
      cv::imshow("Video", frame);
    if(cv::waitKey(30) >= 0) 
      break;
  }
  // make sure to release the video cap when done
  cap.release();
}
