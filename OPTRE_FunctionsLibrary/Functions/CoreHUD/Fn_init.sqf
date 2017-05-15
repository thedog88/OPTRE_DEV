/*
OPTRE_Fnc_HudInit  

Author: Big_Wilk

Description: Adds Ehs and key binds for huds

Command: Call 
Return: Nothing  
Syntax: N/A
Parameters: 
Media: None 

Example1:

Result: 

Example2:

Result: 

MP: Client, auto run post start
*/

// Vars

if isDedicated exitWith {};

OPTRE_HUD_PATH = "OPTRE_Hud\";

OPTRE_Hud_On = false;
OPTRE_Hud_LowLight_On = false; 
OPTRE_Hud_UnFullyLoaded = true; 
OPTRE_Hud_On_Helmet = ""; 
OPTRE_HUD_CompassWanted = true; 
OPTRE_LHD_Function = 1;

setAperture -1;

OPTRE_HUD_PIP_NVGTI = 0;
OPTRE_LHD_PIPSel = 0;
OPTRE_LHD_PIPMode = 0; 

OPTRE_Hud_RadarMode = 2; // 	0 group only 	1: all units known by side + side
OPTRE_Hud_UnitSize = 0; // init. 
OPTRE_Hud_RadarScale = [] call OPTRE_Fnc_MapScale;; // 50m is 0.01 100m is 0.02 on altis. 

OPTRE_Hud_ColorScheme_Pictures = [0,0,0,.5];
OPTRE_Hud_ColorScheme_Text = [0,0,0,.5];
OPTRE_Hud_ColorScheme_Frame = [1,0.5,0,1];

OPTRE_HUD_PersonalWaypoints = [];
OPTRE_HUD_PersonalBecon = [0,0,0];

OPTRE_HUD_CurrentObjective_Wanted = true; 
OPTRE_HUD_PersonalBecons_Wanted = true;
OPTRE_HUD_GroupWaypointsWanted = true;

// Health Bar
player addEventHandler ["HandleDamage",{
	if (OPTRE_Hud_On AND cameraView != "EXTERNAL") then {301 cutRsc [OPTRE_Hud_HealthCurrent,"PLAIN",-1, false];};
}];
player addEventHandler ["HandleHeal",{
	if (OPTRE_Hud_On AND cameraView != "EXTERNAL") then {0 = [] spawn OPTRE_fnc_HealCheck;};
}];

// Ammo + Main 
player addEventHandler ["Fired",{
	//if (OPTRE_Hud_On AND cameraView != "EXTERNAL") then {OPTRE_HUD_UPDATEALL_Throw = true; 302 cutRsc [OPTRE_Hud_AmmoCurrent,"PLAIN",0, false];};
	0 = [false] call OPTRE_Fnc_SetAmmoCounterState;
}];

// Killed
player addEventHandler ["Killed",{
	OPTRE_Hud_On = false;
}];
player addEventHandler ["Respawn",{
	setAperture -1;
}];

// Weapon Rest 
player addEventHandler ["WeaponDeployed",{

}];
player addEventHandler ["WeaponRested",{

}];

// Main 
{
	player addEventHandler [_x,{
		if OPTRE_Hud_On then {OPTRE_HUD_UPDATEALL_Main = true;};
		if (OPTREB_HUD_HelmetOnClass != (headgear player) AND OPTREB_HUD_HelmetOnClass != (goggles player)) then {
			OPTRE_Hud_On = false;
			setAperture -1;
		}; 
	}];
} forEach ["put","take","InventoryClosed"];

// Key binds 
0 = [] execVM "OPTRE_FunctionsLibrary\Scripts\Keys.sqf"; // needs to wait for other cba stuff to be initialised 