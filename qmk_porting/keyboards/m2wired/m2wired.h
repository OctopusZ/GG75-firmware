/*
Copyright 2022 Huckies <https://github.com/Huckies>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"
#include "extra_keycode.h"

// clang-format off

#define LAYOUT_all( \
	K000, K001, K002, K003,K004, K005, K006, K007,K008, K009, K010, K011,K012, K013, K014, K015,K016,K017, K018, K019, K020,\
	K100, K101, K102, K103,K104, K105, K106, K107,K108, K109, K110, K111,K112, K113, K114, K115,K116,K117, K118, K119, K120,\
	K200, K201, K202, K203,K204, K205, K206, K207,K208, K209, K210, K211,K212, K213, K214, K215,K216,K217, K218, K219, K220,\
	K300, K301, K302, K303,K304, K305, K306, K307,K308, K309, K310, K311,K312, K313, K314, K315,K316,K317, K318, K319, K320,\
	K400, K401, K402, K403,K404, K405, K406, K407,K408, K409, K410, K411,K412, K413, K414, K415,K416,K417, K418, K419, K420,\
    K500, K501, K502, K503,K504, K505, K506, K507,K508, K509, K510, K511,K512, K513, K514, K515,K516,K517, K518, K519, K520\
) \
{ \
    { K000, K001, K002, K003,K004, K005, K006, K007,K008, K009, K010, K011,K012, K013, K014, K015,K016,K017, K018, K019, K020 }, \
    { K100, K101, K102, K103,K104, K105, K106, K107,K108, K109, K110, K111,K112, K113, K114, K115,K116,K117, K118, K119, K120 }, \
    { K200, K201, K202, K203,K204, K205, K206, K207,K208, K209, K210, K211,K212, K213, K214, K215,K216,K217, K218, K219, K220 }, \
    { K300, K301, K302, K303,K304, K305, K306, K307,K308, K309, K310, K311,K312, K313, K314, K315,K316,K317, K318, K319, K320 }, \
    { K400, K401, K402, K403,K404, K405, K406, K407,K408, K409, K410, K411,K412, K413, K414, K415,K416,K417, K418, K419, K420 }, \
    { K500, K501, K502, K503,K504, K505, K506, K507,K508, K509, K510, K511,K512, K513, K514, K515,K516,K517, K518, K519, K520 } \
}
