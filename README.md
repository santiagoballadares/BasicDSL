# BasicDSL
Basic DSL program

DSL Setup with MinGW32:

1) First, download SDL headers and binaries from the SDL website (https://www.libsdl.org/download-2.0.php). 
   Scroll Down to the Development Libraries section and download the MinGW32 development library.
   
   Open gz archive and there should be a *.tar archive inside.
   Open the *.tar and there should be a folder inside of that.
   Open the folder and it'll contain a bunch of subfolders.
   
2) Copy the contents of the lib subfolder to the MinGW lib folder. The MinGW lib folder should be at C:\MinGW\lib.

3) After that, open the include subfolder in the archive and extract the folder named "SDL" to the MinGW include 
   folder, which should be at C:\MinGW\include.
   
   Note: Some versions of SDL won't have a folder named "SDL" in the archive's include subfolder, but just a 
   bunch of header files. To get around this simply create a folder named "SDL" in your MinGW include folder 
   and copy all the header files from the archive to that folder you made.
   
4) Now take the SDL.dll from the archive (it should be inside the bin subfolder) and extract it. You're going 
   to put this in the same directory as your exe when you compile it.

   Alternatively, you can copy SDL.dll to C:\WINDOWS\SYSTEM32 so your SDL app will find SDL.dll even if it's 
   not in the same directory. If you're using a 64bit version of Windows, you'll want to put the dll in 
   C:\Windows\SysWOW64.

   The problem with this method is if you have multiple SDL apps that use different versions of SDL, you'll 
   have version conflicts. If you have SDL 1.2.8 in SYSTEM32 when the app uses 1.2.13 you're going to run into 
   problems. Generally you want to have your SDL.dll in the same directory as your executable developing and 
   you'll always want to have SDL.dll in the same directory as the exe when distributing your app.
   
5) Now start up Eclipse and start a new C++ project.

6) In the project properties, go to the C/C++ Build menu, then the Libraries submenu.

7) In the Libraries submenu click add and paste in: mingw32
   
8) Then do the same with: SDLmain; and: SDL

   Note: It has to follow this exact order or it won't work.
   
9) Finally, include the SDL library as: #include "SDL/SDL.h"


Note: Alternatively, if the SDL library cannot be found, keep all DSL files in a separate folder and add 
references to the relevant files (inlcudes and libraries) in the Project Properties -> C/C++ Build -> Settings. 
And include the SDL library as: #include <SDL/SDL.h>.
   
