class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
    class InventoryOpticsItem_Base_F;
	class InventoryFlashLightItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class Rifle_Base_F;
    class UGL_F;

    //WEAPONS

    class OPTRE_MA5B: Rifle_Base_F
    {
		dlc = "OPTRE";
        scope                                                                   	= 2;
        handAnim[]                                                              	= {"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
        model                                                                   	= "\OPTRE_Weapons\AR\MA5B.p3d";
        displayName                                                             	= "MA5B ICWS Assault Rifle";
        descriptionShort                                                        	= "UNSC Assault Rifle";
        picture 																	= "\OPTRE_weapons\ar\icons\ar_a.paa";
		pictureWire 																= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR.paa";
		ODST_1																		= "OPTRE_ODST_HUD_AmmoCount_AR";
		Glasses																		= "OPTRE_GLASS_HUD_AmmoCount_AR";
		Eye																			= "OPTRE_EYE_HUD_AmmoCount_AR";
		HUD_BulletInARows															= 2;
		HUD_TotalPosibleBullet														= 60;
		drySound[] 																	= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
        magazines[]                                                             	= {"OPTRE_60Rnd_762x51_Mag","OPTRE_60Rnd_762x51_Mag_Tracer"};
        modelOptics                                                             	= "-";
        dexterity                                                               	= 3.25;
        muzzlePos                                                               	= "usti hlavne";
        muzzleEnd                                                               	= "konec hlavne";
        reloadAction                                                            	= "GestureReloadTRG";
        inertia                                                                 	= 0.6;
		maxZeroing 																	= 1000;
		deployedPivot    															= "bipod";
		discreteDistance[] 															= {100,200,300,400,500,600,700,800,900,1000};
		changeFiremodeSound[] 														= {"A3\Sounds_F\arsenal\weapons\Rifles\MX\firemode_Mx",0.17782794,1,5};
		recoil 																		= "recoil_trg20";
		maxRecoilSway 																= 0.01;
		swayDecaySpeed 																= 1;

        class GunParticles
        {
           class SecondEffect
           {
                positionName                                                    	= "Nabojnicestart";
                directionName                                                   	= "Nabojniceend";
                effectName                                                      	= "CaselessAmmoCloud";
           };
        };

        modes[] 																	= {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto
        {
            sounds[] 																= {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                    weaponSoundEffect 												= "DefaultRifle";
                    closure1[] 														= {};
                    closure2[] 														= {};
                    soundClosure[] 													= {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                    begin1[] 														= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
                    begin2[] 														= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
                    soundBegin[] 													= {"begin1",0.34,"begin2",0.33};
				class SoundTails
				{
					class TailTrees
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency 													= 1;
						volume 														= "interior";
					};
					class TailMeadows
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*houses";
					};
				};
            };
            class SilencedSound: BaseSoundModeType
            {
				begin1[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] 														= {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency 													= 1;
						volume 														= "interior";
					};
					class TailMeadows
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*houses";
					};
				};
            };
            reloadTime 																= 0.065;
            dispersion 																= 0.00075;
			recoil 																	= "recoil_single_trg";
			recoilProne 															= "recoil_single_prone_trg";
            minRange 																= 2;
            minRangeProbab 															= 0.3;
            midRange 																= 300;
            midRangeProbab 															= 0.7;
            maxRange 																= 600;
            maxRangeProbab 															= 0.05;
        };
        class FullAuto: Mode_FullAuto
        {
			sounds[] 																= {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect 													= "DefaultRifle";
				closure1[] 															= {};
				closure2[] 															= {};
				soundClosure[] 														= {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] 															= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_1.wss",1.0,1,2000};
				begin2[] 															= {"\OPTRE_Weapons\AR\Data\sounds\AssaultRifle_2.wss",1.0,1,2000};
				soundBegin[] 														= {"begin1",0.34,"begin2",0.33};
				class SoundTails
				{
					class TailTrees
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_trees",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_forest",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_interior",1.5848932,1,1400};
						frequency 													= 1;
						volume 														= "interior";
					};
					class TailMeadows
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_meadows",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\TRG20_tail_houses",1.0,1,1400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_01",1.0,1,400};
				begin2[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_02",1.0,1,400};
				begin3[] 															= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_short_03",1.0,1,400};
				soundBegin[] 														= {"begin1",0.33,"begin2",0.33,"begin3",0.34};
				class SoundTails
				{
					class TailTrees
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_trees",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_forest",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*forest";
					};
					class TailInterior
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_tail_interior",1.0,1,400};
						frequency 													= 1;
						volume 														= "interior";
					};
					class TailMeadows
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_meadows",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] 													= {"A3\Sounds_F\arsenal\weapons\Rifles\TRG20\Silencer_TRG20_Tail_houses",1.0,1,400};
						frequency 													= 1;
						volume 														= "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime 																= 0.065;
			dispersion 																= 0.00085;
			recoil 																	= "recoil_auto_trg";
			recoilProne 															= "recoil_auto_prone_trg";
			minRange 																= 2;
			minRangeProbab 															= 0.3;
			midRange 																= 300;
			midRangeProbab 															= 0.7;
			maxRange 																= 600;
			maxRangeProbab 															= 0.05;
        };
		class fullauto_medium: FullAuto
		{
			showToPlayer 															= 0;
			burst 																	= 10;
			minRange 																= 1;
			minRangeProbab 															= 0.95;
			midRange 																= 200;
			midRangeProbab 															= 0.75;
			maxRange 																= 500;
			maxRangeProbab 															= 0.25;
			aiRateOfFire 															= 2.0;
		};
		class single_medium_optics1: Single
		{
			requiredOpticType 														= 1;
			showToPlayer 															= 0;
			minRange 																= 5;
			minRangeProbab 															= 0.2;
			midRange 																= 300;
			midRangeProbab 															= 0.7;
			maxRange 																= 450;
			maxRangeProbab 															= 0.3;
			aiRateOfFire 															= 5;
			aiRateOfFireDistance 													= 500;
		};
		class single_medium_optics2: single_medium_optics1
		{
			requiredOpticType 														= 2;
			minRange 																= 100;
			minRangeProbab 															= 0.1;
			midRange 																= 400;
			midRangeProbab 															= 0.7;
			maxRange 																= 600;
			maxRangeProbab 															= 0.05;
			aiRateOfFire 															= 6;
			aiRateOfFireDistance 													= 600;
		};
        class WeaponSlotsInfo
        {
            class MuzzleSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"muzzle_snds_B"};
                    displayname                                             		= "Muzzle Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                    scope                                                   		= 2;
            };
            class CowsSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope"};
                    displayname                                             		= "Optics Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                    scope                                                   		= 2;
            };
            class PointerSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"acc_pointer_IR", "acc_flashlight"};
                    displayname                                             		= "Pointer Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope                                                   		= 2;
            };
			mass 																	= 75;
        };
    };
    class OPTRE_MA5BGL: OPTRE_MA5B
    {
		dlc = "OPTRE";
        scope                                                                   = 2;
        handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
        model                                                                   = "\OPTRE_Weapons\AR\MA5BGL.p3d";
        displayName                                                             = "MA5B + M301 GL Assault Rifle";
        descriptionShort                                                        = "UNSC Assault Rifle + GL";
        picture 																= "\OPTRE_weapons\ar\icons\argl_a.paa";
		pictureWire 															= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_UGL.paa";
        muzzles[]                                                          	 	= {"this", "M309GL"};
        class M309GL: UGL_F
        {
                displayName 													= "M301 Grenade Launcher";
                descriptionShort 												= "M301 GL";
                useModelOptics 													= false;
                useExternalOptic 												= false;
                magazines[] =
				{
					"1Rnd_HE_Grenade_shell",
					"UGL_FlareWhite_F",
					"UGL_FlareGreen_F",
					"UGL_FlareRed_F",
					"UGL_FlareYellow_F",
					"UGL_FlareCIR_F",
					"1Rnd_Smoke_Grenade_shell",
					"1Rnd_SmokeRed_Grenade_shell",
					"1Rnd_SmokeGreen_Grenade_shell",
					"1Rnd_SmokeYellow_Grenade_shell",
					"1Rnd_SmokePurple_Grenade_shell",
					"1Rnd_SmokeBlue_Grenade_shell",
					"1Rnd_SmokeOrange_Grenade_shell"
				};
                cameraDir 														= "OP_look";
                discreteDistance[] 												= {100, 200, 300, 400};
                discreteDistanceCameraPoint[] 									= {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
                discreteDistanceInitIndex 										= 0; /// 200 is the default zero
        };
    };

    /*class OPTRE_MA5C: OPTRE_MA5B
    {
		dlc = "OPTRE";
        model                                                                   	= "\OPTRE_Weapons\AR\MA5C.p3d";
        displayName                                                             	= "MA5C ICWS Assault Rifle";
		HUD_TotalPosibleBullet														= 32;
        magazines[]                                                             	= {"OPTRE_32Rnd_762x51_Mag","OPTRE_32Rnd_762x51_Mag_Tracer"};
        class Single: Single
        {
            reloadTime 																= 0.092;
        };
        class FullAuto: FullAuto
        {
			reloadTime 																= 0.092;
        };
    };
    class OPTRE_MA5CGL: OPTRE_MA5C
    {
		dlc = "OPTRE";
        handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
        model                                                                   = "\OPTRE_Weapons\AR\MA5CGL.p3d";
        displayName                                                             = "MA5C + M301 GL Assault Rifle";
        descriptionShort                                                        = "UNSC Assault Rifle + GL";
        muzzles[]                                                          	 	= {"this", "M309GL"};
        class M309GL: UGL_F
        {
                displayName 													= "M301 Grenade Launcher";
                descriptionShort 												= "M301 GL";
                useModelOptics 													= false;
                useExternalOptic 												= false;
                magazines[] =
				{
					"1Rnd_HE_Grenade_shell",
					"UGL_FlareWhite_F",
					"UGL_FlareGreen_F",
					"UGL_FlareRed_F",
					"UGL_FlareYellow_F",
					"UGL_FlareCIR_F",
					"1Rnd_Smoke_Grenade_shell",
					"1Rnd_SmokeRed_Grenade_shell",
					"1Rnd_SmokeGreen_Grenade_shell",
					"1Rnd_SmokeYellow_Grenade_shell",
					"1Rnd_SmokePurple_Grenade_shell",
					"1Rnd_SmokeBlue_Grenade_shell",
					"1Rnd_SmokeOrange_Grenade_shell"
				};
                cameraDir 														= "OP_look";
                discreteDistance[] 												= {100, 200, 300, 400};
                discreteDistanceCameraPoint[] 									= {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
                discreteDistanceInitIndex 										= 0; /// 200 is the default zero
        };
    };*/
    class OPTRE_MA5A: OPTRE_MA5B
    {
		dlc = "OPTRE";
        scope                                                                   	= 2;
        model                                                                   	= "\OPTRE_Weapons\AR\MA5A.p3d";
        displayName                                                             	= "MA5A ICWS Assault Rifle";
        class WeaponSlotsInfo
        {
            class MuzzleSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"muzzle_snds_B"};
                    displayname                                             		= "Muzzle Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                    scope                                                   		= 2;
            };
            class CowsSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope"};
                    displayname                                             		= "Optics Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                    scope                                                   		= 2;
            };
            class PointerSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"acc_pointer_IR", "acc_flashlight"};
                    displayname                                             		= "Pointer Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope                                                   		= 2;
            };
			mass 																	= 70;
        };
    };
    class OPTRE_MA5AGL: OPTRE_MA5A
    {
		dlc = "OPTRE";
        model                                                                   = "\OPTRE_Weapons\AR\MA5AGL.p3d";
        handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
        displayName                                                             = "MA5A + M301 GL Assault Rifle";
        descriptionShort                                                        = "UNSC Assault Rifle + GL";
        picture 																= "\OPTRE_weapons\ar\icons\argl_a.paa";
		pictureWire 															= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\AssaultRifle\AR_UGL.paa";
        muzzles[]                                                          	 	= {"this", "M309GL"};
        class M309GL: UGL_F
        {
                displayName 													= "M301 Grenade Launcher";
                descriptionShort 												= "M301 GL";
                useModelOptics 													= false;
                useExternalOptic 												= false;
                magazines[] =
				{
					"1Rnd_HE_Grenade_shell",
					"UGL_FlareWhite_F",
					"UGL_FlareGreen_F",
					"UGL_FlareRed_F",
					"UGL_FlareYellow_F",
					"UGL_FlareCIR_F",
					"1Rnd_Smoke_Grenade_shell",
					"1Rnd_SmokeRed_Grenade_shell",
					"1Rnd_SmokeGreen_Grenade_shell",
					"1Rnd_SmokeYellow_Grenade_shell",
					"1Rnd_SmokePurple_Grenade_shell",
					"1Rnd_SmokeBlue_Grenade_shell",
					"1Rnd_SmokeOrange_Grenade_shell"
				};
                cameraDir 														= "OP_look";
                discreteDistance[] 												= {100, 200, 300, 400};
                discreteDistanceCameraPoint[] 									= {"OP_eye", "OP_eye2", "OP_eye3", "OP_eye4"}; /// the angle of gun changes with zeroing
                discreteDistanceInitIndex 										= 0; /// 200 is the default zero
        };
        class WeaponSlotsInfo : WeaponSlotsInfo //Defines attachment slots
        {
            class MuzzleSlot: MuzzleSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {"muzzle_snds_B"};
                displayname                                             		= "Muzzle Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                scope                                                   		= 2;
            };
            class CowsSlot: CowsSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope"};
                displayname                                             		= "Optics Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                scope                                                   		= 2;
            };
            class PointerSlot: PointerSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {"acc_pointer_IR", "acc_flashlight"};
                displayname                                             		= "Pointer Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                scope                                                   		= 2;
            };
        };
    };
	
	class OPTRE_MA5K: OPTRE_MA5B
	{	
		displayname 																= "MA5K ICWS Carbine";
		handanim[] 																	= {"OFP2_ManSkeleton","OPTRE_Weapons\ar\data\anim\hand_anim_ma5k.rtm"};
		magazines[] 																= {"OPTRE_32Rnd_762x51_Mag", "OPTRE_32Rnd_762x51_Mag_Tracer"};
		model 																		= "\OPTRE_Weapons\AR\MA5K.p3d";
		picture 																	= "\OPTRE_Weapons\ar\icons\ar_c.paa";
		reloadtime 																	= .05;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
            class MuzzleSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"muzzle_snds_B"};
                    displayname                                             		= "Muzzle Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                    scope                                                   		= 2;
            };
            class CowsSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope"};
                    displayname                                             		= "Optics Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                    scope                                                   		= 2;
            };
            class PointerSlot
            {
                    access                                                  		= 1;
                    compatibleitems[]                                       		= {"acc_pointer_IR", "acc_flashlight"};
                    displayname                                             		= "Pointer Slot";
                    linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                    scope                                                   		= 2;
            };
			mass 																	= 50;
		};
        modes[] = {"Single","FullAuto"};
        class Single: Single
        {
            reloadtime = .05;
        };
        class FullAuto: FullAuto // here we create a sub class for a our single fire mode, all we need for this weapon is single fire and silenced this is what you double clicked on in the lynx called "single"
        {
            reloadtime = .05;
        };
	};
};