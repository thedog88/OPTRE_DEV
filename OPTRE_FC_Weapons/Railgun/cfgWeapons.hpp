class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
    //WEAPONS
     
    class EBR_Base_F;
    class OPTRE_FC_Railgun: EBR_Base_F
    {
        scope                                                                   = 2;
        scopeArsenal                                                            = 2;
        handAnim[]                                                              = {"OFP2_ManSkeleton", "\OPTRE_Weapons\AR\data\anim\hand_anim_ma5c.rtm"};
        model                                                                   = "\OPTRE_FC_Weapons\Railgun\Railgun.p3d";
        displayName                                                             = "ARC-920 Railgun";
        descriptionShort                                                        = "UNSC Railgun";
        //picture 																= "\OPTRE_FC_Weapons\PlasmaRifle\icons\PlasmaRifle_ca.paa";
		//drySound[] 															= {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
		minRange 																= 5;
		minRangeProbab 															= 0.25;
		midRange 																= 500;
		midRangeProbab 															= 0.75;
		maxRange 																= 1000;
		maxRangeProbab 															= 0.25;
        magazines[]                                                             = {"OPTRE_FC_Railgun_Slug"};
        modelOptics                                                             = "-";
        dexterity                                                               = 3.25;
        muzzlePos                                                               = "usti hlavne";
        muzzleEnd                                                               = "konec hlavne";
        reloadAction                                                            = "GestureReloadTRG";
		recoil 																	= "recoil_trg20";
        inertia                                                                 = 0.25;
		maxRecoilSway 															= 0.01;
		swayDecaySpeed 															= 1;
		initspeed																= 1000;
		maxZeroing 																= 1000;
		deployedPivot    														= "bipod";
		discreteDistance[] 														= {100,200,300,400,500,600,700,800,900,1000};
        class GunParticles
        {
            class SecondEffect
            {
                positionName                                                    = "Nabojnicestart";
                directionName                                                   = "Nabojniceend";
                effectName                                                      = "CaselessAmmoCloud";
            };
        };
        modes[] = {"Single"};
        class Single: Mode_SemiAuto
        {
            sounds[] 															= {"StandardSound"};
            dispersion 															= 0;
			soundContinuous 													= 0;
			reloadTime 															= 3;
			autoReload 															= 0;
			ballisticsComputer 													= 0;
			canLock 															= 0;
			autoFire 															= 0;
            class BaseSoundModeType
            {
                weaponSoundEffect 												= "DefaultRifle";
                closure1[] 														= {};
                closure2[] 														= {};
                soundClosure[] 													= {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound: BaseSoundModeType
            {
                begin1[] 														= {"\OPTRE_FC_Weapons\Railgun\Data\sounds\Railgun.wss",1.0,1,2000};
                soundBegin[] 													= {"begin1",2.0};
            };
        };
        class WeaponSlotsInfo //Defines attachment slots
        {
			class MuzzleSlot
			{
                access                                                  		= 1;
                compatibleitems[]                                      			= {};
                displayname                                             		= "Muzzle Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\MUZZLE";
                scope                                                   		= 2;
            };
            class CowsSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {};
                displayname                                             		= "Optics Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\TOP";
                scope                                                   		= 2;
            };
            class PointerSlot
            {
                access                                                  		= 1;
                compatibleitems[]                                       		= {};
                displayname                                             		= "Pointer Slot";
                linkproxy                                               		= "\A3\data_f\proxies\weapon_slots\SIDE";
                scope                                                   		= 2;
            };
			mass 																= 140;
        };
    };
};