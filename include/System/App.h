#pragma once

#include <Common/Globals.h>
#include <Core/IAppDelegate.h>

namespace BS::Core
{

class App final
{
public:
    void SetDelegate(IAppDelegateUPtr delegate);

    bool Init();
    void Deinit();
    bool Run();

private:
    IAppDelegateUPtr _delegate;
};

} // namespace BS::Core
