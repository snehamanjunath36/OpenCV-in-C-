#include "opencv2/imgproc.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>

using namespace cv;

int main()
{
	Mat img = imread("/home/pragati/Desktop/testopencvC++/sample.jpeg",IMREAD_COLOR);
	namedWindow("Input",WINDOW_NORMAL);
	
	while(1)
	{
		int c = waitKey(1);
		if((char)c=='q')
		{
			printf("Pressed Quit\n");
			break;
		}
		if((char)c== 's')
		{
			printf("Pressed S\n");

		}if((char)c== 'n')
		{
			printf("Pressed N\n");
			
		}if((char)c== 'e')
		{
			printf("Pressed E\n");
			
		}
		if((char)c== 'h')
		{
			printf("Pressed H\n");
			
		}
		if((char)c== 'a')
		{
			printf("Pressed A\n");
			
		}	
	}

	imshow("Input",img);
	return 0;
}
