#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
int main()
{
Mat img = imread("/home/pragati/Desktop/testopencvC++/sample.jpeg",IMREAD_COLOR);

Mat erodeMat, dialateMat;
Mat elementKernel = getStructuringElement(MORPH_RECT, Size(5,5), Point(-1,-1));

erode(img,erodeMat,elementKernel, Point(-1,-1),1);
dilate(img,dialateMat,elementKernel, Point(-1,-1),1);

imshow("Original Image", img);
imshow("Eroded Image", erodeMat);
imshow("Dilated Image", dialateMat);


waitKey(1000);
return 0;
}
