#include "pch.h"
#include "Class.h"
#include "Class.g.cpp"

namespace winrt::CppWinRTRuntimeComponent::implementation
{
	int32_t _MyProp = 42;

	int32_t Class::MyProperty()
    {
		return _MyProp;
    }

	void Class::MyProperty(int32_t value) // /* value */)
    {
		_MyProp = value;
    }
}
