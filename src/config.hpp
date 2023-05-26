// somebar - dwl bar
// See LICENSE file for copyright and license details.

#pragma once
#include "common.hpp"

constexpr bool topbar = true;

constexpr int paddingX = 12;
constexpr int paddingY = 3;

// See https://docs.gtk.org/Pango/type_func.FontDescription.from_string.html
constexpr const char* font = "Hack 17";

constexpr ColorScheme colorInactive = {Color(0xbb, 0xbb, 0xbb), Color(0x22, 0x22, 0x22)};
constexpr ColorScheme colorActiveBar = {Color(0xee, 0xee, 0xee), Color(0x1f, 0x55, 0x79)};
constexpr ColorScheme colorActiveTag = {Color(0xff, 0xff, 0xff), Color(0xb4, 0x00, 0xb4)};
constexpr ColorScheme colorActiveTagPrevMon = {Color(0x00, 0x00, 0x00), Color(0x77, 0x00, 0x77)};

constexpr const char* termcmd[] = {"footie", nullptr};

static std::vector<std::string> tagNames = {
	"1", "2", "3",
	"4", "5", "6",
	"7", "8", "9",
};

constexpr Button buttons[] = {
	{ ClkStatusText,   BTN_RIGHT,  spawn,      {.v = termcmd} },
};
