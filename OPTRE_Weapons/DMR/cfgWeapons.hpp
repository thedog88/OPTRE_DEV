class Mode_SemiAuto;	// External class reference
class Mode_Burst;	// External class reference
class Mode_FullAuto;	// External class reference
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
	
	class OPTRE_M392_Scope: ItemCore
	{
		dlc = "OPTRE";
		scope 										= 2;
		scopeArsenal 								= 2;
		displayName 								= "[UNSC] M392 Scope";
		picture 									= "\OPTRE_weapons\br\icons\scope.paa";
		model 										= "\OPTRE_Weapons\DMR\scope.p3d";
		descriptionShort 							= "4x Scope for M392 Marksman Rifle";
		weaponInfoType 								= "RscWeaponZeroing";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass 									= 5;
			opticType		 						= 1;
			optics 									= 1;
			modelOptics 							= "\OPTRE_Weapons\DMR\scope.p3d";
			class OpticsModes
			{
				class DMR_Scope
				{
					opticsID  						= 1;
					useModelOptics  				= 1;
					opticsZoomMin  					= 0.0623;
					opticsZoomMax 					= 0.0623;
					opticsZoomInit 					= 0.0623;
					opticsPPEffects[]  				= {""};
					opticsFlare  					= 0;
					opticsDisablePeripherialVision 	= 0;
					memoryPointCamera 				= "opticView";
					modelOptics[] 					= {"\A3\Weapons_F\acc\reticle_HAMR"};
					visionMode[]  					= {};
					distanceZoomMin  				= 300;
					distanceZoomMax 				= 300;
					cameraDir  						= "";
				};
			};
		};
		inertia 									= 0.1;
	};
	
		
	//WEAPONS
	
	class Rifle_Long_Base_F;
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class srifle_DMR_01_F: DMR_01_base_F
	{
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class UnderBarrelSlot: UnderBarrelSlot
			{
				iconPosition[]={0.40000001,0.69999999};
				iconScale=0.2;
			};
		};
	};
	class OPTRE_M392_DMR: srifle_DMR_01_F
	{
		dlc = "OPTRE";
		scope 										= 2;
		scopeArsenal 								= 2;
		handAnim[] 									= {"OFP2_ManSkeleton", "\OPTRE_Weapons\BR\data\anim\BR.rtm"};
		model										= "\OPTRE_Weapons\DMR\DMR.p3d";
		displayName 								= "[UNSC] M392 DMR";
		descriptionShort 							= "UNSC Marksman Rifle";
		picture 									= "\OPTRE_weapons\br\icons\br.paa";
		pictureWire 								= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		ODST_1																	= "OPTRE_ODST_HUD_AmmoCount_DMR";
		Glasses																	= "OPTRE_GLASS_HUD_AmmoCount_DMR";
		Eye																		= "OPTRE_EYE_HUD_AmmoCount_DMR";
		HUD_BulletInARows														= 1;
		HUD_TotalPosibleBullet													= 15;	
		magazines[] 								= {"OPTRE_15Rnd_762x51_Mag","OPTRE_15Rnd_762x51_Mag_Tracer"};
		drySound[] 									= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
		modelOptics 								= "-";
		dexterity 									= 3.25;
		muzzlePos									= "usti hlavne";
       	muzzleEnd									= "konec hlavne";
		reloadAction 								= "GestureReloadTRG";
		inertia										= 0.6;
		maxZeroing 									= 1000;
		discreteDistance[] 							= {100,200,300,400,500,600,700,800,900,1000};
		maxRecoilSway 								= 0.0125;
		swayDecaySpeed 								= 1.25;
		deployedPivot    							= "bipod";
		recoil = "recoil_mx";
		class GunParticles
		{
		   class SecondEffect
		   {
			positionName 							= "Nabojnicestart";
			directionName 							= "Nabojniceend";
			effectName 								= "CaselessAmmoCloud";
		   };
		};
		modes[] 									= {"Single"};
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				closure1[] = {};
				closure2[] = {};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"\OPTRE_Weapons\DMR\Data\sounds\DMR_1.ogg",2.5,1,1500};
				soundBegin[] = {"begin1",1};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_interior",2.2387211,1,1800};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_trees",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_forest",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_meadows",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\mx_tail_houses",1.0,1,1800};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			class SilencedSound: BaseSoundModeType
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_01",0.7943282,1,400};
				begin2[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_02",0.7943282,1,400};
				begin3[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_short_03",0.7943282,1,400};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin1",0.34};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_Mx_tail_interior",1.0,1,400};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_trees",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_forest",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_meadows",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\MX\Silencer_mx_tail_houses",1.0,1,400};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};
			reloadTime = 0.041;
			dispersion = 0.00005;
			recoil = "recoil_single_mx";
			recoilProne = "recoil_single_prone_mx";
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
		};
		class WeaponSlotsInfo: WeaponSlotsInfo //Defines attachment slots
 		{
			class MuzzleSlot: MuzzleSlot
			{
				compatibleitems[] 					= {"muzzle_snds_B"};
				linkproxy 							= "\A3\data_f\proxies\weapon_slots\MUZZLE";
			};
			class CowsSlot: CowsSlot
			{
				compatibleitems[] 					= {"OPTRE_M392_Scope", "OPTRE_BR55HB_Scope", "OPTRE_M7_Sight", "OPTRE_SRS99_Scope"};
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
			mass = 75;
 		};
	};
	class OPTRE_M392_DMR_ScopedRifle: OPTRE_M392_DMR /// standard issue variant with holo optics and laser pointer
	{
		dlc = "OPTRE";
		pictureWire 								= "\OPTRE_Weapons\data\Pictures\WireWeaponIcons\Prime\BattleRifle\BR_SCOPE.paa";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "OPTRE_M392_Scope";
			};			
		};
	};
};