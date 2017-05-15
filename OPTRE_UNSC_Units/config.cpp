class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_UNSC_Units
	{
		units[] 																				= {""};
		weapons[] 																				= {""};																								
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_UNSC_Units.pbo";
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
		dlc = "OPTRE";
		scope															= 1;
		scopeCurator													= 0;
		side 															= 1;		
		faction															= "OPTRE_UNSC";
		genericNames													= "NATOMen"; /// Standard names for lads of NATO (and European civils)
		identityTypes[] 												= {"LanguageENG_F","Miller","Kerry","EPA_B_Northgate","EPA_B_Hardy","EPA_B_James","EPA_B_McKay","LanguageGRE_F","Head_Greek","Head_African","Head_Euro","Head_Asian","Head_NATO", "G_IRAN_default"}; //G_IRAN_Default removes those pesky wacky glasses.  Everything else here serves to keep the UNSC diverse.  
		uniformAccessories[]											= {};
		nakedUniform 													= "U_BasicBody";
		modelSides[]   													= {6};
		displayName														= "-";
		canCarryBackPack 												= 1;
		oxygenCapacity 													= 80;
		portrait 														= "";
		picture 														= "";
		icon 															= "iconMan";
		accuracy 														= 2.3;
		sensitivity 													= 3;
		camouflage 														= 1.4;
		minFireTime 													= 7;
		primaryAmmoCoef 												= 0.4;
		secondaryAmmoCoef 												= 0.2;
		handgunAmmoCoef 												= 0.1;
		cost 															= 100000;
		class EventHandlers;
		author															= "Article 2 Studios";
		class Wounds /// changes material of skin according to damage
		{
			tex[] = {};
			mat[] = {
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",	

				"A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_white_old.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",	
				
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
				"A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"					
			};
		};

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

		armor					= 2; // keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural			= 0.5; // divide all damage taken to total hit point, either directly or through hit point passThrough coefficient, must be adjusted for each model to achieve consistent total damage results
		explosionShielding		= 0.05; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
	};
};

