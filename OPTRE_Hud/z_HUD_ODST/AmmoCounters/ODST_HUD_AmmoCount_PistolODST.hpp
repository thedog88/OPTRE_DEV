class OPTRE_ODST_HUD_AmmoCount_PistolODST
{
	//onLoad = "";
	
	idd = 8000; 
	duration = 99999; 
	
	class controls {
	
		class RscPicture_1200: OPTRE_HUD_RscPicture
		{
			idc = 1200;
			text = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
			onLoad = "_array = (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.95]]); (_this select 0) ctrlSetTextColor [ (_array select 0), (_array select 1), (_array select 2),  ((_array select 3) / 3)];";
	x = 0.891875 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.011 * safezoneH;
		};
		class RscPicture_123: OPTRE_HUD_RscProgress
		{
			idc = 1200;
			//text = "OPTRE_Hud\Data\Hud_ODST_1\hud_healthBar.paa";
			texture = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
	x = 0.891875 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.011 * safezoneH;
			colorText[] = {1,1,1,1};
			onLoad = "uinamespace setvariable ['OPTRE_HUD_AmmoCountCurrent_1',(_this select 0)]; (_this select 0) ctrlSetTextColor (profileNamespace getVariable [""OPTRE_ODST_HUDColourTextNEW"",[1,0.5,0,.8]]);";
			colorBar[] = {1,1,1,1};
		};	

	};
	
};

/*
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Wiqufa)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
	x = 0.87125 * safezoneW + safezoneX;
	y = 0.862858 * safezoneH + safezoneY;
	w = 0.061875 * safezoneW;
	h = 0.0175931 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by big_wilk, v1.063, #Suvovu)
////////////////////////////////////////////////////////

class RscPicture_1200: RscPicture
{
	idc = 1200;
	text = "\OPTRE_Hud\data\Bullets\ODST_Pistol.paa";
	x = 0.891875 * safezoneW + safezoneX;
	y = 0.885 * safezoneH + safezoneY;
	w = 0.0670312 * safezoneW;
	h = 0.011 * safezoneH;
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////

*/