// ChainOfResponsibility.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "CommonManager.h"
#include "GeneralManager.h"
#include "Majordomo.h"

int main(int argc, char* argv[])
{
	Manager* cm = new CommonManager("����");
	Manager* md = new Majordomo("�ڼ�");
	Manager* gm = new GeneralManager("�ھ���");
	cm->SetSuperior(md);
	md->SetSuperior(gm);
	//
	Request* r1 = new Request("���","�Ծ����",2);
	cm->RequestApplications(r1);

	Request* r2 = new Request("���","�Ծ����",10);
	cm->RequestApplications(r2);

	Request* r3 = new Request("��н","�Ծ��н",2000);
	cm->RequestApplications(r3);

	cin.ignore();
	return 0;
}