class CfgGroups
{
	class West
	{
		class OPTRE_UNSC
		{
			dlc = "OPTRE";
			name = "UNSCDF";
			class Infantry_Army_WDL
			{
				name = "Infantry (Army Woodland)";
				class OPTRE_Groups_UNSC_Sentry_Army_WDL
				{
					dlc = "OPTRE";
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Fireteam_Army_WDL
				{
					dlc = "OPTRE";
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_WDL";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Squad_Army_WDL
				{
					dlc = "OPTRE";
					name = "Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_WDL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_WDL";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_WDL";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_WDL";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_WDL";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Weapons_Squad_Army_WDL
				{
					dlc = "OPTRE";
					name = "Weapons Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_WDL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_WDL";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_WDL";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_WDL";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_WDL";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_WDL";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Marksman_WDL";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Demolitions_WDL";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Grenadier_WDL";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Sniper_Team_Army_WDL
				{
					dlc = "OPTRE";
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Sniper_WDL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_WDL";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class OPTRE_Groups_UNSC_Command_Team_Army_WDL
				{
					dlc = "OPTRE";
					name = "Command Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Officer_WDL";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_WDL";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Radioman_WDL";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Infantry_Army_DES
			{
				dlc = "OPTRE";
				name = "Infantry (Army Desert)";
				class OPTRE_Groups_UNSC_Sentry_Army_DES
				{
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_DES";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_DES";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Fireteam_Army_DES
				{
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_DES";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Squad_Army_DES
				{
					name = "Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_DES";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_DES";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_DES";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_DES";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_DES";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Weapons_Squad_Army_DES
				{
					name = "Weapons Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_DES";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_DES";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_DES";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_DES";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_DES";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_DES";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_DES";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_DES";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Marksman_DES";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Demolitions_DES";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Grenadier_DES";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Sniper_Team_Army_DES
				{
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Sniper_DES";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_DES";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class OPTRE_Groups_UNSC_Command_Team_Army_DES
				{
					name = "Command Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Officer_DES";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_DES";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Radioman_DES";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Infantry_Army_ARI
			{
				dlc = "OPTRE";
				name = "Infantry (Army Arid)";
				class OPTRE_Groups_UNSC_Sentry_Army_ARI
				{
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_ARI";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_ARI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Fireteam_Army_ARI
				{
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_ARI";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Squad_Army_ARI
				{
					name = "Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_ARI";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_ARI";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_ARI";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_ARI";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_ARI";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Weapons_Squad_Army_ARI
				{
					name = "Weapons Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_ARI";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_ARI";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_ARI";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_ARI";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_ARI";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_ARI";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_ARI";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_ARI";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Marksman_ARI";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Demolitions_ARI";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Grenadier_ARI";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Sniper_Team_Army_ARI
				{
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Sniper_ARI";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_ARI";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class OPTRE_Groups_UNSC_Command_Team_Army_ARI
				{
					name = "Command Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Officer_ARI";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_ARI";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Radioman_ARI";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Infantry_Army_TRO
			{
				dlc = "OPTRE";
				name = "Infantry (Army Tropic)";
				class OPTRE_Groups_UNSC_Sentry_Army_TRO
				{
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_TRO";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_TRO";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Fireteam_Army_TRO
				{
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_TRO";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Squad_Army_TRO
				{
					name = "Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_TRO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_TRO";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_TRO";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_TRO";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_TRO";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Weapons_Squad_Army_TRO
				{
					name = "Weapons Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_TRO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_TRO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_TRO";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_TRO";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_TRO";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_TRO";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_TRO";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_TRO";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Marksman_TRO";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Demolitions_TRO";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Grenadier_TRO";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Sniper_Team_Army_TRO
				{
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Sniper_TRO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_TRO";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class OPTRE_Groups_UNSC_Command_Team_Army_TRO
				{
					name = "Command Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Officer_TRO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_TRO";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Radioman_TRO";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Infantry_Army_SNO
			{
				dlc = "OPTRE";
				name = "Infantry (Army Snow)";
				class OPTRE_Groups_UNSC_Sentry_Army_SNO
				{
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_SNO";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_Light_SNO";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Fireteam_Army_SNO
				{
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_SNO";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Squad_Army_SNO
				{
					name = "Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_SNO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_SNO";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_SNO";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Assist_Autorifleman_SNO";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Rifleman_AT_SNO";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Weapons_Squad_Army_SNO
				{
					name = "Weapons Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_SquadLead_SNO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_SNO";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_SNO";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AT_Specialist_SNO";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_SNO";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_SNO";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_AA_Specialist_SNO";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_TeamLead_SNO";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Marksman_SNO";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Demolitions_SNO";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Grenadier_SNO";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Sniper_Team_Army_SNO
				{
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Sniper_SNO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_SNO";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class OPTRE_Groups_UNSC_Command_Team_Army_SNO
				{
					name = "Command Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Officer_SNO";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_ForwardObserver_SNO";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Radioman_SNO";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Army_Soldier_Medic";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Infantry_Marine
			{
				dlc = "OPTRE";
				name = "Infantry (Marines)";
				class OPTRE_Groups_UNSC_Sentry_Marine
				{
					name = "Sentry";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Rifleman_Light";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Rifleman_Light";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Fireteam_Marine
				{
					name = "Fireteam";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Autorifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Assist_Autorifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Squad_Marine
				{
					name = "Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Corpsman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Autorifleman";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Assist_Autorifleman";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Autorifleman";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Assist_Autorifleman";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Autorifleman";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Assist_Autorifleman";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Weapons_Squad_Marine
				{
					name = "Weapons Squad";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Corpsman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_AT_Specialist";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_AT_Specialist";
						rank = "PRIVATE";
						position[] = {15,-10,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_AT_Specialist";
						rank = "PRIVATE";
						position[] = {20,-10,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {25,-5,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_AA_Specialist";
						rank = "PRIVATE";
						position[] = {30,-10,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_AA_Specialist";
						rank = "PRIVATE";
						position[] = {35,-10,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_AA_Specialist";
						rank = "PRIVATE";
						position[] = {40,-10,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_TeamLead";
						rank = "CORPORAL";
						position[] = {45,-5,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Marksman";
						rank = "PRIVATE";
						position[] = {50,-10,0};
					};
					class Unit12
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Demolitions";
						rank = "PRIVATE";
						position[] = {55,-10,0};
					};
					class Unit13
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Grenadier";
						rank = "PRIVATE";
						position[] = {60,-10,0};
					};
				};
				class OPTRE_Groups_UNSC_Sniper_Team_Marine
				{
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Sniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_ForwardObserver";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class OPTRE_Groups_UNSC_Command_Team_Marine
				{
					name = "Command Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Officer";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_ForwardObserver";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Radioman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Marine_Soldier_Corpsman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
			};
			class Infantry_Airforce
			{
				dlc = "OPTRE";
				name = "Infantry (Air Force)";
				class OPTRE_Groups_UNSC_Flight_Crew_Airforce
				{
					name = "Flight Crew";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Airforce_Soldier_Airman";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_Airforce_Soldier_Airman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
			};
			class SF_ODST
			{
				dlc = "OPTRE";
				name = "Special Forces (ODST)";
				class OPTRE_Groups_UNSC_Team_ODST
				{
					name = "Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_TeamLeader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Paramedic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Automatic_Rifleman";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Marksman";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Team_Scout_ODST
				{
					name = "Recon Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_TeamLeader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Paramedic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Scout";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Scout_AT";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Scout_Sniper";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Team_Demo_ODST
				{
					name = "Demo Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_TeamLeader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Paramedic";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_DemolitionsExpert";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Scout_AT";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_DemolitionsExpert";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
				};
				class OPTRE_Groups_UNSC_Team_Sniper_ODST
				{
					name = "Sniper Team";
					side = 1;
					faction = "OPTRE_UNSC";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_TeamLeader";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_UNSC_ODST_Soldier_Scout_Sniper";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
			};
		};
	};
};