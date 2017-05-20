class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_UNSC_Units_Army
	{
		units[]											= {};
		weapons[]										= {};
		requiredVersion									= 0.1;
		requiredAddons[]								= {"OPTRE_Core","A3_Characters_F","A3_Characters_F_Common","A3_Weapons_F"};
	};
};

class CfgVehicles //This configures units and backpacks
{
	class Land;
	class Man: Land
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierWB: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	class OPTRE_UNSC_Soldier_Base: SoldierWB
	{
		class HitPoints: HitPoints
		{
			class HitFace: HitFace {};
			class HitNeck: HitNeck {};
			class HitPelvis : HitPelvis
			{
				armor = 1;
				passThrough = 0.5;
			};
			class HitAbdomen: HitAbdomen {};
			class HitDiaphragm: HitDiaphragm {};
			class HitChest: HitChest {};
			class HitArms: HitArms
			{
				armor = 1;
				passThrough = 0.5;
			};
			class HitHead: HitHead
			{
				armor = 1;
			};
			class HitBody: HitBody {};
			class HitHands: HitHands
			{
				armor = 1;
			};
			class HitLegs: HitLegs
			{
				armor = 1;
				passThrough = 0.5;
			};
		};
	};
	
	// BASE UNITS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_WDL: OPTRE_UNSC_Soldier_Base
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		vehicleClass													= "OPTRE_UNSC_Man_Army_W_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_WDL";
		model															= "\OPTRE_UNSC_Units\Army\uniform.p3d";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_shirt2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_woodland_co.paa"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 5;
			};
		};
		editorSubcategory = "OPTRE_EditorSubcategory_MenWDL";
	};
	class OPTRE_UNSC_Army_Soldier_M_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_M_WDL";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_pant2","attach_leftknee2","attach_rightknee2","attach_shirt2"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_L_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_L_WDL";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_pant2","attach_leftknee2","attach_rightknee2","attach_shirt1"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 3;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_DES: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		vehicleClass													= "OPTRE_UNSC_Man_Army_D_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_DES";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_shirt2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_desert_co.paa","OPTRE_UNSC_Units\Army\data\uniform_desert_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenDES";
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 5;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_M_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_M_DES";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant2","attach_shirt2"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_L_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_L_DES";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant2","attach_shirt1"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 3;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	
	class OPTRE_UNSC_Army_Soldier_TRO: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		vehicleClass													= "OPTRE_UNSC_Man_Army_T_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_TRO";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_shirt2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_co.paa","OPTRE_UNSC_Units\Army\data\uniform_tropic_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenTRO";
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 5;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_M_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_M_TRO";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_leftshin","attach_rightshin","attach_shirt2"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_L_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 1;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_L_TRO";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant2","attach_shirt1"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 3;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	
	class OPTRE_UNSC_Army_Soldier_ARI: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		vehicleClass													= "OPTRE_UNSC_Man_Army_A_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_ARI";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_shirt2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_desert_co.paa","OPTRE_UNSC_Units\Army\data\uniform_arid_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenARI";
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 5;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_M_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_M_ARI";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_leftshin","attach_rightshin","attach_shirt2"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_L_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_L_ARI";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant2","attach_shirt1"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 3;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	
	class OPTRE_UNSC_Army_Soldier_SNO: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		vehicleClass													= "OPTRE_UNSC_Man_Army_S_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_SNO";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_shirt2"}; //Determines what hiddenselections are enabled
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_snow_co.paa","OPTRE_UNSC_Units\Army\data\uniform_snow_co.paa"};
		editorSubcategory = "OPTRE_EditorSubcategory_MenSNO";
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 5;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_M_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_M_SNO";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant1","attach_leftshin","attach_rightshin","attach_shirt2"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	class OPTRE_UNSC_Army_Soldier_L_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		author															= "Article 2 Studios";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_L_SNO";
		hiddenSelections[] 												= {"camo1","camo2","insignia","clan","attach_leftshin","attach_rightshin","attach_leftshoulder","attach_rightshoulder","attach_leftshoulder2","attach_rightshoulder2","attach_leftknee2","attach_rightknee2","attach_pant2","attach_shirt1"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 3;
			};
			class HitHands: HitHands
			{
				armor = 3;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
		};
	};
	// BASE UNITS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS(MISC) START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_Medic: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Medic";
		icon 															= "iconManMedic";
		attendant 														= 1;
		vehicleClass													= "OPTRE_UNSC_Man_Army_class";
		uniformClass													= "OPTRE_UNSC_Army_Uniform_Medic";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_MED","OPTRE_UNSC_CH252_Helmet_MED","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_MED","OPTRE_UNSC_CH252_Helmet_MED","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		backpack 														= "OPTRE_ILCS_Rucksack_Medical";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		Items[]															= {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_MedKit"};
		RespawnItems[]													= {"OPTRE_Biofoam","OPTRE_Biofoam","OPTRE_MedKit"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke"};
		hiddenSelectionsTextures[] 										= {"OPTRE_UNSC_Units\Army\data\armor_medic_co.paa","OPTRE_UNSC_Units\Army\data\uniform_medic_co.paa"};
		class HitPoints: HitPoints
		{
			class HitArms: HitArms
			{
				armor = 6;
			};
			class HitHands: HitHands
			{
				armor = 6;
			};
			class HitLegs: HitLegs
			{
				armor = 6;
			};
		};
	};
	// UNITS(MISC) END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS(WDL) START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_Radioman_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AR_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_BR_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AT_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_Light_WDL: OPTRE_UNSC_Army_Soldier_L_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_BoonieHat_Army_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_BoonieHat_Army_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_AA_Specialist_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Engineer_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Army_Soldier_Breacher_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_Soldier_TeamLead_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_SquadLead_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_Grenadier_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_Soldier_Autorifleman_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Marksman_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Sniper_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_ForwardObserver_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_LaserWDLignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_LaserWDLignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Crewman_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Demolitions_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_EXP";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Army_Soldier_UAV_Op_WDL: OPTRE_UNSC_Army_Soldier_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Army_Soldier_Unarmed_WDL: OPTRE_UNSC_Army_Soldier_M_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_Soldier_Officer_WDL: OPTRE_UNSC_Army_Soldier_L_WDL
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_PatrolCap_Army_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_PatrolCap_Army_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
	};
	// UNITS(WDL) END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS(DES) START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_Radioman_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AR_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_BR_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AT_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_Light_DES: OPTRE_UNSC_Army_Soldier_L_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_BoonieHat_Army_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_BoonieHat_Army_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_AT_Specialist_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_AA_Specialist_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Engineer_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Army_Soldier_Breacher_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_Soldier_TeamLead_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_SquadLead_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_Grenadier_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_Soldier_Autorifleman_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Marksman_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Sniper_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_ForwardObserver_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_LaserDESignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_LaserDESignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Crewman_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Demolitions_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Army_Soldier_UAV_Op_DES: OPTRE_UNSC_Army_Soldier_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Army_Soldier_Unarmed_DES: OPTRE_UNSC_Army_Soldier_M_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_Soldier_Officer_DES: OPTRE_UNSC_Army_Soldier_L_DES
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_PatrolCap_Army_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_PatrolCap_Army_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
	};
	// UNITS(DES) END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS(TRO) START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_Radioman_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AR_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_BR_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AT_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_Light_TRO: OPTRE_UNSC_Army_Soldier_L_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_BoonieHat_Army_TRO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_BoonieHat_Army_TRO","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_AT_Specialist_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_AA_Specialist_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Engineer_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Army_Soldier_Breacher_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_Soldier_TeamLead_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_SquadLead_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_Grenadier_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_Soldier_Autorifleman_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Marksman_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Sniper_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_ForwardObserver_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_LaserDesignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_LaserDesignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Crewman_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Demolitions_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_EXP";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Army_Soldier_UAV_Op_TRO: OPTRE_UNSC_Army_Soldier_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Army_Soldier_Unarmed_TRO: OPTRE_UNSC_Army_Soldier_M_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_UNSC_CH252_Helmet_WDL","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_Soldier_Officer_TRO: OPTRE_UNSC_Army_Soldier_L_TRO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_PatrolCap_Army_TRO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_WDL","OPTRE_PatrolCap_Army_TRO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
	};
	// UNITS(TRO) END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS(ARI) START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_Radioman_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AR_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_BR_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AT_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_Light_ARI: OPTRE_UNSC_Army_Soldier_L_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_BoonieHat_Army_ARI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_BoonieHat_Army_ARI","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_AT_Specialist_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_AA_Specialist_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Engineer_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Army_Soldier_Breacher_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_Soldier_TeamLead_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_SquadLead_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_Grenadier_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_Soldier_Autorifleman_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Marksman_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Sniper_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_ForwardObserver_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_LaserDesignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_LaserDesignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Crewman_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Demolitions_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_EXP";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Army_Soldier_UAV_Op_ARI: OPTRE_UNSC_Army_Soldier_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Army_Soldier_Unarmed_ARI: OPTRE_UNSC_Army_Soldier_M_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_UNSC_CH252_Helmet_DES","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_Soldier_Officer_ARI: OPTRE_UNSC_Army_Soldier_L_ARI
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_PatrolCap_Army_ARI","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_DES","OPTRE_PatrolCap_Army_ARI","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
	};
	// UNITS(ARI) END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	
	// UNITS(SNO) START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Soldier_Radioman_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope 															= 2;
		scopeCurator													= 2;
		displayName														= "Radio Operator";
		backpack 														= "OPTRE_ANPRC_521_Black";
		weapons[] 														= {"OPTRE_M7","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AR_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (MA5)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_BR_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (BR55)";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_AT_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (AT)";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT","OPTRE_M41_Twin_HEAT","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Rifleman_Light_SNO: OPTRE_UNSC_Army_Soldier_L_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Rifleman (Light)";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_SNO","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_SNO","H_Watchcap_blk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_AT_Specialist_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AT Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AT";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_AA_Specialist_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "AA Specialist";
		backpack 														= "OPTRE_kitbag_rgr_AA";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put","OPTRE_M41_SSR_G"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_M41_Twin_HEAT_G","OPTRE_M41_Twin_HEAT_G","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManAT";
	};
	class OPTRE_UNSC_Army_Soldier_Engineer_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Engineer";
		engineer 														= 1;
		backpack 														= "OPTRE_Kitbag_rgr_ENG";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		icon 															= "iconManEngineer";
	};
	class OPTRE_UNSC_Army_Soldier_Breacher_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Breacher";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs"};
	};
	class OPTRE_UNSC_Army_Soldier_TeamLead_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Team Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","OPTRE_60Rnd_762x51_Mag_Tracer","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeBlue_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_SquadLead_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Squad Leader";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_36Rnd_95x40_Mag_Tracer","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManLeader";
	};
	class OPTRE_UNSC_Army_Soldier_Grenadier_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Grenadier";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5BGL_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5BGL_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell"};
	};
	class OPTRE_UNSC_Army_Soldier_Autorifleman_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M73","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M73","Throw","Put"};
		magazines[] 													= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		icon				 											= "iconManMG";
	};
	class OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Assistant Autorifleman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_MA5B_AC","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_MA5B_AC","Throw","Put"};
		magazines[] 													= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
		respawnMagazines[] 												= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Marksman_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Designated Marksman";
		backpack 														= "B_Kitbag_rgr";
		weapons[] 														= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M392_DMR_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Sniper_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Sniper";
		weapons[] 														= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_SRS99D_SC_LS","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_4Rnd_145x114_APFSDS_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_ForwardObserver_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Forward Observer";
		backpack 														= "B_Kitbag_rgr";
		Items[]															= {"OPTRE_Biofoam","Item_LaserSNOignator"};
		RespawnItems[]													= {"OPTRE_Biofoam","Item_LaserSNOignator"};
		weapons[] 														= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_BR55HB_ScopedRifle","OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
		respawnMagazines[] 												= {"OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_36Rnd_95x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","Laserbatteries","APERSTripMine_Wire_Mag","ClaymoreDirectionalMine_Remote_Mag"};
	};
	class OPTRE_UNSC_Army_Soldier_Crewman_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Crewman";
		weapons[] 														= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M7","OPTRE_M6G_SF","Throw","Put"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_SNO","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnlinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_SNO","H_HelmetCrew_B","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		magazines[] 													= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_60Rnd_5x23mm_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
	};
	class OPTRE_UNSC_Army_Soldier_Demolitions_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Demolitions Expert";
		engineer 														= 1;
		backpack														= "OPTRE_Kitbag_rgr_EXP";
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","APERSMine_Range_Mag","APERSMine_Range_Mag","APERSMine_Range_Mag"};
		icon 															= "iconManExplosive";
	};
	class OPTRE_UNSC_Army_Soldier_UAV_Op_SNO: OPTRE_UNSC_Army_Soldier_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "UAV Operator";
		backpack 														= "B_UAV_01_backpack_F";
		uavHacker 														= 1;
		weapons[] 														= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		respawnWeapons[] 												= {"OPTRE_M45","Throw","Put","OPTRE_M6G_SF"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		respawnMagazines[] 												= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_6Rnd_8Gauge_Pellets","OPTRE_6Rnd_8Gauge_Slugs","OPTRE_M9_Frag","OPTRE_M9_Frag","OPTRE_M2_Smoke","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Green"};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG","B_UavTerminal"};
	};
	class OPTRE_UNSC_Army_Soldier_Unarmed_SNO: OPTRE_UNSC_Army_Soldier_M_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Unarmed";
		weapons[]														= {"Throw","Put"};
		respawnWeapons[]												= {"Throw","Put"};
		Items[]															= {"OPTRE_Biofoam"};
		RespawnItems[]													= {"OPTRE_Biofoam"};
		magazines[]														= {};
		respawnMagazines[]												= {};
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_UNSC_CH252_Helmet_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_NVG"};
	};
	class OPTRE_UNSC_Army_Soldier_Officer_SNO: OPTRE_UNSC_Army_Soldier_L_SNO
	{
		dlc = "OPTRE";
		scope															= 2;
		scopeCurator													= 2;
		displayName														= "Officer";
		linkedItems[] 													= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_PatrolCap_Army_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		respawnLinkedItems[] 											= {"OPTRE_UNSC_M52_Vest_SNO","OPTRE_PatrolCap_Army_SNO","ItemMap","ItemCompass","ItemWatch","ItemRadio","OPTRE_Biofoam","OPTRE_NVG"};
		weapons[] 														= {"OPTRE_M6G_SF","Throw","Put"};
		respawnWeapons[] 												= {"OPTRE_M6G_SF","Throw","Put"};
		magazines[] 													= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		respawnMagazines[]	 											= {"OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_8Rnd_127x40_Mag","OPTRE_M2_Smoke","OPTRE_M2_Smoke_Orange","OPTRE_M2_Smoke_Green"};
		icon 															= "iconManOfficer";
	};
	// UNITS(SNO) END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};



