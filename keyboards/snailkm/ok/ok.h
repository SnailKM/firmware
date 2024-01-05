#pragma once

#include "quantum.h"

// clang-format off
#define LAYOUT_default( \
    K10, K11, \
    K30, K31 \
) { \
    { K10,   K11   }, \
    { K30,   K31   }  \
}
// clang-format on