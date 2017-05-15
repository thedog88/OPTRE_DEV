class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_CAA_Units
	{
		units[] 																				= {""};
		weapons[] 																				= {""};																								
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_CAA_Units.pbo";
	};
};

class CfgGroups
{
	class Indep
	{
		class OPTRE_PD
		{
			dlc = "OPTRE";
			name = "Colonial Police";
			class Infantry
			{
				name = "Infantry";
				class OPTRE_Groups_CAA_PD_Patrol1
				{
					dlc = "OPTRE";
					name = "Patrol 1";
					side = 2;
					faction = "OPTRE_PD";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_CAA_PD_Patrol2
				{
					dlc = "OPTRE";
					name = "Patrol 2";
					side = 2;
					faction = "OPTRE_PD";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer2";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_CAA_PD_Patrol3
				{
					dlc = "OPTRE";
					name = "Patrol 3";
					side = 2;
					faction = "OPTRE_PD";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer3";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer3";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class OPTRE_Groups_CAA_PD_CombatDispatch
				{
					dlc = "OPTRE";
					name = "Combat Dispatch";
					side = 2;
					faction = "OPTRE_PD";
					rarityGroup = 0.3;
					class Unit0
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer3";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer2";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer3";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "OPTRE_PD_Soldier_Officer3";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
			};
		};
	};
};