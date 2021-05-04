#include <iostream>
#include <string>
#include <sstream>

// openCV includes
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"

int main(int argc, const char** argv)
{
  // Read images with Mat class
  cv::Mat color = cv::imread("../lena.jpg");
  cv::Mat gray = cv::imread("../lena.jpg", cv::IMREAD_GRAYSCALE);

  if(!color.data) // check if color was found
  {
    std::cout << "Could not open or find the image." << '\n';
    return -1;
  }
  // write the images
  cv::imwrite("lenaGray.jpg", gray);
  // get a pixel with openCV color.at
  int row = color.cols - 1;
  int col = color.rows - 1;
  cv::Vec3b pixel = color.at<cv::Vec3b>(row, col);
  std::cout << "Pixel value (BGR): (" << static_cast<int>(pixel[0]) 
    << ", " << static_cast<int>(pixel[1]) << ", " << static_cast<int>(pixel[2])
    << ")" << '\n';
  cv::imshow("Lena BGR", color);
  cv::imshow("Lena Gray", gray);
  // wait infinite time for any key press
  cv::waitKey(0);
  return 0;  
}
