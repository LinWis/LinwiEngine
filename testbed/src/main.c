#include <core/logger.h>
#include <core/asserts.h>

int main(void) {
    LFATAL("A test message: %f", 3.14f);
    LERROR("A test message: %f", 3.14f);
    LWARN("A test message: %f", 3.14f);

    LASSERT_MSG(1 == 0, "test");

    return 0;
}
