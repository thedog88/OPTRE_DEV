class CfgPatches
{
	class OPTRE_Misc_Objects
	{
		units[]										= {};
		weapons[]									= {};
		requiredVersion								= 0.1;
		requiredAddons[]							= {"OPTRE_Core","OPTRE_Weapons","OPTRE_UNSC_Units","OPTRE_Ins_Units"};
	};
};

class CfgGlasses 
{ 
    class G_Balaclava_blk; 
	class G_Tactical_Clear;
    class OPTRE_Glasses_Cigarette: G_Balaclava_blk 
    { 
		dlc = "OPTRE";
        displayName = "Cigarette"; 
        model = "\OPTRE_Misc\Objects\cigarette.p3d";
		picture = "\OPTRE_misc\objects\icons\cigarette.paa";
    }; 
    class OPTRE_Glasses_Cigar: OPTRE_Glasses_Cigarette
    { 
		dlc = "OPTRE";
        displayName = "Cigar"; 
        model = "\OPTRE_Misc\Objects\cigar.p3d";
		picture = "\OPTRE_misc\objects\icons\cigar.paa";
    }; 
    class OPTRE_HUD_Glasses: G_Balaclava_blk
    { 
		dlc = "OPTRE";
        displayName = "HUD Glasses (Orange)"; 
        model = "\OPTRE_Misc\Objects\tacGlass_o.p3d";
		picture = "\A3\characters_f\Data\UI\icon_g_tactical_ca.paa";
		optreVarietys[] = {"","",""};
        optreHUDStyle = "Glasses";
    };
    class OPTRE_HUD_g_Glasses: OPTRE_HUD_Glasses
    { 
		dlc = "OPTRE";
        displayName = "HUD Glasses (Green)"; 
        model = "\OPTRE_Misc\Objects\tacGlass_g.p3d";
		optreVarietys[] = {"","",""};
        optreHUDStyle = "Glasses";
    };  
    class OPTRE_HUD_r_Glasses: OPTRE_HUD_Glasses
    { 
		dlc = "OPTRE";
        displayName = "HUD Glasses (Red)"; 
        model = "\OPTRE_Misc\Objects\tacGlass_r.p3d";
		optreVarietys[] = {"","",""};
        optreHUDStyle = "Glasses";
    };  
    class OPTRE_HUD_b_Glasses: OPTRE_HUD_Glasses
    { 
		dlc = "OPTRE";
        displayName = "HUD Glasses (Blue)"; 
        model = "\OPTRE_Misc\Objects\tacGlass_b.p3d";
		optreVarietys[] = {"","",""};
        optreHUDStyle = "Glasses";
    };  
    class OPTRE_HUD_p_Glasses: OPTRE_HUD_Glasses
    { 
		dlc = "OPTRE";
        displayName = "HUD Glasses (Pink)"; 
        model = "\OPTRE_Misc\Objects\tacGlass_p.p3d";
		optreVarietys[] = {"","",""};
        optreHUDStyle = "Glasses";
    };  
    class OPTRE_HUD_w_Glasses: OPTRE_HUD_Glasses
    { 
		dlc = "OPTRE";
        displayName = "HUD Glasses (White)"; 
        model = "\OPTRE_Misc\Objects\tacGlass_w.p3d";
		optreVarietys[] = {"","",""};
        optreHUDStyle = "Glasses";
    };  
    class OPTRE_EyePiece: G_Tactical_Clear
    { 
		dlc = "OPTRE";
        displayName = "HUD Eye Piece"; 
        model = "\OPTRE_Misc\Objects\eyePiece.p3d";
		optreVarietys[] = {"","",""};
		optreHUDStyle = "EYE";
    }; 
};  