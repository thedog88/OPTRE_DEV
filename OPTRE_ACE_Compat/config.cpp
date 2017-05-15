class CfgPatches //This configures the identification of the pbo to the game
{
	class OPTRE_ACE_Compat
	{
		units[] 																				= {};
		weapons[] 																				= {};																								
		requiredVersion 																		= 0.1;
		version																					= 0.1;
		requiredAddons[] 																		= {"ACE_Main", "OPTRE_Weapons", "OPTRE_Vehicles", "OPTRE_UNSC_Units", "OPTRE_Misc"};
		author[] 																				= {"Article 2 Studios"};
		fileName 																				= "OPTRE_ACE_Compat.pbo";
	};
};

class CfgWeapons
{
    class ACE_ItemCore;
    class ItemCore;
    class InventoryItem_Base_F;
    class EBR_Base_F;
    class UGL_F;
    class LMG_Mk200_F;
    class Pistol_Base_F;
    class Rifle_Base_F;
    class SMG_01_F;
    class launch_RPG32_F;
    class InventoryOpticsItem_Base_F;
	class H_helmetB;
	class Binocular;
	class cannon_120mm;
	class NVGoggles;
	class U_B_CombatUniform_mcam;
	class U_B_HeliPilotCoveralls;
	class OPTRE_UNSC_Marine_Uniform;
    
    class OPTRE_MA5B: EBR_Base_F
    {
        ACE_barrelTwist=177.8;
        ACE_barrelLength=368.29999;
		ace_overheating_jamChance[] = {0, 0, 0, 0};
		ace_overheating_slowdownFactor[] = {1, 0.8, 0.6, 0.5};
    };
    class OPTRE_MA5BGL: EBR_Base_F
    {
        ACE_barrelTwist=177.8;
        ACE_barrelLength=368.29999;
		ace_overheating_jamChance[] = {0, 0, 0, 0};
		ace_overheating_slowdownFactor[] = {1, 0.8, 0.6, 0.5};
        class M309GL: UGL_F
        {
            magazines[] += {"ACE_HuntIR_M203"};
        };
    };
    class OPTRE_M41_SSR: launch_RPG32_F
    {
        ace_overpressure_angle = 0;
        ace_overpressure_range = 0;
        ace_overpressure_damage = 0;
        ace_reloadlaunchers_enabled = 1;
    };
	class OPTRE_M68_Gauss: cannon_120mm
	{
		ace_overpressure_angle = 0;
		ace_overpressure_damage = 0;
		ace_overpressure_priority = 0;
		ace_overpressure_range = 0;
	};
    class OPTRE_BR55HB: EBR_Base_F
    {
        ACE_barrelTwist=177.8;
        ACE_barrelLength=368.29999;
    };
    class OPTRE_M392_DMR: EBR_Base_F
    {
        ACE_barrelTwist=177.8;
        ACE_barrelLength=465.29999;
    };
    class OPTRE_M73_base: LMG_Mk200_F
    {
        ACE_barrelTwist=177.8;
        ACE_barrelLength=672.5;
        ACE_Overheating_allowSwapBarrel = 1;
        ACE_clearJamAction = "GestureReload";
        ACE_checkTemperatureAction = "Gear";
		ace_overheating_jamChance[] = {0, 0, 0, 0};
		ace_overheating_slowdownFactor[] = {1, 0.8, 0.6, 0.5};
    };
    class OPTRE_M6G: Pistol_Base_F
    {
        ACE_barrelTwist=215.7;
        ACE_barrelLength=124.6;
    };
    class OPTRE_M45: Rifle_Base_F
    {
        ACE_barrelTwist=215.7;
        ACE_barrelLength=124.6;
    };
    class OPTRE_M45E: OPTRE_M45
    {
        ACE_barrelTwist=215.7;
        ACE_barrelLength=174.6;
    };
    class OPTRE_M45A: OPTRE_M45E
    {
        ACE_barrelTwist=215.7;
        ACE_barrelLength=174.6;
    };
    class OPTRE_M7: SMG_01_F
    {
        ACE_barrelTwist=168.7;
        ACE_barrelLength=218.60001;
		ace_overheating_jamChance[] = {0, 0, 0, 0};
		ace_overheating_slowdownFactor[] = {1, 0.8, 0.6, 0.5};
    };
	class OPTRE_M7_Folded: OPTRE_M7
	{
		ACE_barrelTwist=168.7;
        ACE_barrelLength=218.60001;
		ace_overheating_jamChance[] = {0, 0, 0, 0};
		ace_overheating_slowdownFactor[] = {1, 0.8, 0.6, 0.5};
	};
    class OPTRE_SRS99D: EBR_Base_F
    {
        ACE_barrelTwist=482.70001;
        ACE_barrelLength=1062.6;
    };
    class OPTRE_UNSC_ODST_Helmet_Base: H_helmetB
    {
        ace_hearing_protection = 1;
        ace_hearing_lowervolume = 0;
    };
    class OPTRE_UNSC_Marine_Helmet_Base: H_helmetB
    {
        ace_hearing_protection = 1;
        ace_hearing_lowervolume = 0;
    };
    class OPTRE_UNSC_CH252_Helmet_Base: H_helmetB
    {
        ace_hearing_protection = 1;
        ace_hearing_lowervolume = 0;
    };
    class OPTRE_NVG: NVGoggles
    {
		modelOptics = "";
        ACE_nightVision_grain = 0;
        ace_nightVision_blur = 0;
        ace_nightVision_radBlur = 0;
    };
	class OPTRE_UNSC_Airforce_Uniform: U_B_CombatUniform_mcam
	{
        ACE_GForceCoef = 0.5;
	};
	class OPTRE_UNSC_Marine_Uniform_Pilot: OPTRE_UNSC_Marine_Uniform
	{
        ACE_GForceCoef = 0.5;
	};
	class OPTRE_UNSC_Navy_Uniform : U_B_HeliPilotCoveralls 
	{
        ACE_GForceCoef = 0.5;
    };
};

class CfgGlasses 
{ 
    class G_Balaclava_blk; 
	class G_Tactical_Clear;
    class OPTRE_Glasses_Cigarette: G_Balaclava_blk 
    { 
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "";
		ACE_Resistance = 0;
		ACE_Protection = 0;
		ACE_DustPath = "";
    }; 
    class OPTRE_HUD_Glasses: G_Balaclava_blk
    { 
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "";
		ACE_Resistance = 2;
		ACE_Protection = 1;
		ACE_DustPath = "";
    };
    class OPTRE_EyePiece: G_Tactical_Clear
    { 
		ACE_Color[] = {0,0,0};
		ACE_TintAmount = 0;
		ACE_Overlay = "";
		ACE_OverlayDirt = "A3\Ui_f\data\igui\rsctitles\HealthTextures\dust_upper_ca.paa";
		ACE_OverlayCracked = "";
		ACE_Resistance = 0;
		ACE_Protection = 0;
		ACE_DustPath = "";
    }; 
}; 