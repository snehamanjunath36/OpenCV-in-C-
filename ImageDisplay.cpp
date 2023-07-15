#include <opencv2/opencv.hpp>
#include <stdio.h>
using namespace cv;
int main(int argc, char** argv)
{
	Mat image;
	image = imread("/home/pragati/Desktop/testopencvC++/sample.jpeg");
	if (!image.data) {
		printf("No image data \n");
		return -1;
	}
	namedWindow("Display Image", WINDOW_AUTOSIZE);
	imshow("Display Image", image);
	waitKey(0);
	return 0;
}
/*
#include <iostream>
#include <opencv2/highgui.hpp>
using namespace cv;
int main()
{
Mat image;
image = imread("/home/pragati/Desktop/testopencvC++/sample.jpeg");
imshow("sdf", image);
waitKey(1000);
return 0;
}
*/

