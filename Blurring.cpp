#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
int main()
{
Mat img = imread("/home/pragati/Desktop/testopencvC++/sample.jpeg");
Mat bilateralImg, gaussianImg, medianImg ;

bilateralFilter(img, bilateralImg,15,95,45);
GaussianBlur(img, gaussianImg,Size(15,15),0);
medianBlur(img,medianImg,15);

imshow("Original Image", img);
imshow("Bilateral Image", bilateralImg);
imshow("Gaussian Image", gaussianImg);
imshow("Median Image", medianImg);


waitKey(0);
return 0;
}
