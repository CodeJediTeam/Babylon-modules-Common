#pragma once

#include <Common/Globals.h>

namespace Babylon::Common::Utils
{

const std::string Format(const std::string value, ...);
const std::wstring Format(const std::wstring value, ...);

bool Utf8ToUtf16(const std::string& utf8, std::wstring& utf16);
bool Utf16ToUtf8(const std::wstring& utf16, std::string& utf8);

} // namespace Babylon::Common::Utils
