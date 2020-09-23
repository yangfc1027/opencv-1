#include<iostream>             //C++的
#include<opencv2/opencv.hpp>   //opencv的
#include<get_info.h>           //自定义的
#include<r_w_dot.h>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
	Mat srcImage = imread("F:/Cpp_and_Opencv/imgs/1Lena.jpg");
	if (!srcImage.data) {
		printf("没有找到图片");
	}

	namedWindow("原始图片", WINDOW_AUTOSIZE);
	imshow("原始图片", srcImage);

	//Mat grayImage;
	//cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	//namedWindow("灰度图片", WINDOW_AUTOSIZE);
	//imshow("灰度图片", grayImage);
	
	//打印信息
	//GetInfo gi;
	//gi.fun1(srcImage);

	/*读取像素*/
	R_W_Dot rw;
	//rw.r_dot(srcImage);

	/*修改像素值*/
	//rw.w_dot(srcImage);
	
	/*反转灰度图*/
	rw.fan(srcImage);	

	return 0;
}