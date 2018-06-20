#include "tool.h"

void CloseAllMidchild(Form ^Parent) {
	for each(Form^ f in Parent->MdiChildren)
	{
		f->Close();
	}
}

/**
功能:根据窗体名字获取窗体是不是已经打开

*/
Form^ GetWindowsChild(String ^FormName, Form ^Parent) {
	for each(Form^ f in Parent->MdiChildren)
	{
		if (f->Name == FormName)
		{
			return f;
		}
	}
	return nullptr;
}