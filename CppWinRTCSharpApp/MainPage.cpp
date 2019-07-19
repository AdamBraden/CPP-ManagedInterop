#include "pch.h"
#include "MainPage.h"
#include "MainPage.g.cpp"
#include "winrt/CppWinRTRuntimeComponent.h"
#include "winrt/RuntimeComponent1.h"

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::CppWinRTCSharpApp::implementation
{
    MainPage::MainPage()
    {
        InitializeComponent();
    }

    int32_t MainPage::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainPage::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void MainPage::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        myButton().Content(box_value(L"Clicked"));

		winrt:RuntimeComponent1::Class1 c2;
		DWORD foo1 = c2.GetValue();
		
		winrt::CppWinRTRuntimeComponent::Class c1;
		DWORD foo = c1.MyProperty();
    }
}
