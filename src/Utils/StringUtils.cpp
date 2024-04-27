#include <Common/Utils/StringUtils.h>

#include <stdarg.h>

namespace Common::Utils
{

const std::string Format(const std::string value, ...)
{
    // TODO: clang
    return "";
    // va_list args;
    // va_start(args, value);

    // int len = _vscprintf(value.c_str(), args) + 1;
    // std::string buffer(len, '\0');
    // vsprintf_s((char*)buffer.c_str(), len, value.c_str(), args);

    // return buffer.c_str();
}

const std::wstring Format(const std::wstring value, ...)
{
    // TODO: clang
    return L"";
    // va_list args;
    // va_start(args, value);

    // int len = _vscwprintf(value.c_str(), args) + 1;
    // std::wstring buffer(len, '\0');
    // vswprintf_s((wchar_t*)buffer.c_str(), len, value.c_str(), args);

    // return buffer.c_str();
}

bool Utf8ToUtf16(const std::string& utf8, std::wstring& utf16)
{
    // TODO: clang
    return false;
    // if (utf8.empty())
    //     return false;
    // if (utf8.length() > static_cast<size_t>((std::numeric_limits<int>::max)()))
    //     return false;

    // constexpr DWORD flags = MB_ERR_INVALID_CHARS;

    // const int utf8_length = static_cast<int>(utf8.length());

    // const int utf16_length = ::MultiByteToWideChar(CP_UTF8, flags, utf8.data(), utf8_length, nullptr, 0);
    // if (utf16_length == 0)
    // {
    //     return false;
    // }

    // utf16.clear();
    // utf16.resize(utf16_length);

    // int result = ::MultiByteToWideChar(CP_UTF8, flags, utf8.data(), utf8_length, &utf16[0], utf16_length);
    // if (result == 0)
    // {
    //     return false;
    // }

    // return true;
}

bool Utf16ToUtf8(const std::wstring& utf16, std::string& utf8)
{
    // TODO: clang
    return false;
    // if (utf16.empty())
    //     return false;
    // if (utf16.length() > static_cast<size_t>((std::numeric_limits<int>::max)()))
    //     return false;

    // constexpr DWORD flags = WC_ERR_INVALID_CHARS;

    // const int utf16_length = static_cast<int>(utf16.length());

    // const int utf8_length = ::WideCharToMultiByte(CP_UTF8, flags, utf16.data(), utf16_length, nullptr, 0, nullptr, nullptr);
    // if (utf8_length == 0)
    // {
    //     return false;
    // }

    // utf8.clear();
    // utf8.resize(utf8_length);

    // int result = ::WideCharToMultiByte(CP_UTF8, flags, utf16.data(), utf16_length, &utf8[0], utf8_length, nullptr, nullptr);
    // if (result == 0)
    // {
    //     return false;
    // }

    // return true;
}

} // namespace Common::Utils
