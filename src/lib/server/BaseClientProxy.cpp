/*
 * Deskflow -- mouse and keyboard sharing utility
 * Copyright (C) 2012-2016 Symless Ltd.
 * Copyright (C) 2006 Chris Schoeneman
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

#include "server/BaseClientProxy.h"

//
// BaseClientProxy
//

BaseClientProxy::BaseClientProxy(const std::string &name) : m_name(name), m_x(0), m_y(0)
{
  // do nothing
}

BaseClientProxy::~BaseClientProxy()
{
  // do nothing
}

void BaseClientProxy::setJumpCursorPos(int32_t x, int32_t y)
{
  m_x = x;
  m_y = y;
}

void BaseClientProxy::getJumpCursorPos(int32_t &x, int32_t &y) const
{
  x = m_x;
  y = m_y;
}

std::string BaseClientProxy::getName() const
{
  return m_name;
}
