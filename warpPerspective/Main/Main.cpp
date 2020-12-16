#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main() {
	// Custom Random Image
	Mat img(512, 512, CV_8UC3, Scalar(255,0,255));
	imshow("Image", img);

	// Custom Circle 
	Mat imgCircle(512, 512, CV_8UC3, Scalar(255,255,255));
	circle(imgCircle, Point(256, 256), 155, Scalar(0, 69, 255), FILLED);
	rectangle(imgCircle, Point(130, 226), Point(382, 286), Scalar(255, 255, 255), FILLED);
	line(imgCircle, Point(130, 296), Point(382, 296), Scalar(255, 255, 255), 3);
	putText(imgCircle, "@woosal1337", Point(137, 262), FONT_HERSHEY_COMPLEX, 1, Scalar(0, 69, 255), 2);

	imshow("Image Circle", imgCircle);

	waitKey(0);
}