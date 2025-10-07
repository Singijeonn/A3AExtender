class Templates {
    class SW_Base
    {
        requiredAddons[] = {};
        logo = "";
        basepath = QPATHTOFOLDER(Templates\SW);
        priority = 100;
    };
    class SW_GAR : SW_Base
    {
        basepath = QPATHTOFOLDER(Templates\SW);
        side = "Inv";
        flagTexture = "A3\Data_F\Flags\Flag_CSAT_CO.paa";
        name = "GAR"; //the name shown in the selector
        file = "SW_AI_GAR"
        maps[] = {};
        climate[] = {};
    };
};