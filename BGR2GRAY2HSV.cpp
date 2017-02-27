#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
using namespace cv;
using namespace std;
int main()
{
	Mat var1 = imread("images.jpg",1);
	Mat var2(var1.rows, var1.cols, CV_8UC1, Scalar(0));
	Mat var3(var1.rows, var1.cols, CV_8UC3, Scalar(0,0,0));
	Mat var4(var1.rows, var1.cols, CV_8UC3, Scalar(0, 0, 0));
	cvtColor(var1, var2, CV_RGB2GRAY);
	cvtColor(var1, var3, CV_BGR2HSV);
	cvtColor(var3, var4, CV_HSV2BGR);
	namedWindow("windows1", 1);
	imshow("windows1", var1);
	namedWindow("windows2", 1);
	imshow("windows2", var2);
	namedWindow("windows3", 1);
	imshow("windows3", var3);
	namedWindow("windows4", 1);
	imshow("windows4", var4);
	waitKey(0);
	return(0);
}