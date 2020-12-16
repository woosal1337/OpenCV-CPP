#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main() {
	// Reading Image
	string path = "Resources/test.png";
	Mat img = imread(path);
	imshow("Image", img);

	// Image Resizing
	Mat imgResize;
	resize(img, imgResize, Size(640, 480));
	imshow("Image Resized", imgResize);

	// Cropping image
	Mat imgCrop;
	Rect roi(100, 100, 300, 250);
	imgCrop = img(roi);
	imshow("Image Cropped", imgCrop);

	waitKey(0);
}