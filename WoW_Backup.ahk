#NoEnv  ; Recommended for performance and compatibility with future AutoHotkey releases.
#Warn  ; Recommended for catching common errors.
#Persistent
SendMode Input  ; Recommended for new scripts due to its superior speed and reliability.
SetWorkingDir %A_ScriptDir%  ; Ensures a consistent starting directory.

;manages the backing up and restoration of WoW for Work/Home/Trish

BackupString := "-r -mx9 -m0=PPMd -mmem=1024m -mo=32 *Wowhead_* Accountant* ACP* Altoholic* Ara_Broker_Tradeskills* Ark* AutoConfirmRoll* Bag* Bartender* bindings-cache* Blizzard_ClientSavedVariables* chat-cache* DataStore* EveryGoldToBanker* FB_* Fishing* Genie* GLottery* LiteMount* macros-cache* Out* Over* Pawn* Postal* Rarity* Scrap* sct* SpellFlash* Tidy* Titan* Trade* Tycoon* Zygor* AddOns.txt -xr!*.bak"

WorkDropBox := "C:\Users\Trish\Dropbox\WoW_Backup\"
HomeDropBox := "D:\aTrish\Dropbox\WoW_Backup\"
WoWBackupFile := "WoW_Backup.7z"

HomeWoWDir := "C:\Program Files (x86)\World of Warcraft\WTF\Account\MENDINGHEART518"
WorkWoWDir := "C:\Program Files (x86)\World of Warcraft\WTF\Account\MENDINGHEART518"

Home7z := "D:\Program Files\7-Zip\7z.exe"
Work7z := "C:\Program Files\7-Zip\7z.exe"

Homeusername = Trish Da Trooper
Workusername = Trish


while Workusername = A_Username
{
;wait for WoW to open, excluding titles that have "Launcher" in it to circumvent WoW bootstraper.
WinWait, World of Warcraft AHK_class GxWindowClass,,,Launcher

;If the backup from Work exists, then extract the archive into WoW directory.
if FileExist(WorkDropBox . WoWBackupFile)
{
RunWait, "%Work7z%" x "%WorkDropBox%%WoWBackupFile%" -o"%WorkWoWDir%" -aoa

;Sends the Old backup (from work) to the recycle bin, this is necessary so when you close out of WoW..........
FileRecycle %WorkDropBox%%WoWBackupFile%
}

SetWorkingDir %WorkWoWDir%
WinWaitClose
Run "%Work7z%" a "%WorkDropBox%%WoWBackupFile%" %BackupString%
}
;}

While A_Username = Homeusername
{

;wait for WoW to open, excluding titles that have "Launcher" in it to circumvent WoW bootstraper.
WinWait, World of Warcraft AHK_class GxWindowClass,,,Launcher

;If the backup from Work exists, then extract the archive into WoW directory.
if FileExist(HomeDropBox . WoWBackupFile)
{
RunWait, "%Home7z%" x "%HomeDropBox%%WoWBackupFile%" -o"%HomeWoWDir%" -aoa

;Sends the Old backup (from work) to the recycle bin, this is necessary so when you close out of WoW..........
FileRecycle %HomeDropBox%%WoWBackupFile%
}

SetWorkingDir %HomeWoWDir%
WinWaitClose
Run "%Home7z%" a "%HomeDropBox%%WoWBackupFile%" %BackupString%
}
