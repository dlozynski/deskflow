/*
 * Deskflow -- mouse and keyboard sharing utility
 * Copyright (C) 2012-2016 Symless Ltd.
 * Copyright (C) 2002 Chris Schoeneman
 *
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 *
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "base/EventTypes.h"

//! Mouse button ID
/*!
Type to hold a mouse button identifier.
*/
using ButtonID = uint8_t;

//! @name Mouse button identifiers
//@{
static const ButtonID kButtonNone = 0;
static const ButtonID kButtonLeft = 1;
static const ButtonID kButtonMiddle = 2;
static const ButtonID kButtonRight = 3;
static const ButtonID kButtonExtra0 = 4;
static const ButtonID kButtonExtra1 = 5;

static const ButtonID kMacButtonRight = 2;
static const ButtonID kMacButtonMiddle = 3;
//@}

static const uint8_t NumButtonIDs = 5;
