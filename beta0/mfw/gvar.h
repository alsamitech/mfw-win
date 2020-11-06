#pragma once
/*
 *	Sami Alameddine, 2020
 *	
 *	Put Global Variables here.
 */

namespace mfw{
	void MarshalString(String ^ s, std::string& os) {
		using namespace Runtime::InteropServices;
		const char* chars=
			(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os=chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}
}