class cfgWeapons
{
	class U_B_CombatUniform_mcam;
	class UniformItem;
	class V_PlateCarrier1_rgr;
	class VestItem;
	class HeadgearItem;
	class H_HelmetB;
	class NVGoggles;
	
	class OPTRE_NVG: NVGoggles
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Neural Implant Vision Enhancement";
		modelOptics 									= "";
		class ItemInfo
		{
			type = 616;
			hmdType = 0;
			uniformModel = "";
			modelOff = "";
			mass = 1;
		};
	};
		
	// UNIFORMS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_Army_Uniform_WDL: U_B_CombatUniform_mcam
	{
		dlc = "OPTRE";
		scope											= 2;
		author											= "Article 2 Studios";
		displayName										= "Army BDU [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_WDL";
			containerClass								= "Supply40";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Uniform_M_WDL: OPTRE_UNSC_Army_Uniform_WDL
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Medium) [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_M_WDL";
			mass										= 40;
		};
	};
	class OPTRE_UNSC_Army_Uniform_L_WDL: OPTRE_UNSC_Army_Uniform_WDL
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Light) [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_L_WDL";
			mass										= 30;
		};
	};
	
	class OPTRE_UNSC_Army_Uniform_DES: OPTRE_UNSC_Army_Uniform_WDL
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_DES";
			containerClass								= "Supply40";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Uniform_M_DES: OPTRE_UNSC_Army_Uniform_DES
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Medium) [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_M_DES";
			mass										= 40;
		};
	};
	class OPTRE_UNSC_Army_Uniform_L_DES: OPTRE_UNSC_Army_Uniform_DES
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Light) [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_L_DES";
			mass										= 30;
		};
	};
	
	class OPTRE_UNSC_Army_Uniform_TRO: OPTRE_UNSC_Army_Uniform_WDL
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU [Tropic]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_TRO";
			containerClass								= "Supply40";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Uniform_M_TRO: OPTRE_UNSC_Army_Uniform_TRO
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Medium) [Tropic]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_M_TRO";
			mass										= 40;
		};
	};
	class OPTRE_UNSC_Army_Uniform_L_TRO: OPTRE_UNSC_Army_Uniform_TRO
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Light) [Tropic]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_wdl.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_L_TRO";
			mass										= 30;
		};
	};
	
	class OPTRE_UNSC_Army_Uniform_ARI: OPTRE_UNSC_Army_Uniform_WDL
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU [Arid]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_ARI";
			containerClass								= "Supply40";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Uniform_M_ARI: OPTRE_UNSC_Army_Uniform_ARI
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Medium) [Arid]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_M_ARI";
			mass										= 40;
		};
	};
	class OPTRE_UNSC_Army_Uniform_L_ARI: OPTRE_UNSC_Army_Uniform_ARI
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Light) [Arid]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_des.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_L_ARI";
			mass										= 30;
		};
	};
	
	class OPTRE_UNSC_Army_Uniform_SNO: OPTRE_UNSC_Army_Uniform_WDL
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU [Snow]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno_hvy.paa";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_SNO";
			containerClass								= "Supply40";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	class OPTRE_UNSC_Army_Uniform_M_SNO: OPTRE_UNSC_Army_Uniform_SNO
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Medium) [Snow]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno_hvy.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_M_SNO";
			mass										= 40;
		};
	};
	class OPTRE_UNSC_Army_Uniform_L_SNO: OPTRE_UNSC_Army_Uniform_SNO
	{
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName										= "Army BDU (Light) [Snow]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_sno.paa";
		class ItemInfo: ItemInfo
		{
			uniformClass								= "OPTRE_UNSC_Army_Soldier_L_SNO";
			mass										= 30;
		};
	};
	class OPTRE_UNSC_Army_Uniform_Medic: U_B_CombatUniform_mcam
	{
		dlc = "OPTRE";
		scope											= 2;
		author											= "Article 2 Studios";
		displayName										= "Medical BDU";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\army_uniform_med.paa";
		model											= "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel								= "-";
			uniformClass								= "OPTRE_UNSC_Army_Soldier_Medic";
			containerClass								= "Supply40";
			mass										= 50;
			modelSides[] 								= {6};
		};
	};
	// UNIFORMS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
		
	// VESTS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_M52_Vest_Base: V_PlateCarrier1_rgr //The vest base class
	{	
		dlc = "OPTRE";
		scope 											= 0;
		author											= "Article 2 Studios";
		displayName  									= "-";
		picture 										= "";
		model   										= "\OPTRE_UNSC_Units\Army\vest.p3d";
		class ItemInfo: VestItem 
		{
			uniformModel 								= "\OPTRE_UNSC_Units\Army\vest.p3d";
			//armor 										= 40;
			containerClass 								= "Supply160";
			mass 										= 80;
			passThrough 								= 0.15;
			modelSides[] 								= {6};
			class HitpointsProtectionInfo
			{
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 28;
					passThrough = 0.1;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 28;
					passThrough = 0.1;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 28;
					passThrough = 0.1;
				};
				class Body
				{
					hitpointName = "HitBody";
					armor = 28;
					passThrough = 0.1;
				};
			};
		};
	};
	class OPTRE_UNSC_M52_Vest_WDL: OPTRE_UNSC_M52_Vest_base
	{	
		dlc = "OPTRE";
		scope											= 2;
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl.paa";
		displayName  									= "M52 Body Armor [Woodland]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"};
		};
	};		
	class OPTRE_UNSC_M52_Vest_Vacuum_WDL: OPTRE_UNSC_M52_Vest_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl_vac.paa";
		displayName  									= "M52[V] Body Armor [Woodland]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"};
		class ItemInfo: ItemInfo
		{
			vesttype									= "rebreather";
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName	= "HitNeck"; // Defined in the man base class
					armor		= 8; // Armor value of this hitpoint
					passThrough	= 0.5; // Penetration resistance of the hitpoint
				};
				class Arms
				{
					hitpointName	= "HitArms";
					armor		= 8;
					passThrough	= 0.5;
				};
				class Chest 
				{
					hitpointName	= "HitChest"; 
					armor = 28;
					passThrough	= 0.1; 
				};
				class Diaphragm
				{
					hitpointName	= "HitDiaphragm";
					armor = 28;
					passThrough	= 0.1;
				};
				class Abdomen
				{
					hitpointName	= "HitAbdomen"; 
					armor = 28;
					passThrough	= 0.1;
				};
				class Body
				{
					hitpointName	= "HitBody";
					armor = 28;
					passThrough	= 0.1;
				};
			};
		};
	};	
	class OPTRE_UNSC_M52_Vest_Sniper_WDL: OPTRE_UNSC_M52_Vest_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_wdl_gil.paa";
		displayName  									= "M52[S] Body Armor [Woodland]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","camo4","insignia","clan","attach_neck"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","camo4","insignia","clan","attach_neck"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","OPTRE_UNSC_Units\Army\data\pouches_olive_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
		};
	};	
	
	class OPTRE_UNSC_M52_Vest_DES: OPTRE_UNSC_M52_Vest_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_des.paa";
		displayName  									= "M52 Body Armor [Desert]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"};
		};
	};		
	class OPTRE_UNSC_M52_Vest_Vacuum_DES: OPTRE_UNSC_M52_Vest_Vacuum_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_des_vac.paa";
		displayName  									= "M52[V] Body Armor [Desert]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa"};
		};
	};	
	class OPTRE_UNSC_M52_Vest_Sniper_DES: OPTRE_UNSC_M52_Vest_DES
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_des_gil.paa";
		displayName  									= "M52[S] Body Armor [Desert]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","camo4","insignia","clan","attach_neck"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa","optre_unsc_units\army\data\ghillie_desert_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","camo4","insignia","clan","attach_neck"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","OPTRE_UNSC_Units\Army\data\pouches_brown_co.paa","optre_unsc_units\army\data\ghillie_desert_co.paa"};
		};
	};
	
	class OPTRE_UNSC_M52_Vest_SNO: OPTRE_UNSC_M52_Vest_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_sno.paa";
		displayName  									= "M52 Body Armor [Snow]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_pack","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		};
	};		
	class OPTRE_UNSC_M52_Vest_Vacuum_SNO: OPTRE_UNSC_M52_Vest_Vacuum_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_sno_vac.paa";
		displayName  									= "M52[V] Body Armor [Snow]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_pack","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		};
	};	
	
	class OPTRE_UNSC_M52_Vest_MED: OPTRE_UNSC_M52_Vest_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_med.paa";
		displayName  									= "M52 Body Armor [Medic]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_neck","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		};
	};		
	class OPTRE_UNSC_M52_Vest_Vacuum_MED: OPTRE_UNSC_M52_Vest_Vacuum_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_vest_med_vac.paa";
		displayName  									= "M52[V] Body Armor [Medic]";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_knife","attach_ghillie"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\vest_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa","OPTRE_UNSC_Units\Army\data\pouches_black_co.paa"};
		};
	};	
	// VESTS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

	// HELMETS START
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
	class OPTRE_UNSC_CH252_Helmet_Base: H_HelmetB
	{	
		dlc = "OPTRE";
		scope   										= 0;
		author											= "Article 2 Studios";
		displayName    									= "-";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		model     										= "\OPTRE_UNSC_Units\Army\helmet.p3d";
		hiddenSelections[]   							= {"camo1","camo2"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"};
		class ItemInfo: HeadgearItem 
		{
			uniformModel   								= "\OPTRE_UNSC_Units\Army\helmet.p3d";
			//armor   									= 8;
			mass   										= 40;
			modelSides[]   								= {6};
			passThrough   								= 0.25;
			hiddenSelections[]   						= {"camo1","camo2"};
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 10;
					passThrough = 0.5;
				};
			};
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_WDL: OPTRE_UNSC_CH252_Helmet_Base
	{	
		dlc = "OPTRE";
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		hiddenSelections[]   							= {"camo1","camo2","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_Balaclava_WDL: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		dlc = "OPTRE";
		scope   										= 2;
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet (Balaclava) [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl.paa";
		hiddenSelections[]   							= {"camo1","camo2","attach_face","attach_rangefinder","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","attach_face","attach_rangefinder","attach_ghillie"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_Vacuum_WDL: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252[V] Helmet [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl_vac.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"};
		class ItemInfo: ItemInfo 
		{
			//armor   									= 10;
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa"}; /// what texture is going to be used
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.5;
				};
			};
		};
	};	
	class OPTRE_UNSC_CH252_Helmet_Sniper_WDL: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252[S] Helmet [Woodland]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_wdl_gil.paa";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_face"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_co.paa","OPTRE_UNSC_Units\Army\data\addons_co.paa","optre_unsc_units\army\data\ghillie_woodland_co.paa"}; /// what texture is going to be used
		};
	};		
	
	class OPTRE_UNSC_CH252_Helmet_DES: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_des.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa"}; /// what texture is going to be used
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_Balaclava_DES: OPTRE_UNSC_CH252_Helmet_DES
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet (Balaclava) [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_des.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa"}; /// what texture is going to be used
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_Vacuum_DES: OPTRE_UNSC_CH252_Helmet_DES
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252[V] Helmet [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_DES_vac.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa"};
		class ItemInfo: ItemInfo 
		{
			//armor   									= 10;
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa"}; /// what texture is going to be used
		};
	};	
	class OPTRE_UNSC_CH252_Helmet_Sniper_DES: OPTRE_UNSC_CH252_Helmet_DES
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252[S] Helmet [Desert]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_DES_gil.paa";
		hiddenSelections[]   							= {"camo1","camo2","camo3","insignia","clan","attach_face"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","optre_unsc_units\army\data\ghillie_desert_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","camo3","insignia","clan","attach_face"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_desert_co.paa","OPTRE_UNSC_Units\Army\data\addons_desert_co.paa","optre_unsc_units\army\data\ghillie_desert_co.paa"}; /// what texture is going to be used
		};
	};
	
	class OPTRE_UNSC_CH252_Helmet_SNO: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet [Snow]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_sno.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		};
	};	
	class OPTRE_UNSC_CH252_Helmet_Balaclava_SNO: OPTRE_UNSC_CH252_Helmet_SNO
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet (Balaclava) [Snow]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_sno.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_Vacuum_SNO: OPTRE_UNSC_CH252_Helmet_SNO
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252[V] Helmet [Snow]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_sno_vac.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"};
		class ItemInfo: ItemInfo 
		{
			//armor   									= 10;
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_snow_co.paa","OPTRE_UNSC_Units\Army\data\addons_snow_co.paa"}; /// what texture is going to be used
		};
	};	
	
	class OPTRE_UNSC_CH252_Helmet_MED: OPTRE_UNSC_CH252_Helmet_WDL
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet [Medic]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_med.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"};
		class ItemInfo: ItemInfo 
		{
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_face","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};	
	class OPTRE_UNSC_CH252_Helmet_Balaclava_MED: OPTRE_UNSC_CH252_Helmet_MED
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252 Helmet (Balaclava) [Medic]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_med_vac.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_face","attach_chin"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"};
		class ItemInfo: ItemInfo
		{
			//armor   									= 10;
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_face","attach_chin"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};		
	class OPTRE_UNSC_CH252_Helmet_Vacuum_MED: OPTRE_UNSC_CH252_Helmet_MED
	{	
		dlc = "OPTRE";
		author											= "Article 2 Studios";
		displayName    									= "CH252[V] Helmet [Medic]";
		picture   										= "\OPTRE_UNSC_Units\Army\icons\Army_Helmet_med_vac.paa";
		hiddenSelections[]   							= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"};
		hiddenSelectionsTextures[]   					= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"};
		class ItemInfo: ItemInfo
		{
			//armor   									= 10;
			hiddenSelections[]   						= {"camo1","camo2","insignia","clan","attach_rangefinder","attach_ghillie","attach_balaclava"}; /// what selection in model could have different textures
			hiddenSelectionsTextures[]   				= {"OPTRE_UNSC_Units\Army\data\helmet_medic_co.paa","OPTRE_UNSC_Units\Army\data\addons_medic_co.paa"}; /// what texture is going to be used
		};
	};	
	class H_MilCap_Blue;
	class H_Booniehat_khk;
	class OPTRE_PatrolCap_Army_WDL: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "Patrol Cap [Woodland]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\cappatrol_woodland_co.paa"};
	};
	class OPTRE_BoonieHat_Army_WDL: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "Boonie Hat [Woodland]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\booniehat_woodland_co.paa"};
	};	
	class OPTRE_PatrolCap_Army_DES: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "Patrol Cap [Desert]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\cappatrol_Desert_co.paa"};
	};
	class OPTRE_BoonieHat_Army_DES: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "Boonie Hat [Desert]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\booniehat_Desert_co.paa"};
	};
	class OPTRE_PatrolCap_Army_TRO: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "Patrol Cap [Tropic]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\cappatrol_Tropic_co.paa"};
	};
	class OPTRE_BoonieHat_Army_TRO: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "Boonie Hat [Tropic]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\booniehat_Tropic_co.paa"};
	};
	class OPTRE_PatrolCap_Army_ARI: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "Patrol Cap [Arid]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\cappatrol_Arid_co.paa"};
	};
	class OPTRE_BoonieHat_Army_ARI: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "Boonie Hat [Arid]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\booniehat_Arid_co.paa"};
	};
	class OPTRE_PatrolCap_Army_SNO: H_MilCap_blue 
	{
		dlc = "OPTRE";
		displayname 									= "Patrol Cap [Snow]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\cappatrol_Snow_co.paa"};
	};
	class OPTRE_BoonieHat_Army_SNO: H_Booniehat_khk 
	{
		dlc = "OPTRE";
		displayname 									= "Boonie Hat [Snow]";
		hiddenselectionstextures[] 						= {"OPTRE_UNSC_Units\Army\data\booniehat_Snow_co.paa"};
	};
	// HELMETS END
	// --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
};