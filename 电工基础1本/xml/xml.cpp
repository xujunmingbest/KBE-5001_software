#include "xml.h"

ConfigXml configXml;

//解析xml文件  
bool readXmlConfigFile(ConfigXml &configXml)
{
	TiXmlDocument mydoc("pz.xml");//xml文档对象  
	bool loadOk = mydoc.LoadFile();//加载文档  
	if (!loadOk)
	{
		cout << "could not load the test file.Error:" << mydoc.ErrorDesc() << endl;
		return false;
	}

	TiXmlElement *RootElement = mydoc.RootElement();  //根元素, Info  
	TiXmlElement *pEle = RootElement;

	//遍历该结点  
	for (TiXmlElement *CldElement = pEle->FirstChildElement();//第一个子元素  
		CldElement != NULL;
		CldElement = CldElement->NextSiblingElement())//下一个兄弟元素  
	{
		// StuElement->Value() 节点名称  
		string zd(CldElement->Value());
		string value(CldElement->FirstChild()->Value());
		if (zd == "DesMac") {
			configXml.DesMac = value;
		}
		else if (zd == "RepeaterPort") {
			configXml.RepeaterPort = value;
		}
		else if (zd == "RepeaterIp") {
			configXml.RepeaterIp = value;
		}
		else if (zd == "SerialHandle") {
			configXml.SerialHandle = value;
		}
		else if (zd == "SerialControlSource") {
			configXml.SerialControlSource = value;
		}
	}
	return true;
}


bool writeXmlConfigFile(ConfigXml &configXml) {

	TiXmlDocument *writeDoc = new TiXmlDocument; //xml文档指针  

												 //文档格式声明  
	TiXmlDeclaration *decl = new TiXmlDeclaration("1.0", "gb2312", "yes");
	writeDoc->LinkEndChild(decl); //写入文档  
	TiXmlElement *RootElement = new TiXmlElement("Info");//根元素  													
	writeDoc->LinkEndChild(RootElement);

	/******添加字段和值******/
	//TiXmlElement *pz1 = new TiXmlElement("LangDuNvPath");
	//RootElement->LinkEndChild(pz1);//父节点写入文档  
	//TiXmlText *pz1Text = new TiXmlText(configXml.LangDuNvPath.c_str());//Stu  //设置属性  
	//pz1->LinkEndChild(pz1Text);


	writeDoc->SaveFile("pz.xml");
	delete writeDoc;
	return true;
}

