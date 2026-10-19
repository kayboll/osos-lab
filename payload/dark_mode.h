/* SPDX-License-Identifier: GPL-3.0-only */

#pragma once
#include <stdint.h>

void cfw_dark_mode_load(void);
int cfw_dark_mode_enabled(void);
int cfw_dark_mode_action(void *controller, const char *action, uint32_t argument);
/* Stock dark bitmap that replaces id in dark mode, or 0. */
uint32_t cfw_dark_mode_bitmap_id(uint32_t id);
const void *cfw_dark_mode_color(uint32_t id, const void *color);
int cfw_dark_mode_property(uint32_t type, uint32_t property, uintptr_t *out);
