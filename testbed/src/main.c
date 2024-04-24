#include <core/logger.h>
#include <core/asserts.h>

//TODO: test platform
#include <platform/platform.h>

int main(void) {
    LFATAL("A test message: %f", 3.14f);
    LERROR("A test message: %f", 3.14f);
    LWARN("A test message: %f", 3.14f);

    platform_state state;
    if (platform_startup(&state, "Linwi Engine Testbed", 100, 100, 1280, 720)) {
        while (TRUE) {
            if (!platform_pump_messages(&state)) {
                break;
            }
        }
        platform_shutdown(&state);
    }


    return 0;
}
