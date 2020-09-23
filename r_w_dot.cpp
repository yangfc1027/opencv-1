#include<r_w_dot.h>

void R_W_Dot::r_dot(Mat img) {
	Vec3b &bgr = img.at<Vec3b>(10, 10);
	cout << "B通道：" << int(bgr[0]) << endl;
	cout << "G通道：" << int(bgr[1]) << endl;
	cout << "R通道：" << int(bgr[2]) << endl;
}
void R_W_Dot::w_dot(Mat img) {
	for (int row = 0; row < img.rows/2; row++){
		for (int col = 0; col < img.cols / 2; col++) {
			Vec3b &bgr = img.at<Vec3b>(row, col);
			bgr[0] = 0;
			bgr[1] = 0;
			bgr[2] = 0;
		}
	}
	namedWindow("操作后", WINDOW_AUTOSIZE);
	imshow("操作后的图", img);
	waitKey(0);
}


/*反转*/
void R_W_Dot::fan(Mat img) {
	Mat dstImage;
	dstImage.create(img.size(), img.type());
	int nc = img.channels();                                  //通道数
	/*反转彩色图*/
	if(nc == 3){                                              
		for (int row = 0; row < img.rows; row++) {
			for (int col = 0; col < img.cols; col++) {
				int b = img.at<Vec3b>(row, col)[0];
				int g = img.at<Vec3b>(row, col)[1];
				int r = img.at<Vec3b>(row, col)[2];

				dstImage.at<Vec3b>(row, col)[0] = 255 - b;
				dstImage.at<Vec3b>(row, col)[1] = 255 - g;
				dstImage.at<Vec3b>(row, col)[2] = 255 - r;
			}
		}
	}
	else if (nc == 1) {
		for (int row = 0; row < img.rows; row++) {
			for (int col = 0; col < img.cols; col++) {
				int gray = img.at<uchar>(row, col);
				img.at<uchar>(row, col) = 255 - gray;
			}
		}
	}
	//展示反转结果
	namedWindow("反转", WINDOW_AUTOSIZE);
	imshow("反转", dstImage);
	waitKey(0);
}