/* Copyright (C) 2012 by William Hallatt.
 *
 * This file forms part of the "GobChartsWidget" library.
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have downloaded a copy of the GNU General Public License
 * (GNUGPL.txt) and GNU Lesser General Public License (GNULGPL.txt)
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * The official website for this project is www.goblincoding.com and,
 * although not compulsory, it would be appreciated if all works of whatever
 * nature referring to or using this library include a reference to this site.
 */

#ifndef GOBCHARTSNOCOPY_H
#define GOBCHARTSNOCOPY_H

/// Inheriting from this class disables copying.

/** Inheriting from this class disables copying via the copy constructor and assignment
    operator.  The advantage of doing it this way (as opposed to simply implementing copy 
    constructors and assignment operators as "private" in the child classes) is that this 
    moves the error detection up from link time to compile time, which I prefer. */
class GobChartsNoCopy
{
protected:
  GobChartsNoCopy()  {}
  ~GobChartsNoCopy() {}

private:
  GobChartsNoCopy( const GobChartsNoCopy& );
  GobChartsNoCopy& operator=( const GobChartsNoCopy& );
};

#endif // GOBCHARTSNOCOPY_H
