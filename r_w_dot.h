#pragma once

/*�ó���������ȡ�Ͳ������ص�*/

#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

class R_W_Dot {
public:
	void r_dot(Mat img);
	void w_dot(Mat img);
	void fan(Mat img);
};