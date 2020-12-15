#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void main() {
	string path = "Resources/test.png";
	Mat img = imread(path);
	Mat imgGray, imgBlur, imgCanny, imgCannyHd, imgDil, imgErode;
	
	cvtColor(img, imgGray, COLOR_BGR2GRAY);
	GaussianBlur(img, imgBlur, Size(7,7), 5, 0);
	Canny(imgBlur, imgCanny, 50, 150);
	Canny(img, imgCannyHd, 50, 150);


	Mat kernel = getStructuringElement(MORPH_RECT, Size(5, 5));
	dilate(imgCanny, imgDil, kernel=kernel);
	erode(imgDil, imgErode, kernel = kernel);

	imshow("Image", img);
	imshow("Gray Image", imgGray);
	imshow("Blurred Image", imgBlur);
	imshow("Canny Edge Detection", imgCanny);
	imshow("HD Canny Detection", imgCannyHd);
	imshow("Dilated Image", imgDil);
	imshow("Image Erode", imgErode);

	waitKey(0);
}