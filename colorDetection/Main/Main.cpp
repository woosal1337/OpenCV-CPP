#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main() {
	string path = "Resources/lambo.png";
	Mat img = imread(path), imgHSV;
	
	cvtColor(img, imgHSV, COLOR_BGR2HSV);

	imshow("Image", img);
	imshow("HSV Image", imgHSV);
	waitKey(0);
}