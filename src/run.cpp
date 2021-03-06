/*
 *  run.cpp - Run application source file
 *  Written by Ercan Ersoy.
 */

#include <dosshell.hpp>
#include <run.hpp>

// Show file manager function
void show_run(menuitem *, void *)
{
   // Input of command line
   char* command = (char *)popup_input(reinterpret_cast<unsigned char const*>(kittengets(12, 0, "Run")), reinterpret_cast<unsigned char const*>(kittengets(12, 1, "Command to Run:")), reinterpret_cast<unsigned char const*>(""));

   if(command)  // If command is not blank
   {
      // Run command
      command_run(command);
   }
}
