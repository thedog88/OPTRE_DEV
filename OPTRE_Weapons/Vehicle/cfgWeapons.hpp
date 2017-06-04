class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class HMG_127;
	class MGun;
	class LMG_coax;
	class RocketPods;
	class autocannon_35mm;
	class cannon_120mm;
	class RCWSOptics;
	class M134_minigun;
	class missiles_ASRAAM;
	class missiles_titan;
	class missiles_SCALPEL;
	class missiles_DAR;
	class missiles_DAGR;
	class Mk82BombLauncher;
	class GBU12BombLauncher;
	class gatling_20mm;
	class gatling_30mm;
	class Cannon_30mm_Plane_CAS_02_F;
	class autocannon_40mm_CTWS;
	
	class OPTRE_M41_LAAG: HMG_127
	{
		class GunParticles
        {
			class effect1
			{
				positionName 				= "konec hlavne";
				directionName 				= "Usti hlavne";
				effectName 					= "MachineGunCloud";
            };
            class effect2
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunEject";
            };
            class effect3
            {
				positionName 				= "machinegun_eject_pos";
				directionName 				= "machinegun_eject_dir";
				effectName 					= "MachineGunCartridge2";
            };
        };
		selectionFireAnim 					= "zasleh";
		displayName							= "M41 LAAG";
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		showAimCursorInternal 				= 1;
		magazineReloadTime 					= 4;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
        modes[] = {"FullAuto","close","short","medium"};
        class FullAuto: MGun
        {
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"OPTRE_Weapons\Vehicle\data\sounds\M41LAAG_1.wss",1,1,1500};
				soundBegin[] = {"begin1",1};
			};
            reloadTime = 0.06;
            dispersion = 0.001;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class OPTRE_102R_Turret: missiles_titan
	{
		displayName							= "102mm ATGM Launcher";
		magazines[] 						= {"OPTRE_3Rnd_102mm_rockets"};
		aiDispersionCoefY 					= 15.0;
        aiDispersionCoefX 					= 20.0;
		canLock								= 0;
		magazineReloadTime 					= 5;
		showAimCursorInternal 				= 1;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
		sounds[] = {"StandardSound"};
		class StandardSound
		{
			begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss",1,1,1500};
			soundBegin[] = {"begin1",1};
		};
	};
	class OPTRE_M79_MLRS: missiles_ASRAAM
	{
		displayName							= "M79 MLRS";
		magazines[] 						= {"OPTRE_6Rnd_ASGM2_rockets"};
		showAimCursorInternal 				= 1;
		magazineReloadTime 					= 5;
	};
	class OPTRE_missiles_Anvil1: missiles_DAR
	{
		displayName							= "'ANVIL I' Rocket Pods";
		magazines[] 						= {"OPTRE_16Rnd_Anvil1_missiles","OPTRE_32Rnd_Anvil1_missiles"};
		showAimCursorInternal 				= 1;
		reloadTime							= 1;
		magazineReloadTime 					= 5;
		cursor 								= "EmptyCursor";
		cursorAim 							= "rocket";
		ballisticsComputer 					= 4;
	};
	class OPTRE_missiles_Anvil2: missiles_DAGR
	{
		displayName							= "'ANVIL II' Missile Pods";
		magazines[] 						= {"OPTRE_12Rnd_Anvil2_missiles","OPTRE_24Rnd_Anvil2_missiles"};
		showAimCursorInternal 				= 1;
		reloadTime							= 0.1;
		magazineReloadTime 					= 5;
		weaponLockDelay 					= 5;
		canlock 							= 2;
		cursor 								= "EmptyCursor";
		cursorAim 							= "rocket";
		ballisticsComputer 					= 4;
	};
	class OPTRE_missiles_Anvil3: missiles_DAGR
	{
		displayName							= "'ANVIL III' LG Missile Pods";
		magazines[] 						= {"OPTRE_12Rnd_Anvil3_missiles","OPTRE_24Rnd_Anvil3_missiles"};
		showAimCursorInternal 				= 1;
		reloadTime							= 0.2;
		magazineReloadTime 					= 5;
		weaponLockDelay 					= 4;
		canlock 							= 2;
		cursor 								= "EmptyCursor";
		cursorAim 							= "rocket";
		ballisticsComputer 					= 4;
	};
	class OPTRE_missiles_ASGM2: missiles_ASRAAM
	{
		displayName							= "ASGM-2 'Argent V' AA Missiles";
		magazines[] 						= {"OPTRE_6Rnd_ASGM2_rockets", "OPTRE_12Rnd_ASGM2_rockets", "OPTRE_48Rnd_ASGM2_rockets"};
		maxRange = 5000;
		weaponLockDelay 					= 1.5;
	};
	class OPTRE_missiles_ASGM10: OPTRE_missiles_ASGM2
	{
		displayName							= "ASGM-10 'Argent X' AA Missiles";
		magazines[] 						= {"OPTRE_4Rnd_ASGM10_missiles", "OPTRE_8Rnd_ASGM10_missiles", "OPTRE_12Rnd_ASGM10_missiles"};
		maxRange = 10000;
		weaponLockDelay 					= 3;
	};
	class OPTRE_missiles_C2GMLS: OPTRE_missiles_ASGM2
	{
		displayName							= "Class-2 Guided Munitions Launch System";
		magazines[] 						= {"OPTRE_12Rnd_C2GMLS_missiles", "OPTRE_2Rnd_C2GMLS_missiles"};
		maxRange = 4000;
		weaponLockDelay 					= 2;
	};
	class OPTRE_missiles_Scorpion: missiles_titan
	{
		displayName							= "AGM-90B 'Scorpion' AT";
		magazines[] 						= {"OPTRE_4Rnd_Scorpion_missiles", "OPTRE_8Rnd_Scorpion_missiles", "OPTRE_12Rnd_Scorpion_missiles","OPTRE_16Rnd_Scorpion_missiles"};
		maxRange = 5000;
		weaponLockDelay 					= 2.5;
	};
	class OPTRE_missiles_Jackknife: missiles_SCALPEL
	{
		displayName							= "AGM-502 'Jack Knife' Laser Guided";
		magazines[] 						= {"OPTRE_1Rnd_Jackknife_missile", "OPTRE_2Rnd_Jackknife_missile", "OPTRE_3Rnd_Jackknife_missile"};
		maxRange = 10000;
		weaponLockDelay 					= 1;
	};
	class OPTRE_missiles_Shiva_nuke: missiles_SCALPEL
	{
		displayName							= "'SHIVA' TACTICAL NUCLEAR MISSILE";
		magazines[] 						= {"OPTRE_2Rnd_Shiva_nuke_missile"};
		maxRange = 10000;
		weaponLockDelay 					= 1;
		ballisticsComputer 					= 4;
	};
	class OPTRE_M68_GAUSS: cannon_120mm
	{
		cursor 								= "EmptyCursor";
		cursorAim 							= "cannon";
		nameSound  							= "cannon";
		reloadSound[] 						= {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",31.622776,1,10};
		minRange 							= 5;
		minRangeProbab 						= 0.7;
		midRange 							= 1200;
		midRangeProbab 						= 0.7;
		maxRange 							= 2500;
		maxRangeProbab 						= 0.1;
		initFov 							= 0.75;
		minFov 								= 0.375;
		maxFov 								= 1.1;
		reloadTime 							= 1.3;
		magazineReloadTime 					= 12;
		autoReload 							= 1;
		ballisticsComputer					= 1;
		canLock 							= 0;
		autoFire 							= 0;
		showAimCursorInternal 				= 0;
		displayName 						= "M68 ALIM";
		magazines[] 						= {"OPTRE_3Rnd_ALIM_Gauss_slugs"};
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"OPTRE_Weapons\Vehicle\data\sounds\Gauss_1.wss",2.5,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 3;
			magazineReloadTime = 6;
			autoReload = 0;
			ballisticsComputer = 0;
			canLock = 0;
			autoFire = 0;
			dispersion = 0;
		};
		class GunParticles
		{
			class effect1
			{
				positionName 				= "konec hlavne";
				directionName				= "Usti hlavne";
				effectName			 		= "MachineGunCloud";
            };
		};
	};
	class OPTRE_MAC_Cannon: OPTRE_M68_GAUSS
	{
		cursor 								= "EmptyCursor";
		cursorAim 							= "cannon";
		nameSound  							= "cannon";
		reloadSound[] 						= {"A3\sounds_f\vehicles\armor\noises\reload_tank_cannon_2",30,1,10};
		minRange 							= 250;
		minRangeProbab 						= 0.25;
		midRange 							= 800;
		midRangeProbab 						= 0.75;
		maxRange 							= 2400;
		maxRangeProbab 						= 0.25;
		reloadTime 							= 30;
		magazineReloadTime 					= 30;
		autoReload 							= 1;
		showAimCursorInternal 				= 0;
		displayName 						= "Magnetic Accelerator Cannon";
		magazines[] 						= {"OPTRE_1Rnd_MAC_Rounds"};
	};
	class OPTRE_M230: gatling_20mm
	{
		displayName							= "M230 Autocannon";
		displayNameShort					= "M230";
		magazines[] 						= {"OPTRE_100Rnd_50mm_HE","OPTRE_100Rnd_50mm_APFSDS"};
        modes[] 							= {"FullAuto","close","short","medium"};
        class FullAuto: MGun
        {
            reloadTime = 0.275;
            dispersion = 0;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
		class close: FullAuto
		{
			burst = 3;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 1;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class OPTRE_M638: gatling_20mm
	{
		ballisticsComputer 					= 4;
		displayName							= "M638 Autocannon";
		displayNameShort					= "M638";
        modes[] = {"FullAuto","close","short","medium"};
        class FullAuto: MGun
        {
            reloadTime = 0.1;
            dispersion = 0.001;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class OPTRE_M370: gatling_30mm
	{
		ballisticsComputer 					= 4;
		displayName							= "M370 Autocannon";
		displayNameShort					= "M370";
        modes[] = {"FullAuto","close","short","medium"};
        class FullAuto: MGun
        {
            reloadTime = 0.125;
            dispersion = 0.001;
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
        };
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
	};
	class OPTRE_M9109: M134_minigun
	{
		displayName = "M9109 ASW/AC 50mm";
		magazines[] = {"OPTRE_2500Rnd_50mm_HE"};
		holdsterAnimValue = 0;
		ballisticsComputer = 4;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Usti hlavne1R";
		muzzleEnd = "konec hlavne1R";
		selectionFireAnim = "Usti hlavne1R";
		autoFire = 1;
		reloadTime = 0.035;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "konec hlavne1R";
				directionName = "Usti hlavne1R";
			};
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
			reloadTime = 0.035;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\gatling\gatling3",1.5,1,2000};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 50;
			minRangeProbab = 0.6;
			midRange = 800;
			midRangeProbab = 0.6;
			maxRange = 1800;
			dispersion = 0.005;
			showToPlayer = 1;
		};
	};
	class OPTRE_M9109_Turret: OPTRE_M9109
	{
		shotFromTurret = 1;
		class GunParticles
		{
			class Effect1
			{
				effectName = "MachineGun1";
				positionName = "konec hlavne1R";
				directionName = "Usti hlavne1R";
			};
			class Effect2
			{
				effectName = "MachineGun2";
				positionName = "konec hlavne2L";
				directionName = "Usti hlavne2L";
			};
		};
	};
	class OPTRE_GUA23A: M134_minigun
	{
		displayName = "GUA-23/A Heavy Autocannon";
		magazines[] = {"OPTRE_2000Rnd_20mm_HEIAP"};
		holdsterAnimValue = 0;
		ballisticsComputer = 4;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		nameSound = "cannon";
		shotFromTurret = 0;
		muzzlePos = "Usti hlavne1R";
		muzzleEnd = "konec hlavne1R";
		selectionFireAnim = "Usti hlavne1R";
		autoFire = 1;
		reloadTime = 0.1;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "konec hlavne1R";
				directionName = "Usti hlavne1R";
			};
		};
		modes[]=
		{
			"LowROF"
		};
		class LowROF: Mode_FullAuto
		{
			displayName = "$STR_A3_CFGWEAPONS_CANNON_30MM";
			reloadTime = 0.1;
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\30mm\30mm_st_01",1,1,2000};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 50;
			minRangeProbab = 0.6;
			midRange = 800;
			midRangeProbab = 0.6;
			maxRange = 1800;
			dispersion = 0.005;
			showToPlayer = 1;
		};
	};
	class OPTRE_110mm_Gatling: Cannon_30mm_Plane_CAS_02_F
	{
		displayName = "GAU-80/AW Rotary Cannon";
		magazines[] = {"OPTRE_600Rnd_110mm"};
		holdsterAnimValue = 0;
		ballisticsComputer = 4;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "mg";
		nameSound = "cannon";
		shotFromTurret = true;
		muzzlePos = "Cannon_muzzleflash";
		muzzleEnd = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";
		autoFire = 1;
		reloadTime = 0.12;
		class GunParticles
		{
			class Effect
			{
				effectName = "MachineGun2";
				positionName = "Cannon_barrel_start";
				directionName = "Cannon_barrel_end";
			};
		};
		class LowROF: Mode_FullAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\gatling\gatling5",1.75,1,2500};
				soundBegin[] = {"begin1",1};
			};
			reloadTime = 0.085;
			soundContinuous = 0;
			flash = "gunfire";
			flashSize = 0.1;
			recoil = "Empty";
			aiDispersionCoefX = 8;
			aiDispersionCoefY = 8;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			minRange = 50;
			minRangeProbab = 0.6;
			midRange = 800;
			midRangeProbab = 0.6;
			maxRange = 1800;
			maxRangeProbab = 0.2;
			dispersion = 0.006;
			showToPlayer = 1;
			shotFromTurret = true;
		};
	};
	class OPTRE_120mm_M310E: cannon_120mm
	{
		displayName = "M310E 120mm Ventral Cannon";
		magazines[] = {"OPTRE_120Rnd_120mm"};
		holdsterAnimValue = 1;
		ballisticsComputer = 2;
		canLock = 1;
		cursor = "EmptyCursor";
		cursorAim = "cannon";
		nameSound = "cannon";
		shotFromTurret = true;
		muzzlePos = "Cannon_muzzleflash";
		muzzleEnd = "Cannon_barrel_end";
		selectionFireAnim = "Cannon_muzzleflash";
		autoFire = 0;
		class player: Mode_SemiAuto
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Cannons\cannon_5",3.1622777,1,1500};
				soundBegin[] = {"begin1",1};
			};
			soundContinuous = 0;
			reloadTime = 2;
			magazineReloadTime = 10;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 0;
			dispersion = 0.00025;
		};
	};
	class OPTRE_bomblauncher_500lb: Mk82BombLauncher
	{
		displayName							= "Mk208A 500lb Bomb";
		ballisticsComputer					= 8;
		magazines[] 						= {"OPTRE_12Rnd_500lb_bomb", "OPTRE_24Rnd_500lb_bomb", "OPTRE_36Rnd_500lb_bomb", "OPTRE_48Rnd_500lb_bomb"};
	};
	class OPTRE_bomblauncher_1000lb: OPTRE_bomblauncher_500lb
	{
		displayName							= "Mk208B 1000lb Bomb";
		magazines[] 						= {"OPTRE_12Rnd_1000lb_bomb", "OPTRE_24Rnd_1000lb_bomb", "OPTRE_36Rnd_1000lb_bomb"};
	};
	class OPTRE_bomblauncher_2000lb: OPTRE_bomblauncher_500lb
	{
		displayName							= "Mk208C 2000lb Bomb";
		magazines[] 						= {"OPTRE_8Rnd_2000lb_bomb", "OPTRE_16Rnd_2000lb_bomb"};
	};
	class OPTRE_bomblauncher_cluster: OPTRE_bomblauncher_500lb
	{
		//Broken currently.
		displayName							= "CBU-901 Cluster Bomb";
		magazines[] 						= {"OPTRE_12Rnd_Cluster_bomb"};
	};
	class OPTRE_bomblauncher_minelayer: OPTRE_bomblauncher_500lb
	{
		//Broken currently.
		displayName							= "CBU-870 Mine Dispersal Bomb";
		magazines[] 						= {"OPTRE_12Rnd_scattermine_bomb"};
	};
	class OPTRE_bomblauncher_GBU: GBU12BombLauncher
	{
		displayName							= "GBU-1071 Laser Guided Bomb";
		ballisticsComputer					= 8;
		magazines[] 						= {"OPTRE_4Rnd_GBU_bomb", "OPTRE_8Rnd_GBU_bomb"};
	};
	class OPTRE_105mm_M512: cannon_120mm 
	{
		magazinereloadTime 					= 4.0;
		displayName 						= "M512 Smoothbore High-Velocity Cannon";
		magazines[] 						= {"OPTRE_60Rnd_105mm_APBC","OPTRE_60Rnd_105mm_SAPHE", "OPTRE_60Rnd_105mm_HEAT"};
		class gunParticles
		{
			class FirstEffect
			{
				effectName 					= "CannonFired";
				positionName 				= "Usti hlavne";
				directionName 				= "Konec hlavne";
			};
			class ejectshellcase 
			{
				directionName 				= "nabojniceend";
				effectName 					= "OPTRE_90mmShellcase";
				positionName 				= "nabojnicestart";
			};
		};
	};
	class OPTRE_90mm_M556: OPTRE_105mm_M512 
	{
		magazinereloadTime 					= 6.0;
		displayName 						= "M556 Smoothbore High-Velocity Cannon";
		magazines[] 						= {"OPTRE_30Rnd_90mm_APBC", "OPTRE_30Rnd_90mm_SAPHE", "OPTRE_10Rnd_90mm_S1"};
	};
	class OPTRE_M247T_Coax: LMG_coax 
	{
		displayName 						= "M247T Coaxial Machine Gun";
		magazines[] 						= {"OPTRE_100Rnd_762x51_Box_Tracer"};
		muzzleEnd 							= "konec hlavne2";
		muzzlePos 							= "usti hlavne2";
		selectionFireAnim 					= "zasleh2";
        modes[] 																= {"FullAuto","close","short","medium","far"};
        class FullAuto: Mode_FullAuto
        {
                sounds[] 														= {"StandardSound"};
                class BaseSoundModeType
                {
                        weaponSoundEffect 										= "DefaultRifle";
                        closure1[] 												= {};
                        closure2[] 												= {};
                        soundClosure[] 											= {"closure1",0.5,"closure2",0.5};
                };
                class StandardSound: BaseSoundModeType
                {
                        begin1[] 												= {"\OPTRE_Weapons\MG\data\sounds\M73_1.wss",1.0,1,2000};
						begin2[] 												= {"\OPTRE_Weapons\MG\data\sounds\M73_2.wss",1.0,1,2000};
						soundBegin[] 											= {"begin1",0.34,"begin2",0.33};
						class SoundTails
						{
							class TailTrees
							{
								sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_trees",1.0,1,1200};
								frequency = 1;
								volume = "(1-interior/1.4)*trees";
							};
							class TailForest
							{
								sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_forest",1.0,1,1200};
								frequency = 1;
								volume = "(1-interior/1.4)*forest";
							};
							class TailInterior
							{
								sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_interior",1.9952624,1,1200};
								frequency = 1;
								volume = "interior";
							};
							class TailMeadows
							{
								sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_meadows",1.0,1,1200};
								frequency = 1;
								volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
							};
							class TailHouses
							{
								sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\MK200_tail_houses",1.0,1,1200};
								frequency = 1;
								volume = "(1-interior/1.4)*houses";
							};
						};
                };
                reloadTime 														= 0.0789; 		
				dispersion = 0.001;
				recoil = "recoil_auto_mk200";
				recoilProne = "recoil_auto_prone_mk200";
                minRange  														= 2;
                minRangeProbab  												= 0.3;
                midRange = 300;
                midRangeProbab = 0.7;
                maxRange = 600;
                maxRangeProbab = 0.05;
                soundBurst = 0;
                burst = 1;
				displayName = "$STR_DN_MODE_FULLAUTO";
				textureType = "fullAuto";
        };
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
		};
		class far: medium
		{
			burst = 3;
			aiRateOfFire = 10;
			aiRateOfFireDistance = 1000;
			minRange = 300;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 650;
			maxRangeProbab = 0.01;
		};
		class GunParticles 
		{
			class effect1 
			{
				directionName 				= "konec hlavne2";
				effectName 					= "MachineGunCloud";
				positionName 				= "usti hlavne2";
			};
		};
	};
};