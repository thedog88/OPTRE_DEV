    class Mode_SemiAuto;    // External class reference
    class Mode_Burst;       // External class reference
    class Mode_FullAuto;    // External class reference
	class SlotInfo;
	class CowsSlot;
	class MuzzleSlot;
	class PointerSlot;
	class UnderBarrelSlot;
     
    class CfgWeapons
    {
            class ItemCore;
            class InventoryOpticsItem_Base_F;
            //ATTACHMENTS
     
            class OPTRE_M73_SmartLink: ItemCore
            {
					dlc = "OPTRE";
                    scope                                                                   = 2;
                    displayName                                                             = "M73 Smart-Link Scope";
					picture = "\OPTRE_weapons\MG\icons\scope.paa";
                    model                                                                   = "\OPTRE_Weapons\MG\M73_SmartLink.p3d";
                    descriptionShort                                                        = "M73 Smart-Linked Neural Interface Scope";
                    weaponInfoType                                                          = "RscWeaponZeroing";
                    inertia                                                                 = 0.1;
                    class ItemInfo: InventoryOpticsItem_Base_F
                    {
                            mass                                                            = 10;
                            opticType                                                       = 1;
                            optics                                                          = 1;
                            modelOptics                                                     = "\OPTRE_Weapons\MG\M73_SmartLink.p3d";
                            class OpticsModes
                            {
                                    class M73_IS
                                    {
                                            opticsID                                        = 1;
                                            useModelOptics                                  = 0;
                                            opticsPPEffects[]                               = {""};
                                            opticsFlare                                     = 0;
                                            opticsDisablePeripherialVision  = 0;
                                            opticsZoomMin                                   = 0.375;
                                            opticsZoomMax                                   = 0.55;
                                            opticsZoomInit                                  = 0.55;
                                            memoryPointCamera                               = "opticView";
                                            visionMode[]                                    = {};
                                            distanceZoomMin                                 = 300;
                                            distanceZoomMax                                 = 300;
                                            //cameraDir                                       = "";
                                    };
                                    class M73_Scope: M73_IS
                                    {
                                            opticsID                                        = 2;
                                            useModelOptics                                  = 1;
                                            opticsZoomMin                                   = 0.075;
                                            opticsZoomMax                                   = 0.0523;
                                            opticsZoomInit                                  = 0.0523;
                                            memoryPointCamera                               = "opticView2";
                                            modelOptics[]                                   = {"\A3\Weapons_F\acc\reticle_HAMR"/*,"\A3\Weapons_F\acc\reticle_arco_F"*/};
                                            visionMode[]                                    = {};
                                    };
                            };
                    };
            };
		
			
     
            //WEAPONS
			class Rifle_Base_F;
			/*class Rifle_Long_Base_F: Rifle_Base_F
			{
				class WeaponSlotsInfo;
				class GunParticles;
			};
			class LMG_Mk200_F: Rifle_Long_Base_F
			{
				class WeaponSlotsInfo: WeaponSlotsInfo
				{
					class UnderBarrelSlot: UnderBarrelSlot
					{
						iconPosition[]={0.34999999,0.80000001};
						iconScale=0.2;
					};
				};
				class GunParticles: GunParticles
				{
					class AmmoBeltEject
					{
						effectName="MachineGunEject2";
						positionName="nabojnicestart";
						directionName="nabojniceend";
					};
				};
			};*/
            class OPTRE_M73_base: Rifle_Base_F
            {
					dlc = "OPTRE";		
                    handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\MG\data\anim\M73_1.rtm"};
                    model                                                                   = "\OPTRE_Weapons\MG\M73.p3d";
                    displayName                                                             = "M73 Light Machine Gun";
                    descriptionShort                                                        = "UNSC Light Machine Gun";
					recoil = "recoil_mk200";
					picture = "\OPTRE_weapons\MG\icons\M73_1.paa";
					pictureWire 															= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\MachineGun\MG_IRON.paa";
					ODST_1																	= "OPTRE_ODST_HUD_AmmoCount_LMG";
					Glasses																	= "OPTRE_GLASS_HUD_AmmoCount_LMG";
					Eye																		= "OPTRE_EYE_HUD_AmmoCount_LMG";
					HUD_BulletInARows														= 4;
					HUD_TotalPosibleBullet													= 200;	
                    magazines[]                                                             = {"OPTRE_100Rnd_95x40_Box","OPTRE_100Rnd_95x40_Box_Tracer","OPTRE_200Rnd_95x40_Box","OPTRE_200Rnd_95x40_Box_Tracer"};
                    muzzlePos                                                               = "usti hlavne";
                    muzzleEnd                                                               = "konec hlavne";
                    reloadAction                                                            = "GestureReloadM200";
					drySound[] 																= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
                    inertia                                                                 = 0.95;
					maxRecoilSway 															= 0.0125;
					swayDecaySpeed 															= 1.25;
					deployedPivot    														= "bipod";
					maxZeroing 																= 1000;
					changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.17782794,1,5};
					discreteDistance[] 														= {100,200,300,400,500,600,700,800,900,1000};
                    modes[] 																= {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
                    class Single: Mode_SemiAuto
                    {
                            sounds[] 														= {"StandardSound","SilencedSound"};
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
                            class SilencedSound: BaseSoundModeType
                            {
								begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.8912509,1,200};
								begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.8912509,1,200};
								begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.8912509,1,200};
								soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
								class SoundTails
								{
									class TailTrees
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*trees";
									};
									class TailForest
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*forest";
									};
									class TailInterior
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
										frequency = 1;
										volume = "interior";
									};
									class TailMeadows
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
									};
									class TailHouses
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*houses";
									};
								};
                            };
                            reloadTime 														= 0.0789; 		
                            dispersion 														= 0.00075;
							recoil = "recoil_auto_mk200";
							recoilProne = "recoil_auto_prone_mk200";
                            minRange 														= 2;
                            minRangeProbab 													= 0.3;
                            midRange 														= 300;
                            midRangeProbab 													= 0.7;
                            maxRange 														= 600;
                            maxRangeProbab 													= 0.05;
					};
                    class FullAuto: Mode_FullAuto
                    {
                            sounds[] 														= {"StandardSound","SilencedSound"};
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
                            class SilencedSound: BaseSoundModeType
                            {
								begin1[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_01",0.8912509,1,200};
								begin2[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_02",0.8912509,1,200};
								begin3[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_short_03",0.8912509,1,200};
								soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
								class SoundTails
								{
									class TailTrees
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_trees",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*trees";
									};
									class TailForest
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_forest",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*forest";
									};
									class TailInterior
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_interior",1.9952624,1,1200};
										frequency = 1;
										volume = "interior";
									};
									class TailMeadows
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_meadows",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
									};
									class TailHouses
									{
										sound[] = {"A3\Sounds_F\arsenal\weapons\Machineguns\Mk200\Silencer_Mk200_tail_houses",1.0,1,1800};
										frequency = 1;
										volume = "(1-interior/1.4)*houses";
									};
								};
                            };
                            reloadTime 														= 0.0789; 		
                            dispersion 														= 0.00075;
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
					class far_optic1: medium
					{
						requiredOpticType = 1;
						showToPlayer = 0;
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
					class far_optic2: far_optic1
					{
						burst = 3;
						requiredOpticType = 2;
						minRange = 400;
						minRangeProbab = 0.05;
						midRange = 750;
						midRangeProbab = 0.7;
						maxRange = 900;
						maxRangeProbab = 0.01;
						aiRateOfFire = 10;
						aiRateOfFireDistance = 900;
					};
                    class WeaponSlotsInfo  //Defines attachment slots
                    {
							mass = 140;
							class MuzzleSlot: MuzzleSlot
							{
								compatibleitems[] 					= {"muzzle_snds_B"};
								linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
							};
							class CowsSlot: CowsSlot
							{
								compatibleitems[] 					= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope","OPTRE_M73_SmartLink"};
								linkproxy 							= "\A3\data_f\proxies\weapon_slots\TOP";
							};
							class PointerSlot: PointerSlot
							{
								compatibleitems[] 					= {};
								linkproxy 							= "\A3\data_f\proxies\weapon_slots\SIDE";
							};
							class UnderBarrelSlot: UnderBarrelSlot
							{
								compatibleItems[]					= {"bipod_01_F_blk", "bipod_02_F_blk", "bipod_03_F_blk"};
								linkProxy 							= "\A3\Data_F_Mark\Proxies\Weapon_Slots\UNDERBARREL";
							};
                    };
			};
			class OPTRE_M73: OPTRE_M73_base
            {
					dlc = "OPTRE";
                    model                                                                   = "\OPTRE_Weapons\MG\M73.p3d";
                    displayName                                                             = "M73 Light Machine Gun";
                    descriptionShort                                                        = "UNSC Light Machine Gun";
                    inertia                                                                 = 0.75;
					maxRecoilSway 															= 0.0115;
					swayDecaySpeed 															= 1.15;
                    scope                                                                   = 2;
					scopeArsenal															= 2;
					baseWeapon 																= "OPTRE_M73";
                    modes[] 																= {"Single","FullAuto"};
                    class Single: Single {};
                    class FullAuto: FullAuto {};
                    class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
                    {
							mass = 140;
                    };
            };
	};