
#include<get_info.h>

void GetInfo::fun1(Mat img) {
	//���
	int kuan = img.cols;
	cout << "��ȣ�" << kuan << endl;
	//�߶�
	int gao = img.rows;
	cout << "�߶ȣ�" << gao << endl;
	//ͨ����
	int channel = img.channels();
	cout << "ͨ������" << channel << endl;
}