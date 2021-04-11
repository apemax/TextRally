/*
    This file is part of STE.

    STE is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    STE is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with STE.  If not, see <http://www.gnu.org/licenses/>.
*/
// Copywright (C) 2020
// Author: Peter (apemax) Wright
// TextRally

#include <iostream>
#include "controls.h"
using namespace std;

void Controls::ShowControls()
{
  cout << endl;
  cout << "Type commands in order in response to each co-driver call:" << endl;
  cout << endl;
  cout << "Accelerate.......... T or Throttle" << endl;
  cout << "Brake............... B or Brake" << endl;
  cout << "Steer Left.......... L or Left" << endl;
  cout << "Steer Right......... R or Right" << endl;
  cout << "Gear Up............. U or Up" << endl;
  cout << "Gear Down........... D or Down" << endl;
  cout << "Clutch.............. C or Clutch" << endl;
  cout << endl;
  cout << "Open pause menu..... Esc" << endl;
  cout << endl;
}
