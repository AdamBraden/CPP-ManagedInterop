// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <Windows.h>
#include <iostream>
#include <libloaderapi.h>
#include <roapi.h>
#include <winstring.h>
#include <wrl\client.h>
#include <wrl\wrappers\corewrappers.h>

using namespace Microsoft::WRL;
using namespace Microsoft::WRL::Wrappers;

int main()
{
    //TODO: change this path before building this console app.
    LPCWSTR dllPath = L"C:\\Users\\brial\\source\\repos\\CppCsharp\\x64\\Release\\CppCsharp\\AppX\\CppCsharpTest.dll";
    HMODULE componentDll = LoadLibraryExW(dllPath, NULL, LOAD_WITH_ALTERED_SEARCH_PATH | LOAD_LIBRARY_SAFE_CURRENT_DIRS);
    PFNGETACTIVATIONFACTORY getFactory = reinterpret_cast<PFNGETACTIVATIONFACTORY>(GetProcAddress(componentDll, "DllGetActivationFactory"));

    ComPtr<IActivationFactory> factory;
    HRESULT hr = getFactory(HStringReference(L"RuntimeComponent1.Class1").Get(), &factory);

    return hr;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
