// treefrog-setup.cpp : ���C�� �v���W�F�N�g �t�@�C���ł��B

#include "stdafx.h"
#include "MainForm.h"

using namespace treefrogsetup;



[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �R���g���[�����쐬�����O�ɁAWindows XP �r�W���A�����ʂ�L���ɂ��܂�
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	//Thread::CurrentThread->CurrentCulture = gcnew System::Globalization::CultureInfo("en-US");
//	System::Globalization::CultureInfo("en-US");
	//Thread::CurrentThread::CurrentCulture = gcnew CultureInfo("en-US");

	// ���C�� �E�B���h�E���쐬���āA���s���܂�
	Application::Run(gcnew MainForm());


	//OpenFileDialog ^openFileDialog1 = gcnew OpenFileDialog();
    //openFileDialog1->Filter = "Cursor Files|*.cur";
    //openFileDialog1->Title = "Select a Cursor File";


	return 0;
}
