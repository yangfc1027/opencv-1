#include<iostream>             //C++��
#include<opencv2/opencv.hpp>   //opencv��
#include<get_info.h>           //�Զ����
#include<r_w_dot.h>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
	Mat srcImage = imread("F:/Cpp_and_Opencv/imgs/1Lena.jpg");
	if (!srcImage.data) {
		printf("û���ҵ�ͼƬ");
	}

	namedWindow("ԭʼͼƬ", WINDOW_AUTOSIZE);
	imshow("ԭʼͼƬ", srcImage);

	//Mat grayImage;
	//cvtColor(srcImage, grayImage, COLOR_BGR2GRAY);
	//namedWindow("�Ҷ�ͼƬ", WINDOW_AUTOSIZE);
	//imshow("�Ҷ�ͼƬ", grayImage);
	
	//��ӡ��Ϣ
	//GetInfo gi;
	//gi.fun1(srcImage);

	/*��ȡ����*/
	R_W_Dot rw;
	//rw.r_dot(srcImage);

	/*�޸�����ֵ*/
	//rw.w_dot(srcImage);
	
	/*��ת�Ҷ�ͼ*/
	rw.fan(srcImage);	

	return 0;
}