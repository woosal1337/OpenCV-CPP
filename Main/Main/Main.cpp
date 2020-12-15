#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;


//// Reading video ////

//int main() {
//
//    string path = "Resources/test_video.mp4";
//    VideoCapture cap(path);
//    Mat img;
//
//    while (true) {
//        cap.read(img);
//        imshow("Image", img);
//        waitKey(20);
//    }
//
//    return 0;
//
//}


/// 
/// 
///	Reading WEBCAM
/// 
/// 

void main() {
	VideoCapture cap(0);
	Mat img;

	while (true) {
		cap.read(img);
		imshow("Webcam", img);
		waitKey(20);
	}
}