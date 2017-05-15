class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_Ins_Units
	{
		units[] 																				= {""};
		weapons[] 																				= {""};																								
		requiredVersion 																		= 0.1;
		requiredAddons[] 																		= {"OPTRE_Core"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_Ins_Units.pbo";
	};
};

class CfgGroups
{
	class East
	{
		class OPTRE_Ins //OPTRE_Ins
		{
			dlc = "OPTRE";
			name = "Insurrectionists";
			class Infantry_URF //Air, Mechanized, Motorized, Armored, SpecOps, Support
			{
				name = "Infantry (URF)";
				dlc = "OPTRE";
				class OPTRE_Ins_URF_Inf_Sentry
				{
					name = "Sentry";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Rifleman_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Grenadier";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				
				class OPTRE_Ins_URF_Inf_RifleSquad
				{
					name = "Rifle Squad";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Grenadier";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Autorifleman";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Marksman";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_TeamLead";
						rank = "CORPORAL";
						position[] = {-20,-5,0};
					};
				};
				
				class OPTRE_Ins_URF_Inf_Fireteam
				{
					name = "Fireteam";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Autorifleman";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Grenadier";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Rifleman_AT";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class OPTRE_Ins_URF_Inf_CmdSquad
				{
					name = "Command Squad";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_SquadLead";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_TeamLead";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Radioman";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Medic";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Rifleman_AR";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
				};
				
				class OPTRE_Ins_URF_Inf_AntiTank
				{
					name = "Anti-Tank Team";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_AT_Specialist";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_AT_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_TeamLead";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class OPTRE_Ins_URF_Inf_AntiAir
				{
					name = "Anti-Air Team";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_TeamLead";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_AA_Specialist";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_AA_Specialist";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Observer";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
				class OPTRE_Ins_URF_Inf_Sniper
				{
					name = "Sniper Team";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Sniper";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_URF_Observer";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
				
			};	
			
			class Infantry_ER //Air, Mechanized, Motorized, Armored, SpecOps, Support
			{
				name = "Infantry (ER)";
				dlc = "OPTRE";
				class OPTRE_Ins_ER_Inf_Patrol
				{
					name = "Militia Patrol";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Guerilla_AR";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Deserter_GL";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				
				class OPTRE_Ins_ER_Inf_MSquad
				{
					name = "Militia Squad";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_MAdvisor";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Terrorist";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Deserter_GL";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Insurgent_BR";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Militia_MG";
						rank = "PRIVATE";
						position[] = {-10,-5,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Farmer";
						rank = "PRIVATE";
						position[] = {15,-5,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Assassin";
						rank = "PRIVATE";
						position[] = {-15,-5,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Rebel_AT";
						rank = "PRIVATE";
						position[] = {20,-5,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Guerilla_AR";
						rank = "CORPORAL";
						position[] = {-20,-5,0};
					};
				};
				
				class OPTRE_Ins_ER_Inf_Group
				{
					name = "Militia Group";
					side = 0;
					faction = "OPTRE_Ins";
					rarityGroup = 0.3;
					dlc = "OPTRE";
					class Unit0
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_MAdvisor";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Militia_MG";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Insurgent_BR";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "OPTRE_Ins_ER_Guerilla_AR";
						rank = "PRIVATE";
						position[] = {10,-5,0};
					};
				};
				
			};
		};
	};
};