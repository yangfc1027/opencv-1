
#include<get_info.h>

void GetInfo::fun1(Mat img) {
	//宽度
	int kuan = img.cols;
	cout << "宽度：" << kuan << endl;
	//高度
	int gao = img.rows;
	cout << "高度：" << gao << endl;
	//通道数
	int channel = img.channels();
	cout << "通道数：" << channel << endl;
}