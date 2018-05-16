
#include "tool.h"



void Waver::Init()
{
	LabelHt = gcnew Hashtable;
	PicboxHt = gcnew Hashtable;

}
void Waver::Add(Label^ll, Color a)
{
	LabelHt->Add(ll,a);
}
void Waver::Add(PictureBox^ pb)
{
	PicboxHt->Add(pb,1);
}

void Waver::waver()
{
	Thread^ t = t = gcnew Thread(gcnew ThreadStart(this, &Waver::twaver));
	t->Start();
}
void Waver::twaver()
{
	for (int i = 0; i < 2; i++) {
		for each (Object^ var in LabelHt)
		{
			DictionaryEntry^ d = (DictionaryEntry^)var;
			((Label^)d->Key)->Visible = false;
		}
		for each (Object^ var in PicboxHt)
		{
			DictionaryEntry^ d = (DictionaryEntry^)var;
			((PictureBox^)d->Key)->Visible = false;
		}
		Thread::Sleep(500);

		for each (Object^ var in LabelHt)
		{
			DictionaryEntry^ d = (DictionaryEntry^)var;
			((Label^)d->Key)->Visible = true;
			((Label^)d->Key)->BackColor = Color::Red;
		}
		for each (Object^ var in PicboxHt)
		{
			DictionaryEntry^ d = (DictionaryEntry^)var;
			((PictureBox^)d->Key)->Visible = true;
		}
		Thread::Sleep(500);
	}
	for each (Object^ var in LabelHt)
	{
		DictionaryEntry^ d = (DictionaryEntry^)var;
		((Label^)d->Key)->Visible = true;
		((Label^)d->Key)->BackColor = (Color)d->Value;
	}

}
