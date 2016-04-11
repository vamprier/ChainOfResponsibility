// ChainOfResponsibility.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌÐòµÄÈë¿Úµã¡£
//

#include "CommonManager.h"
#include "GeneralManager.h"
#include "Majordomo.h"

int main(int argc, char* argv[])
{
	Manager* cm = new CommonManager("¾²Àè");
	Manager* md = new Majordomo("×Ú¼ü");
	Manager* gm = new GeneralManager("×Ú¾²Àè");
	cm->SetSuperior(md);
	md->SetSuperior(gm);
	//
	Request* r1 = new Request("Çë¼Ù","ÕÔ¾êÇë¼Ù",2);
	cm->RequestApplications(r1);

	Request* r2 = new Request("Çë¼Ù","ÕÔ¾êÇë¼Ù",10);
	cm->RequestApplications(r2);

	Request* r3 = new Request("¼ÓÐ½","ÕÔ¾ê¼ÓÐ½",2000);
	cm->RequestApplications(r3);

	cin.ignore();
	return 0;
}

