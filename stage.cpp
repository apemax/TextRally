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

#include "stage.h"
using namespace std;

Stage::Stage()
{
  PaceNotes[0][0] = "6 Left Extra Long, Caution Turn 1 Right, Uphill...";
  PaceNotes[0][1] = "TUUULBLDDRHCTRU";
  PaceNotes[0][2] = "T U U U L B L D D R H C T R U";
  PaceNotes[1][0] = "...Opens 4 Right Extra Long, Tightens 3 Extra Long, Keep in Tightens over Small Crest.";
  PaceNotes[1][1] = "TRURTBDRBRTR";
  PaceNotes[1][2] = "T R U R T B D R B R T R";
  PaceNotes[2][0] = "3 Left Tightens over Crest, Into 3 Left Very Long Tightens, Into 5 Right Very Long Tightens.";
  PaceNotes[2][1] = "TLLDLTRUR";
  PaceNotes[2][2] = "T L L D L T R U R";
  PaceNotes[3][0] = "4 Right Tightens Ditch Outside, Into 4 Left, 40, Slowing 3 Right and Turn Square Right, Don't Cut.";
  PaceNotes[3][1] = "TRBDRTLBLRTRHBRTR";
  PaceNotes[3][2] = "T R B D R T L B L R T R H B R T R";
}
