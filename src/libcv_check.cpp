#include "opencv4/opencv2/core/core.hpp"
#include "opencv4/opencv2/calib3d/calib3d.hpp"
#include <iostream>
using namespace cv;
using namespace std;
int main( int argc, char** argv )
{
    std::cout << cv::getBuildInformation() << std::endl;
    return 0;
}
