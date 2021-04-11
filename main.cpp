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
#include <fstream>
#include <chrono>
#include <iomanip>
#include <thread>
#include "stage.h"
#include "player.h"
#include "controls.h"
using namespace std;

Stage NewhouseBridge;
Player PlayerOne;
Controls ControlsConfig;

int main()
{
  string OptMain;
  string OptLocation;
  string OptStage;
  string OptCar;
  string OptRally;
  string OptInput;
  bool RunningMain = true;
  bool RunningStage = true;
  chrono::duration<double> PenaltyTime (2);
  chrono::duration<double> TotalPenaltyTime;

  cout << "If in doubt... FLAT OUT." << endl;
  cout << endl;
  cout << "Welcome to TextRally." << endl;
  cout << endl;
  cout << "Type rally to choose a Stage." << endl;
  cout << "Type controls to view commands." << endl;
  cout << "Type exit to exit TextRally." << endl;
  cout << endl;

  while (RunningMain == true)
  {
    cout << "> ";

    getline(cin, OptMain);

    if (OptMain == "rally")
    {
      cout << endl;
      cout << "Choose location:" << endl;
      cout << endl;
      cout << "1..... Catamarca Province, Argentina" << endl;
      cout << "2..... Monaro, Australia" << endl;
      cout << "3..... Jamsa, Finland" << endl;
      cout << "4..... Baumholder, Germany" << endl;
      cout << "5..... Argolis, Greece" << endl;
      cout << "6..... Monte Carlo, Monaco" << endl;
      cout << "7..... Hawkes Bay, New Zealand" << endl;
      cout << "8..... Leczna County, Poland" << endl;
      cout << "9..... Perth and Kinross, Scotland" << endl;
      cout << "10.... Ribadelles, Spain" << endl;
      cout << "11.... Varmland, Sweden" << endl;
      cout << "12.... New England, USA" << endl;
      cout << "13.... Powys, Wales" << endl;
      cout << endl;
      cout << "> ";

      getline(cin, OptLocation);

      if (OptLocation == "9")
      {
        cout << endl;
        cout << "Choose Stage:" << endl;
        cout << endl;
        cout << "Route                                     Distance (km)" << endl;
        cout << "-------------------------------------------------------" << endl;
        cout << "1..... Newhouse Bridge................... 12.86" << endl;
        cout << "2..... South Morningside................. 12.58" << endl;
        cout << "3..... Annbank Station................... 7.77" << endl;
        cout << "4..... Rosebank Farm..................... 7.16" << endl;
        cout << "5..... Old Butterstone Muir.............. 5.82" << endl;
        cout << "6..... Glencastle Farm................... 5.25" << endl;
        cout << "7..... Newhouse Bridge Reverse........... 12.86" << endl;
        cout << "8..... South Morningside Reverse......... 12.58" << endl;
        cout << "9..... Annbank Station Reverse........... 7.77" << endl;
        cout << "10.... Rosebank Farm Reverse............. 7.16" << endl;
        cout << "11.... Old Butterstone Muir Reverse...... 5.82" << endl;
        cout << "12.... Glencastle Farm Reverse........... 5.25" << endl;
        cout << endl;
        cout << "> ";

        getline(cin, OptStage);

        cout << endl;

        if (OptStage == "1")
        {
          cout << "What car would you like to drive?" << endl;
          cout << endl;
          cout << "> ";

          getline(cin, OptCar);

          PlayerOne.Car = OptCar;

          cout << endl;
          cout << "Location: Perth and Kinross, Scotland." << endl;
          cout << "Time:     05:55" << endl;
          cout << "Stage:    Newhouse Bridge" << endl;
          cout << endl;
          cout << "The Weather is CLEAR." << endl;
          cout << "The road surface is OPTIMAL." << endl;
          cout << endl;
          cout << endl;
          cout << "Your co-driver, PHIL, will call out the notes for the upcoming turn(s)" << endl;
          cout << "and any other information of importance." << endl;
          cout << "When you see the notes, type your inputs to drive the car." << endl;
          cout << "The faster you type your inputs the quicker you will finish." << endl;
          cout << endl;
          cout << "Type menu to return to Main Menu." << endl;
          cout << "Type controls to view commands." << endl;
          cout << "Type start to begin the rally." << endl;

          cout << endl;

          while (RunningStage == true)
          {
            cout << "> ";

            getline(cin, OptRally);

            if (OptRally == "menu")
            {
              RunningStage = false;
            }
            else if (OptRally == "controls")
            {
              ControlsConfig.ShowControls();
            }
            else if (OptRally == "start")
            {
              for (int i = 5; i > 0; i--)
              {
                cout << i << "... ";

                //std::this_thread::sleep_for(std::chrono::seconds(1));
              }

              cout << endl;

              std::this_thread::sleep_for(std::chrono::seconds(1));

              cout << "GO" << endl;
              cout << endl;
              cout << NewhouseBridge.PaceNotes[0][0] << endl;
              cout << endl;
              cout << "> ";

              auto StartS1 = chrono::steady_clock::now();

              getline(cin, OptInput);

              auto EndS1 = chrono::steady_clock::now();

              cout << endl;

              if (OptInput != NewhouseBridge.PaceNotes[0][1] || OptInput != NewhouseBridge.PaceNotes[0][2])
              {
                TotalPenaltyTime = TotalPenaltyTime + PenaltyTime;
              }

              cout << NewhouseBridge.PaceNotes[1][0] << endl;
              cout << endl;
              cout << "> ";

              auto StartS2 = chrono::steady_clock::now();

              getline(cin, OptInput);

              auto EndS2 = chrono::steady_clock::now();

              cout << endl;

              if (OptInput != NewhouseBridge.PaceNotes[1][1] || OptInput != NewhouseBridge.PaceNotes[1][2])
              {
                TotalPenaltyTime = TotalPenaltyTime + PenaltyTime;
              }

              cout << NewhouseBridge.PaceNotes[2][0] << endl;
              cout << endl;
              cout << "> ";

              auto StartS3 = chrono::steady_clock::now();

              getline(cin, OptInput);

              auto EndS3 = chrono::steady_clock::now();

              cout << endl;

              if (OptInput != NewhouseBridge.PaceNotes[2][1] || OptInput != NewhouseBridge.PaceNotes[2][2])
              {
                TotalPenaltyTime = TotalPenaltyTime + PenaltyTime;
              }

              cout << NewhouseBridge.PaceNotes[3][0] << endl;
              cout << endl;
              cout << "> ";

              auto StartS4 = chrono::steady_clock::now();

              getline(cin, OptInput);

              auto EndS4 = chrono::steady_clock::now();

              cout << endl;

              if (OptInput != NewhouseBridge.PaceNotes[3][1] || OptInput != NewhouseBridge.PaceNotes[3][2])
              {
                TotalPenaltyTime = TotalPenaltyTime + PenaltyTime;
              }

              if (OptInput == "TRBDRTLBLRTRHRTR")
              {
                cout << "We've gone in to quick and crashed." << endl;
                cout << endl;

                cout << "> ";

                getline(cin, OptInput);

                if (OptInput == "Reverse, Reverse, No! Come on car!")
                {
                  cout << endl;
                  cout << "...You're wrecking the car." << endl;
                  cout << endl;

                  RunningStage = false;
                }
              }

              if (RunningStage == true)
              {
                cout << "...Over finish." << endl;
                cout << endl;

                chrono::duration<double> S1Time = EndS1 - StartS1;
                chrono::duration<double> S2Time = EndS2 - StartS2;
                chrono::duration<double> S3Time = EndS3 - StartS3;
                chrono::duration<double> S4Time = EndS4 - StartS4;
                chrono::duration<double> TotalTime = S1Time + S2Time + S3Time + S4Time;
                TotalTime = TotalTime + TotalPenaltyTime;

                cout << fixed;
                cout << setprecision(3);

                cout << "Sector 1: " << S1Time.count() << endl;
                cout << "Sector 2: " << S2Time.count() << endl;
                cout << "Sector 3: " << S3Time.count() << endl;
                cout << "Sector 4: " << S4Time.count() << endl;
                cout << endl;
                cout << "Penalty Time: " << TotalPenaltyTime.count() << endl;
                cout << endl;
                cout << "Total time: " << TotalTime.count() << endl;
                cout << endl;

                RunningStage = false;
              }
            }
          }
        }
      }
    }
    else if (OptMain == "controls")
    {
      ControlsConfig.ShowControls();
    }
    else if (OptMain == "exit")
    {
      RunningMain = false;
    }
  }
  return 0;
}
