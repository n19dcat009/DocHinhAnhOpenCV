//Code demo Group 05

//Bao g?m th? vi?n
#include<opencv2/opencv.hpp>
#include<iostream>
//Namespace v� hi?u h�a vi?c s? d?ng cv::function();
using namespace std;
using namespace cv;

int main() {

	//??c h�nh ?nh
	Mat img1 = imread("C:\\Users\\84395\\Music\\MEmu Music\\DocHinhAnh\\ptit.jpg", 1);
	Mat img2 = imread("C:\\Users\\84395\\Music\\MEmu Music\\DocHinhAnh\\ptit.jpg", -1);
	Mat img3 = imread("C:\\Users\\84395\\Music\\MEmu Music\\DocHinhAnh\\ptit.jpg", 0);
	//Hi?n th? h�nh ?nh ra c?a s?
	imshow("PTIT image", img1);
	imshow("PTIT1 image", img2);
	imshow("PTIT2 image", img3);
	//ch? t? h?p ph�m.
	waitKey(0);
	//ph� h?y t?t c? c�c c?a s? ???c t?o ra
	destroyAllWindows();
	return 0;
}
