# Dreadnought Revival Patch
Credits: gwog :3 (main dev), CorrM (Cheat Gear SDK Generator), nohbdy (DLL shim generation script)
## What is this?
This is a c++ project that allows users to play the game Dreadnought without a connection to the (now deactivated) official servers. You must already own the game on Steam to use this patch. This is heavily WIP.
## Currently Supported
- Tutorial
- Multiplayer TDM, everyone will use the same loadout
## Known Issues
- If you respawn while the death recap is still onscreen, it will get stuck onscreen
## How to install (Client)
- Install the latest version of Dreadnought on Steam
- Go to the latest release on the right side of the GitHub page, and download the "Client.zip" file.
- Extract the Client.zip file
- Right click on Dreadnought in Steam
- Select Manage > Browse Local Files
- In the root game directory, replace the "DreadnoughtLauncher.exe" file with the one from the client zip file
- Navigate to DreadGame > DreadGame > Binaries > Win64
- Add the "Dreadnought.dll" and "wer.dll" files to the Win64 folder
- Play Dreadnought in Steam
- Press "OK" when the EasyAntiCheat popup opens
- Press F1 to toggle the overlay window
- To play the tutorial:
	- Press the "Launch Tutorial" button in the overlay
- To play on a server:
	- Enter the server's IP in the text box in the overlay
	- Press the "Connect" button in the overlay
## How to install (Server)
- Install the latest version of Dreadnought on Steam
- Go to the latest release on the right side of the GitHub page, and download the �Server.zip� file.
- Extract the Server.zip file
- Right click on Dreadnought in Steam
- Select Manage > Browse Local Files
- In the root game directory, replace the DreadnoughtLauncher.exe file with the one from the client zip file
- Navigate to DreadGame > DreadGame > Binaries > Win64
- Add the Dreadnought.dll and wer.dll files to the Win64 folder
- Create a file named "cfg.txt" in the Win64 folder
	- On the first line, put "open " (ensure there's a space after open), and the name of the map you'd like to open
	- On the second line, put the path to the loadout asset you'd like to have all players use
	- On the third line, put the number of bots to spawn on team one (8 max)
	- On the fourth line, put the number of bots to spawn on team two (8 max)
	- On the fifth line, put the bot difficulty from 0-2, where 0 is easiest and 2 is hardest
- Ensure port 7777 is open and forwarded
- Run the game in Steam
- Click "OK" to the EasyAntiCheat popup
- Wait roughly 2 minutes for the server startup sequence to complete
	- You will see text referencing the IpNetDriver when the startup sequence is complete
- Give people your public IP, and let them connect through the client patch
## Building (Client)
- Open the .sln file in Visual Studio 2022
- Select the "Client" target in the upper left
- Press Ctrl+Shift+B to build
## Building (Server)
- Open the .sln file in Visual Studio 2022
- Select the "Server" target in the upper left
- Press Ctrl+Shift+B to build