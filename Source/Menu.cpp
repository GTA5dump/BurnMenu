#pragma once
#include "stdafx.h"
#include "Features.h"


#define PROP_MONEY_BAG_01 0x113FD533
#define PICKUP_MONEY_CASE 0xCE6FDD6B

int timeer = 0;
long in = 0;
int intor = 0;
long out = 0;
bool stream = false;

std::vector<std::string> StringVector{ "test", "testing", "testing123" };
int StringVectorPosition = 0;
std::vector<char*> CharVector{ "test1", "testing1", "testing1231" };
int CharVectorPosition = 0;
std::vector<int> IntVector{ 1, 2, 3, 5, 6, 7, 1234, 13041 };
int IntVectorPosition = 0;
std::vector<float> FloatVector{ 1.2345f, 5.1234f, 5.1237f, 8.3124f };
int FloatVectorPosition = 0;
bool risky = false;
std::string namech;

static char* Boats1[] = {
	"DINGHY", "DINGHY2", "DINGHY3", "DINGHY4", "JETMAX",
	"MARQUIS", "PREDATOR", "SEASHARK", "SEASHARK2", "SEASHARK3",
	"SPEEDER", "SPEEDER2", "SQUALO", "SUBMERSIBLE", "SUBMERSIBLE2",
	"SUNTRAP", "TORO", "TORO2", "TROPIC", "TROPIC2",
	"TUG"
};
static char* Commercial1[] = {
	"BENSON", "BIFF", "HAULER", "MULE", "MULE2",
	"MULE3", "PACKER", "PHANTOM", "POUNDER", "STOCKADE",
	"STOCKADE3"
};
static char* Compacts1[] = {
	"BLISTA", "BRIOSO", "DILETTANTE", "DILETTANTE2", "ISSI2",
	"PANTO", "PRAIRIE", "RHAPSODY"
};
static char* Coupes1[] = {
	"COGCABRIO", "EXEMPLAR", "F620", "FELON", "FELON2",
	"JACKAL", "ORACLE", "ORACLE2", "SENTINEL", "SENTINEL2",
	"WINDSOR", "WINDSOR2", "ZION", "ZION2"
};
static char* Cycles1[] = {
	"BMX", "CRUISER", "FIXTER", "SCORCHER", "TRIBIKE",
	"TRIBIKE2", "TRIBIKE3"
};
static char* Emergency1[] = {
	"AMBULANCE", "FBI", "FBI2", "FIRETRUK", "LGUARD",
	"PBUS", "PRANGER", "POLICE", "POLICE2", "POLICE3",
	"POLICE4", "POLICEB", "POLICEOLD1", "POLICEOLD2", "POLICET",
	"SHERIFF", "SHERIFF2", "RIOT"
};
static char* Helicopters1[] = {
	"ANNIHILATOR", "BLIMP", "BLIMP2", "BUZZARD", "BUZZARD2",
	"CARGOBOB", "CARGOBOB2", "CARGOBOB3", "CARGOBOB4", "FROGGER",
	"FROGGER2", "MAVERICK", "POLMAV", "SAVAGE", "SKYLIFT",
	"SUPERVOLITO", "SUPERVOLITO2", "SWIFT", "SWIFT2", "VALKYRIE",
	"VALKYRIE2", "VOLATUS"
};
static char* Industrial1[] = {
	"BULLDOZER", "CUTTER", "DUMP", "FLATBED", "GUARDIAN",
	"HANDLER", "MIXER", "MIXER2", "RUBBLE", "TIPTRUCK",
	"TIPTRUCK2"
};
static char* Military1[] = {
	"BARRACKS", "BARRACKS2", "BARRACKS3", "CRUSADER", "RHINO"
};
static char* Motorcycles1[] = {
	"AKUMA", "AVARUS", "BAGGER", "BATI", "BATI2",
	"BF400", "CARBONRS", "CHIMERA", "CLIFFHANGER", "DAEMON",
	"DAEMON2", "DEFILER", "DOUBLE", "ENDURO", "ESSKEY",
	"FAGGIO", "FAGGIO2", "FAGGIO3", "GARGOYLE", "HAKUCHOU",
	"HAKUCHOU2", "HEXER", "INNOVATION", "LECTRO", "MANCHEZ",
	"NEMESIS", "NIGHTBLADE", "PCJ", "RATBIKE", "RUFFIAN",
	"SANCHEZ", "SANCHEZ2", "SANCTUS", "SHOTARO", "SOVEREIGN",
	"THRUST", "VADER", "VINDICATOR", "VORTEX", "WOLFSBANE",
	"ZOMBIEA", "ZOMBIEB", "DIABLOUS", "DIABLOUS2", "FCR",
	"FCR2"
};
static char* Muscle1[] = {
	"BLADE", "BUCCANEER", "BUCCANEER2", "CHINO", "CHINO2",
	"COQUETTE3", "DOMINATOR", "DOMINATOR2", "DUKES", "DUKES2",
	"GAUNTLET", "GAUNTLET2", "FACTION", "FACTION2", "FACTION3",
	"HOTKNIFE", "LURCHER", "MOONBEAM", "MOONBEAM2", "NIGHTSHADE",
	"PHOENIX", "PICADOR", "RATLOADER", "RATLOADER2", "RUINER", "RUINER2", "RUINER3",
	"SABREGT", "SABREGT2", "SLAMVAN", "SLAMVAN2", "SLAMVAN3",
	"STALION", "STALION2", "TAMPA", "VIGERO", "VIRGO",
	"VIRGO2", "VIRGO3", "VOODOO", "VOODOO2"
};
static char* OffRoad1[] = {
	"BFINJECTION", "BIFTA", "BLAZER", "BLAZER2", "BLAZER3",
	"BLAZER4", "BODHI2", "BRAWLER", "DLOADER", "DUBSTA3",
	"DUNE", "DUNE2", "INSURGENT", "INSURGENT2", "KALAHARI",
	"MARSHALL", "MESA3", "MONSTER", "RANCHERXL", "RANCHERXL2",
	"REBEL", "REBEL2", "SANDKING", "SANDKING2", "TECHNICAL",
	"TROPHYTRUCK", "TROPHYTRUCK2", "TECHNICAL2", "DUNE4", "DUNE5",
	"BLAZER5"
};
static char* Planes1[] = {
	"BESRA", "CARGOPLANE", "CUBAN800", "DODO", "DUSTER",
	"HYDRA", "JET", "LAZER", "LUXOR", "LUXOR2",
	"MAMMATUS", "MILJET", "NIMBUS", "SHAMAL", "STUNT",
	"TITAN", "VELUM", "VELUM2", "VESTRA"
};
static char* Sedans1[] = {
	"ASEA", "ASEA2", "ASTEROPE", "COG55", "COG552",
	"COGNOSCENTI", "COGNOSCENTI2", "EMPEROR", "EMPEROR2", "EMPEROR3",
	"FUGITIVE", "GLENDALE", "INGOT", "INTRUDER", "LIMO2",
	"PREMIER", "PRIMO", "PRIMO2", "REGINA", "ROMERO",
	"SCHAFTER2", "SCHAFTER5", "SCHAFTER6", "STANIER", "STRATUM",
	"STRETCH", "SUPERD", "SURGE", "TAILGATER", "WARRENER",
	"WASHINGTON"
};
static char* Service1[] = {
	"AIRBUS", "BRICKADE", "BUS", "COACH", "RALLYTRUCK",
	"RENTALBUS", "TAXI", "TOURBUS", "TRASH", "TRASH2",
	"WASTELANDER",
};
static char* Sports1[] = {
	"ALPHA", "BANSHEE", "BESTIAGTS", "BLISTA2", "BLISTA3",
	"BUFFALO", "BUFFALO2", "BUFFALO3", "CARBONIZZARE", "COMET2",
	"COQUETTE", "ELEGY", "ELEGY2", "FELTZER2", "FUROREGT", "FUSILADE",
	"FUTO", "JESTER", "JESTER2", "KHAMELION", "KURUMA",
	"KURUMA2", "LYNX", "MASSACRO", "MASSACRO2", "NINEF",
	"NINEF2", "OMNIS", "PENUMBRA", "RAPIDGT", "RAPIDGT2",
	"RAPTOR", "SCHAFTER3", "SCHAFTER4", "SCHWARTZER", "SEVEN70",
	"SULTAN", "SURANO", "SPECTER", "SPECTER2", "TAMPA2", "TROPOS", "VERLIERER2",
	"RUINER2", "PHANTOM2", "RUSTON"
};
static char* SportsClassics1[] = {
	"BTYPE", "BTYPE2", "BTYPE3", "CASCO", "COQUETTE2",
	"FELTZER3", "JB700", "MAMBA", "MANANA", "MONROE",
	"PEYOTE", "PIGALLE", "STINGER", "STINGERGT", "TORNADO",
	"TORNADO2", "TORNADO3", "TORNADO4", "TORNADO5", "TORNADO6",
	"ZTYPE", "INFERNUS2", "TURISMO2",
};
static char* Super1[] = {
	"ADDER", "BANSHEE2", "BULLET", "CHEETAH", "ENTITYXF",
	"FMJ", "SHEAVA", "INFERNUS", "NERO", "NERO2","OSIRIS", "LE7B",
	"ITALIGTB", "ITALIGTB2", "PFISTER811", "PROTOTIPO", "REAPER", "SULTANRS", "T20",
	"TEMPESTA", "TURISMOR", "TYRUS", "VACCA", "VOLTIC", "ZENTORNO", "VOLTIC2", "PENETRATOR", "GP1"
};
static char* SUVs1[] = {
	"BALLER", "BALLER2", "BALLER3", "BALLER4", "BALLER5",
	"BALLER6", "BJXL", "CAVALCADE", "CAVALCADE2", "CONTENDER",
	"DUBSTA", "DUBSTA2", "FQ2", "GRANGER", "GRESLEY",
	"HABANERO", "HUNTLEY", "LANDSTALKER", "MESA", "MESA2",
	"PATRIOT", "RADI", "ROCOTO", "SEMINOLE", "SERRANO",
	"XLS", "XLS2"
};
static char* Trailer1[] = {
	"ARMYTANKER", "ARMYTRAILER", "ARMYTRAILER2", "BALETRAILER", "BOATTRAILER",
	"DOCKTRAILER", "FREIGHTTRAILER", "GRAINTRAILER", "PROPTRAILER", "RAKETRAILER",
	"TANKER", "TANKER2", "TR2", "TR3", "TR4",
	"TRAILERLOGS", "TRAILERS", "TRAILERS2", "TRAILERS3", "TRAILERSMALL",
	"TRFLAT", "TVTRAILER"
};
static char* Trains1[] = {
	"CABLECAR", "FREIGHT", "FREIGHTCAR", "FREIGHTCONT1", "FREIGHTCONT2",
	"FREIGHTGRAIN", "METROTRAIN", "TANKERCAR"
};
static char* Utility1[] = {
	"AIRTUG", "CADDY", "CADDY2", "DOCKTUG", "FORKLIFT",
	"MOWER", "RIPLEY", "SADLER", "SADLER2", "SCRAP",
	"TOWTRUCK", "TOWTRUCK2", "TRACTOR", "TRACTOR2", "TRACTOR3",
	"UTILLITRUCK", "UTILLITRUCK2", "UTILLITRUCK3"
};
static char* Vans1[] = {
	"BISON", "BISON2", "BISON3", "BOBCATXL", "BOXVILLE",
	"BOXVILLE2", "BOXVILLE3", "BOXVILLE4", "BURRITO", "BURRITO2",
	"BURRITO3", "BURRITO4", "BURRITO5", "CAMPER", "GBURRITO",
	"GBURRITO2", "JOURNEY", "MINIVAN", "MINIVAN2", "PARADISE",
	"PONY", "PONY2", "RUMPO", "RUMPO2", "RUMPO3",
	"SPEEDO", "SPEEDO2", "SURFER", "SURFER2", "TACO",
	"YOUGA", "YOUGA2"
};
static char* Doomsday1[] = {
	"autarch", "avenger", "barrage", "chernobog", "comet4", "comet5",
	"deluxo", "gt500", "hermes", "hustler", "kamacho","khanjali",
	"neon", "pariah", "raiden", "revolter", "riata", "riot2", "savestra",
	"sc1", "sentinel3", "streiter", "stromberg", "thruster", "viseris",
	"volatol", "yosemite", "z190"
};
static char* Supersports1[] = {
	"michelli", "jester3", "flashgt", "tezeract", "entity2", "cheburek",
	"tyrant", "hotring", "ellie", "fagaloa", "gb200", "issi3", "taipan",
	"dominator3", "caracara", "seasparrow",
};
char* pedModels[] = {
	"A_C_Boar","A_C_Chickenhawk","A_C_Chimp","A_C_Chop","A_C_Cormorant","A_C_Cow","A_C_Coyote","A_C_Crow","A_C_Deer","A_C_Fish","A_C_Hen","A_C_Husky","A_C_MtLion","A_C_Pig","A_C_Pigeon","A_C_Rat","A_C_Retriever",
	"A_C_Rhesus","A_C_Rottweiler","A_C_Seagull","A_C_SharkTiger","A_C_shepherd","A_F_M_Beach_01","A_F_M_BevHills_01","A_F_M_BevHills_02","A_F_M_BodyBuild_01","A_F_M_Business_02","A_F_M_Downtown_01","A_F_M_EastSA_01",
	"A_F_M_EastSA_02","A_F_M_FatBla_01","A_F_M_FatCult_01","A_F_M_FatWhite_01","A_F_M_KTown_01","A_F_M_KTown_02","A_F_M_ProlHost_01","A_F_M_Salton_01","A_F_M_SkidRow_01","A_F_M_SouCentMC_01","A_F_M_SouCent_01","A_F_M_SouCent_02",
	"A_F_M_Tourist_01","A_F_M_TrampBeac_01","A_F_M_Tramp_01","A_F_O_GenStreet_01","A_F_O_Indian_01","A_F_O_KTown_01","A_F_O_Salton_01","A_F_O_SouCent_01","A_F_O_SouCent_02","A_F_Y_Beach_01","A_F_Y_BevHills_01","A_F_Y_BevHills_02",
	"A_F_Y_BevHills_03","A_F_Y_BevHills_04","A_F_Y_Business_01","A_F_Y_Business_02","A_F_Y_Business_03","A_F_Y_Business_04","A_F_Y_EastSA_01","A_F_Y_EastSA_02","A_F_Y_EastSA_03","A_F_Y_Epsilon_01","A_F_Y_Fitness_01",
	"A_F_Y_Fitness_02","A_F_Y_GenHot_01","A_F_Y_Golfer_01","A_F_Y_Hiker_01","A_F_Y_Hippie_01","A_F_Y_Hipster_01","A_F_Y_Hipster_02","A_F_Y_Hipster_03","A_F_Y_Hipster_04","A_F_Y_Indian_01","A_F_Y_Juggalo_01","A_F_Y_Runner_01",
	"A_F_Y_RurMeth_01","A_F_Y_SCDressy_01","A_F_Y_Skater_01","A_F_Y_SouCent_01","A_F_Y_SouCent_02","A_F_Y_SouCent_03","A_F_Y_Tennis_01","A_F_Y_Topless_01","A_F_Y_Tourist_01","A_F_Y_Tourist_02","A_F_Y_Vinewood_01",
	"A_F_Y_Vinewood_02","A_F_Y_Vinewood_03","A_F_Y_Vinewood_04","A_F_Y_Yoga_01","A_M_M_ACult_01","A_M_M_AfriAmer_01","A_M_M_Beach_01","A_M_M_Beach_02","A_M_M_BevHills_01","A_M_M_BevHills_02","A_M_M_Business_01",
	"A_M_M_EastSA_01","A_M_M_EastSA_02","A_M_M_Farmer_01","A_M_M_FatLatin_01","A_M_M_GenFat_01","A_M_M_GenFat_02","A_M_M_Golfer_01","A_M_M_HasJew_01","A_M_M_Hillbilly_01","A_M_M_Hillbilly_02","A_M_M_Indian_01",
	"A_M_M_KTown_01","A_M_M_Malibu_01","A_M_M_MexCntry_01","A_M_M_MexLabor_01","A_M_M_OG_Boss_01","A_M_M_Paparazzi_01","A_M_M_Polynesian_01","A_M_M_ProlHost_01","A_M_M_RurMeth_01","A_M_M_Salton_01","A_M_M_Salton_02",
	"A_M_M_Salton_03","A_M_M_Salton_04","A_M_M_Skater_01","A_M_M_Skidrow_01","A_M_M_SoCenLat_01","A_M_M_SouCent_01","A_M_M_SouCent_02","A_M_M_SouCent_03","A_M_M_SouCent_04","A_M_M_StLat_02","A_M_M_Tennis_01",
	"A_M_M_Tourist_01","A_M_M_TrampBeac_01","A_M_M_Tramp_01","A_M_M_TranVest_01","A_M_M_TranVest_02","A_M_O_ACult_01","A_M_O_ACult_02","A_M_O_Beach_01","A_M_O_GenStreet_01","A_M_O_KTown_01","A_M_O_Salton_01",
	"A_M_O_SouCent_01","A_M_O_SouCent_02","A_M_O_SouCent_03","A_M_O_Tramp_01","A_M_Y_ACult_01","A_M_Y_ACult_02","A_M_Y_BeachVesp_01","A_M_Y_BeachVesp_02","A_M_Y_Beach_01","A_M_Y_Beach_02","A_M_Y_Beach_03","A_M_Y_BevHills_01",
	"A_M_Y_BevHills_02","A_M_Y_BreakDance_01","A_M_Y_BusiCas_01","A_M_Y_Business_01","A_M_Y_Business_02","A_M_Y_Business_03","A_M_Y_Cyclist_01","A_M_Y_DHill_01","A_M_Y_Downtown_01","A_M_Y_EastSA_01","A_M_Y_EastSA_02",
	"A_M_Y_Epsilon_01","A_M_Y_Epsilon_02","A_M_Y_Gay_01","A_M_Y_Gay_02","A_M_Y_GenStreet_01","A_M_Y_GenStreet_02","A_M_Y_Golfer_01","A_M_Y_HasJew_01","A_M_Y_Hiker_01","A_M_Y_Hippy_01","A_M_Y_Hipster_01","A_M_Y_Hipster_02",
	"A_M_Y_Hipster_03","A_M_Y_Indian_01","A_M_Y_Jetski_01","A_M_Y_Juggalo_01","A_M_Y_KTown_01","A_M_Y_KTown_02","A_M_Y_Latino_01","A_M_Y_MethHead_01","A_M_Y_MexThug_01","A_M_Y_MotoX_01","A_M_Y_MotoX_02","A_M_Y_MusclBeac_01",
	"A_M_Y_MusclBeac_02","A_M_Y_Polynesian_01","A_M_Y_RoadCyc_01","A_M_Y_Runner_01","A_M_Y_Runner_02","A_M_Y_Salton_01","A_M_Y_Skater_01","A_M_Y_Skater_02","A_M_Y_SouCent_01","A_M_Y_SouCent_02","A_M_Y_SouCent_03","A_M_Y_SouCent_04",
	"A_M_Y_StBla_01","A_M_Y_StBla_02","A_M_Y_StLat_01","A_M_Y_StWhi_01","A_M_Y_StWhi_02","A_M_Y_Sunbathe_01","A_M_Y_Surfer_01","A_M_Y_VinDouche_01","A_M_Y_Vinewood_01","A_M_Y_Vinewood_02","A_M_Y_Vinewood_03","A_M_Y_Vinewood_04",
	"A_M_Y_Yoga_01","CSB_Abigail","CSB_Anita","CSB_Anton","CSB_BallasOG","CSB_Bride","CSB_BurgerDrug","CSB_Car3guy1","CSB_Car3guy2","CSB_Chef","CSB_Chin_goon","CSB_Cletus","CSB_Cop","CSB_Customer","CSB_Denise_friend",
	"CSB_FOS_rep","CSB_G","CSB_Groom","CSB_Grove_str_dlr","CSB_Hao","CSB_Hugh","CSB_Imran","CSB_Janitor","CSB_Maude","CSB_MWeather","CSB_Ortega","CSB_Oscar","CSB_PornDudes","CSB_PrologueDriver","CSB_ProlSec","CSB_Ramp_gang",
	"CSB_Ramp_hic","CSB_Ramp_hipster","CSB_Ramp_marine","CSB_Ramp_mex","CSB_Reporter","CSB_RoccoPelosi","CSB_Screen_Writer","CSB_Stripper_01","CSB_Stripper_02","CSB_Tonya","CSB_TrafficWarden","CS_AmandaTownley","CS_Andreas",
	"cs_ashley","CS_Bankman","CS_Barry","CS_Beverly","CS_Brad","CS_BradCadaver","CS_Carbuyer","CS_Casey","CS_ChengSr","CS_ChrisFormage","CS_Clay","CS_Dale","CS_DaveNorton","cs_debra","cs_denise","CS_Devin","CS_Dom","CS_Dreyfuss",
	"CS_DrFriedlander","CS_Fabien","CS_FBISuit_01","CS_Floyd","CS_Guadalope","cs_gurk","CS_Hunter","CS_Janet","CS_JewelAss","CS_JimmyBoston","CS_JimmyDiSanto","CS_JoeMinuteMan","CS_JohnnyKlebitz","CS_Josef","CS_Josh","CS_LamarDavis",
	"CS_Lazlow","CS_LesterCrest","CS_LifeInvad_01","CS_Magenta","CS_Manuel","CS_Marnie","CS_MartinMadrazo","CS_MaryAnn","CS_Michelle","CS_Milton","CS_Molly","CS_MovPremF_01","CS_MovPremMale","CS_MRK","CS_MrsPhillips","CS_MRS_Thornhill",
	"CS_Natalia","CS_NervousRon","CS_Nigel","CS_Old_Man1A","CS_Old_Man2","CS_Omega","CS_Orleans","CS_Paper","CS_Patricia","CS_Priest","CS_ProlSec_02","CS_RussianDrunk","CS_SiemonYetarian","CS_Solomon","CS_SteveHains","CS_Stretch",
	"CS_Tanisha","CS_TaoCheng","CS_TaosTranslator","CS_TennisCoach","CS_Terry","CS_Tom","CS_TomEpsilon","CS_TracyDiSanto","CS_Wade","CS_Zimbor","G_F_Y_ballas_01","G_F_Y_Families_01","G_F_Y_Lost_01","G_F_Y_Vagos_01","G_M_M_ArmBoss_01",
	"G_M_M_ArmGoon_01","G_M_M_ArmLieut_01","G_M_M_ChemWork_01","G_M_M_ChiBoss_01","G_M_M_ChiCold_01","G_M_M_ChiGoon_01","G_M_M_ChiGoon_02","G_M_M_KorBoss_01","G_M_M_MexBoss_01","G_M_M_MexBoss_02","G_M_Y_ArmGoon_02","G_M_Y_Azteca_01",
	"G_M_Y_BallaEast_01","G_M_Y_BallaOrig_01","G_M_Y_BallaSout_01","G_M_Y_FamCA_01","G_M_Y_FamDNF_01","G_M_Y_FamFor_01","G_M_Y_Korean_01","G_M_Y_Korean_02","G_M_Y_KorLieut_01","G_M_Y_Lost_01","G_M_Y_Lost_02","G_M_Y_Lost_03",
	"G_M_Y_MexGang_01","G_M_Y_MexGoon_01","G_M_Y_MexGoon_02","G_M_Y_MexGoon_03","G_M_Y_PoloGoon_01","G_M_Y_PoloGoon_02","G_M_Y_SalvaBoss_01","G_M_Y_SalvaGoon_01","G_M_Y_SalvaGoon_02","G_M_Y_SalvaGoon_03","G_M_Y_StrPunk_01","G_M_Y_StrPunk_02",
	"HC_Driver","HC_Gunman","HC_Hacker","IG_Abigail","IG_AmandaTownley","IG_Andreas","IG_Ashley","IG_BallasOG","IG_Bankman","IG_Barry","IG_BestMen","IG_Beverly","IG_Brad","IG_Bride","IG_Car3guy1","IG_Car3guy2","IG_Casey",
	"IG_Chef","IG_ChengSr","IG_ChrisFormage","IG_Clay","IG_ClayPain","IG_Cletus","IG_Dale","IG_DaveNorton","IG_Denise","IG_Devin","IG_Dom","IG_Dreyfuss","IG_DrFriedlander","IG_Fabien","IG_FBISuit_01","IG_Floyd","IG_Groom",
	"IG_Hao","IG_Hunter","IG_Janet","ig_JAY_Norris","IG_JewelAss","IG_JimmyBoston","IG_JimmyDiSanto","IG_JoeMinuteMan","ig_JohnnyKlebitz","IG_Josef","IG_Josh","IG_KerryMcIntosh","IG_LamarDavis","IG_Lazlow","IG_LesterCrest",
	"IG_LifeInvad_01","IG_LifeInvad_02","IG_Magenta","IG_Manuel","IG_Marnie","IG_MaryAnn","IG_Maude","IG_Michelle","IG_Milton","IG_Molly","IG_MRK","IG_MrsPhillips","IG_MRS_Thornhill","IG_Natalia","IG_NervousRon","IG_Nigel",
	"IG_Old_Man1A","IG_Old_Man2","IG_Omega","IG_ONeil","IG_Orleans","IG_Ortega","IG_Paper","IG_Patricia","IG_Priest","IG_ProlSec_02","IG_Ramp_Gang","IG_Ramp_Hic","IG_Ramp_Hipster","IG_Ramp_Mex","IG_RoccoPelosi","IG_RussianDrunk",
	"IG_Screen_Writer","IG_SiemonYetarian","IG_Solomon","IG_SteveHains","IG_Stretch","IG_Talina","IG_Tanisha","IG_TaoCheng","IG_TaosTranslator","ig_TennisCoach","IG_Terry","IG_TomEpsilon","IG_Tonya","IG_TracyDiSanto","IG_TrafficWarden",
	"IG_TylerDix","IG_Wade","IG_Zimbor","MP_F_DeadHooker","MP_F_Freemode_01","MP_F_Misty_01","MP_F_StripperLite","MP_G_M_Pros_01","MP_HeadTargets","MP_M_Claude_01","MP_M_ExArmy_01","MP_M_FamDD_01","MP_M_FIBSec_01","MP_M_Freemode_01",
	"MP_M_Marston_01","MP_M_Niko_01","MP_M_ShopKeep_01","MP_S_M_Armoured_01","Player_One","Player_Two","Player_Zero","slod_human","slod_large_quadped","slod_small_quadped","S_F_M_Fembarber","S_F_M_Maid_01","S_F_M_Shop_HIGH",
	"S_F_M_SweatShop_01","S_F_Y_AirHostess_01","S_F_Y_Bartender_01","S_F_Y_Baywatch_01","S_F_Y_Cop_01","S_F_Y_Factory_01","S_F_Y_Hooker_01","S_F_Y_Hooker_02","S_F_Y_Hooker_03","S_F_Y_Migrant_01","S_F_Y_MovPrem_01","S_F_Y_Ranger_01",
	"S_F_Y_Scrubs_01","S_F_Y_Sheriff_01","S_F_Y_Shop_LOW","S_F_Y_Shop_MID","S_F_Y_StripperLite","S_F_Y_Stripper_01","S_F_Y_Stripper_02","S_F_Y_SweatShop_01","S_M_M_AmmuCountry","S_M_M_Armoured_01","S_M_M_Armoured_02","S_M_M_AutoShop_01",
	"S_M_M_AutoShop_02","S_M_M_Bouncer_01","S_M_M_ChemSec_01","S_M_M_CIASec_01","S_M_M_CntryBar_01","S_M_M_DockWork_01","S_M_M_Doctor_01","S_M_M_FIBOffice_01","S_M_M_FIBOffice_02","S_M_M_Gaffer_01","S_M_M_Gardener_01","S_M_M_GenTransport",
	"S_M_M_HairDress_01","S_M_M_HighSec_01","S_M_M_HighSec_02","S_M_M_Janitor","S_M_M_LatHandy_01","S_M_M_LifeInvad_01","S_M_M_Linecook","S_M_M_LSMetro_01","S_M_M_Mariachi_01","S_M_M_Marine_01","S_M_M_Marine_02","S_M_M_Migrant_01",
	"S_M_M_MovAlien_01","S_M_M_MovPrem_01","S_M_M_MovSpace_01","S_M_M_Paramedic_01","S_M_M_Pilot_01","S_M_M_Pilot_02","S_M_M_Postal_01","S_M_M_Postal_02","S_M_M_PrisGuard_01","S_M_M_Scientist_01","S_M_M_Security_01","S_M_M_SnowCop_01",
	"S_M_M_StrPerf_01","S_M_M_StrPreach_01","S_M_M_StrVend_01","S_M_M_Trucker_01","S_M_M_UPS_01","S_M_M_UPS_02","S_M_O_Busker_01","S_M_Y_AirWorker","S_M_Y_AmmuCity_01","S_M_Y_ArmyMech_01","S_M_Y_Autopsy_01","S_M_Y_Barman_01","S_M_Y_BayWatch_01",
	"S_M_Y_BlackOps_01","S_M_Y_BlackOps_02","S_M_Y_BlackOps_03","S_M_Y_BusBoy_01","S_M_Y_Chef_01","S_M_Y_Clown_01","S_M_Y_Construct_01","S_M_Y_Construct_02","S_M_Y_Cop_01","S_M_Y_Dealer_01","S_M_Y_DevinSec_01","S_M_Y_DockWork_01","S_M_Y_Doorman_01",
	"S_M_Y_DWService_01","S_M_Y_DWService_02","S_M_Y_Factory_01","S_M_Y_Fireman_01","S_M_Y_Garbage","S_M_Y_Grip_01","S_M_Y_HwayCop_01","S_M_Y_Marine_01","S_M_Y_Marine_02","S_M_Y_Marine_03","S_M_Y_Mime","S_M_Y_PestCont_01",
	"S_M_Y_Pilot_01","S_M_Y_PrisMuscl_01","S_M_Y_Prisoner_01","S_M_Y_Ranger_01","S_M_Y_Robber_01","S_M_Y_Sheriff_01","S_M_Y_Shop_MASK","S_M_Y_StrVend_01","S_M_Y_Swat_01","S_M_Y_USCG_01","S_M_Y_Valet_01","S_M_Y_Waiter_01",
	"S_M_Y_WinClean_01","S_M_Y_XMech_01","S_M_Y_XMech_02","U_F_M_Corpse_01","U_F_M_Miranda","U_F_M_ProMourn_01","U_F_O_MovieStar","U_F_O_ProlHost_01","U_F_Y_BikerChic","U_F_Y_COMJane","U_F_Y_corpse_01","U_F_Y_corpse_02",
	"U_F_Y_HotPosh_01","U_F_Y_JewelAss_01","U_F_Y_Mistress","U_F_Y_PoppyMich","U_F_Y_Princess","U_F_Y_SpyActress","U_M_M_Aldinapoli","U_M_M_BankMan","U_M_M_BikeHire_01","U_M_M_FIBArchitect","U_M_M_FilmDirector","U_M_M_GlenStank_01",
	"U_M_M_Griff_01","U_M_M_Jesus_01","U_M_M_JewelSec_01","U_M_M_JewelThief","U_M_M_MarkFost","U_M_M_PartyTarget","U_M_M_ProlSec_01","U_M_M_ProMourn_01","U_M_M_RivalPap","U_M_M_SpyActor","U_M_M_WillyFist","U_M_O_FinGuru_01",
	"U_M_O_TapHillBilly","U_M_O_Tramp_01","U_M_Y_Abner","U_M_Y_AntonB",	"U_M_Y_BabyD","U_M_Y_Baygor","U_M_Y_BurgerDrug_01","U_M_Y_Chip","U_M_Y_Cyclist_01","U_M_Y_FIBMugger_01","U_M_Y_Guido_01","U_M_Y_GunVend_01","U_M_Y_Hippie_01",
	"U_M_Y_ImpoRage","U_M_Y_Justin","U_M_Y_Mani","U_M_Y_MilitaryBum","U_M_Y_Paparazzi","U_M_Y_Party_01","U_M_Y_Pogo_01","U_M_Y_Prisoner_01","U_M_Y_ProlDriver_01","U_M_Y_RSRanger_01","U_M_Y_SBike","U_M_Y_StagGrm_01","U_M_Y_Tattoo_01",
	"U_M_Y_Zombie_01",
};
void wait() {
	WAIT(0);
}


Vector3 TPCoords;
void TPto(Vector3 Coords)
{
	int Handle = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_IN_ANY_VEHICLE(Handle, 0))
	{
		ENTITY::SET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(Handle, false), Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
	}
	else
		ENTITY::SET_ENTITY_COORDS(Handle, Coords.x, Coords.y, Coords.z, 0, 0, 0, 1);
}


int TestInt = 0;
bool TestBool = false;
float TestFloat = 0;
bool nig28wen = false;

bool dropCash = false;
Player player = PLAYER::PLAYER_ID();
void main() {
	
	 while (true) {
		 Menu::Checks::Keys();
		 Features::UpdatePerTick();

		 notifyMap("~b~Burn Menu Connected!");
		 notifyMap("~y~Enjoy!");
		 notifyMap("~r~Menu Owner : ~g~Vaseliinikives");
		 switch (Menu::Settings::currentMenu) {

		 case mainmenu:
		 {
				 Menu::Title("~o~Burn Menu");

				 Menu::Option("~y~FREE VERSION");
				 Menu::MenuOption("~o~Self Options", playermenu);
				 Menu::MenuOption("~o~Protection", protection);
				 Menu::MenuOption("~o~Online Players", onlinemenu_playerlist);
				 Menu::MenuOption("~o~All Players", allplayers);
				 Menu::MenuOption("~o~Weapon Options", weapon);
				 Menu::MenuOption("~o~Vehicle Spawner", vehspawner);
				 Menu::MenuOption("~o~Vehicle Options", vehicle);
				 Menu::MenuOption("~o~Teleport", teleports);
				 Menu::MenuOption("~o~World Options", miscoptions);
				 Menu::MenuOption("~r~Recovery", recover);
				 Menu::MenuOption("~o~Credits", credits);
				 Menu::MenuOption("~o~Settings", settingsmenu);
				 Menu::Option("~y~V1.7");
				 
		 }
		 break;


		 //Weapons 
		 case weapon:
		 {
			 Menu::Title("~o~Weapons");
			 if (Menu::Option("~o~Give All Weapons")) {
				 uint Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
				 for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
					 WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), Weapons[i], 9999, 1);
				 }
			 }
			 Menu::Bool("~o~Infinite Ammo", Features::infammo, [] { Features::noreloadv(Features::infammo); });
			 Menu::Bool("~o~Rainbow Gun", Features::rbgun, [] { Features::RBGuner(Features::rbgun); });
			 Menu::Bool("~o~One Shot Kill", Features::osk, [] { Features::OSKR(Features::osk); });
			 Menu::Bool("~o~Rapid Fire", Features::rapidfirer); 
		     }
		      break;


		 //Teleport 
		 case teleports:
		 {
			 Menu::Title("~o~Teleport Locations");
			 if (Menu::Option("~o~Mount Chiliad")) {
				 Vector3 Coords;
				 Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Maze Bank")) {
				 Vector3 Coords;
				 Coords.x = -74.94243f; Coords.y = -818.63446f; Coords.z = 326.174347f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Military Base")) {
				 Vector3 Coords;
				 Coords.x = -2012.8470f; Coords.y = 2956.5270f; Coords.z = 32.8101f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Zancudo Tower")) {
				 Vector3 Coords;
				 Coords.x = -2356.0940; Coords.y = 3248.645; Coords.z = 101.4505;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Mask Shop")) {
				 Vector3 Coords;
				 Coords.x = -1338.16; Coords.y = -1278.11; Coords.z = 4.87;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~LS Customs")) {
				 Vector3 Coords;
				 Coords.x = -373.01; Coords.y = -124.91; Coords.z = 38.31;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Ammunation")) {
				 Vector3 Coords;
				 Coords.x = 247.3652; Coords.y = -45.8777; Coords.z = 69.9411;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Airport")) {
				 Vector3 Coords;
				 Coords.x = -1102.2910f; Coords.y = -2894.5160f; Coords.z = 13.9467f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Clothes Store")) {
				 Vector3 Coords;
				 Coords.x = -718.91; Coords.y = -158.16; Coords.z = 37.00;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Waterfall")) {
				 Vector3 Coords;
				 Coords.x = -597.9525f; Coords.y = 4475.2910f; Coords.z = 25.6890f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~FBI")) {
				 Vector3 Coords;
				 Coords.x = 135.5220f; Coords.y = -749.0003f; Coords.z = 260.0000f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Human Labs")) {
				 Vector3 Coords;
				 Coords.x = 3617.231f; Coords.y = 3739.871f; Coords.z = 28.6901f;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~MMI")) {
				 Vector3 Coords;
				 Coords.x = -222.1977; Coords.y = -1185.8500; Coords.z = 23.0294;
				 TPto(Coords);
			 }
			 if (Menu::Option("~o~Sandy Shores Airfield")) {
				 Vector3 Coords;
				 Coords.x = 1741.4960f; Coords.y = 3269.2570f; Coords.z = 41.6014f;
				 TPto(Coords);
			 }
		 }
		 break;



		 case weatheroptions:
		 {
			 Menu::Title("~o~Weather Options");
			 if (Menu::Option("~o~Sun")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clear"); }
			 if (Menu::Option("~o~Rain")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clearing"); }
			 if (Menu::Option("~o~Snow")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Snowlight"); }
			 if (Menu::Option("~o~Thunder")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Thunder"); }
			 if (Menu::Option("~o~Blizzard")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Blizzard"); }
			 if (Menu::Option("~o~Overcast")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Overcast"); }
			 if (Menu::Option("~o~Foggy")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Foggy"); }
			 if (Menu::Option("~o~Smog")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Smog"); }
			 if (Menu::Option("~o~Clouds")) { GAMEPLAY::SET_WEATHER_TYPE_NOW_PERSIST("Clouds"); }

		 }
		 break;
		
		 //Misc Options 
		 case miscoptions:
		 {
			 Menu::Title("~o~World Options");
			 Menu::MenuOption("~o~Weather", weatheroptions);
			 Menu::Bool("~o~Kill Peds", Features::killpedsbool);
			 Menu::Bool("~o~Explode Peds", Features::explodepedsbool);
			 Menu::Bool("~o~Explode Cars", Features::explodenearbyvehiclesbool);
			 Menu::Bool("~o~Delete Cars", Features::deletenearbyvehiclesbool);
			 Menu::Int("~o~Choose Time", timeer, 0, 24);
			 if (Menu::Option("~o~Set Time")) { NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(timeer, 0, 0); }
		 }
		 break;


		 //All Players 
		 case allplayers:
		 {
			 Menu::Title("~o~All Players");
			 Menu::Bool("~o~ESP", Features::esper, [] {});
			 if (Menu::Option("~o~Take Weps in the Lobby")) {
					for (int i = 0; i < 32; i++)
				 {
					 if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
						 if (PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i) != PLAYER::PLAYER_PED_ID())
						 {
							 Player allplayers = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
							 if (!(Features::cstrcmp(PLAYER::GET_PLAYER_NAME(i), "-")))
							 {
								 WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(allplayers), true);
							 }
						 }
					 }
				 }
			 }
			 if (Menu::Option("~o~Give Weps in the Lobby")) {

				 for (int i = 0; i < 32; i++)
				 {
					 if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
						 Player allplayers = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
						 if (!(Features::cstrcmp(PLAYER::GET_PLAYER_NAME(i), "-")))
						 {
							 if (PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i) != PLAYER::PLAYER_PED_ID())
							 {
								 uint Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
								 for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
									 WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(allplayers), Weapons[i], 9999, 1);
								 }
							 }
						 }
					 }
				 }
			 }
			 if (Menu::Option("~o~Cage All Player")) {
				 Features::trapall();
			 }
			 if (Menu::Option("~o~Crash All")) {
				 {
					 {
						 for (int i = 0; i < 32; i++)
						 {



							 Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i);
							 Hash crashall = GAMEPLAY::GET_HASH_KEY("v_proc2_temp");
							 STREAMING::REQUEST_MODEL(crashall);
							 while (!STREAMING::HAS_MODEL_LOADED(crashall)) WAIT(0);
							 if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
							 {
								 if (PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i) == PLAYER::PLAYER_PED_ID()) continue;
								 {
									 Vector3 Coords;
									 Coords.x = 496.75f; Coords.y = 5591.17f; Coords.z = 795.03f;
									 TPto(Coords);
									 Object crashall2 = OBJECT::CREATE_OBJECT(crashall, 0, 0, 0, true, true, false);
									 ENTITY::ATTACH_ENTITY_TO_ENTITY(crashall2, playerHandle, PED::GET_PED_BONE_INDEX(playerHandle, SKEL_Spine_Root), 0.0, 0.0, 0.0, 0.0, 90.0, 0, false, false, false, false, 2, true);
								 }
								 STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(crashall);

							 }
						 }
					 }
				 }
			 }
			 if (Menu::Option("~o~Teleport all to Me")) {
				 int Me = PLAYER::PLAYER_PED_ID();
				 Vector3 MyPosition = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Me, 0.0, 0.0, 0.0);
				 Features::teleportallcoords(MyPosition);
			 }
			 if (Menu::Option("~o~Kill Lobby")) {

				 for (int i = 0; i < 32; i++)
				 {
					 Vector3 MyPosition = { -15000, -15000, -50 };
					 Features::teleportallcoordsns(MyPosition);
				 }
			 } 
			if (Menu::Option("~o~Kick All From Car")) { 
				 for (int i = 0; i < 32; i++)
				 {
					 if (i != PLAYER::PLAYER_ID())
					 {
						 RequestControlOfEnt(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						 AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						 AI::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
						 AI::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i));
					 }
				 }
			 };
			 if (Menu::Option("~o~Pole Dance Lobby")) { Features::animateallPlayer("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			 Menu::MenuOption("~o~Teleport All Locations", teleportsoa);
			 if (Menu::Option("~o~Explode All")) {
				 for (int i = 0; i < 33; i++)
				 {
					 if (PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i) == PLAYER::PLAYER_PED_ID()) continue;
					 {
						 Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i), false);
						 FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 1000.f, true, false, 100.f);
					 }
				 }
			 }

		 }
		 break;


		 //Self 
		 case playermenu:
		 {
			 Menu::Title("~o~Self Options");

			 Menu::MenuOption("~o~Model Changer", modelchanger);
			 Menu::MenuOption("~o~Animations", anim);
			 Menu::MenuOption("~o~Effects ~v~>", PTFX);
			 if (risky == true) { Menu::MenuOption("~o~Money", moneyoptions); }
			 Menu::Int("~o~Wanted Level", Features::playerWantedLevel, 0, 5, [] { Features::ChangeWanted(Features::playerWantedLevel); });
			 Menu::Bool("~o~God Mode", Features::playerGodMode, [] { Features::GodMode(Features::playerGodMode); });
			 Menu::Bool("~o~Invisible", Features::playerinvisibility, [] { Features::Invisibility(Features::playerinvisibility); });
			 Menu::Bool("~o~No Ragdoll", Features::playernoragdoll, [] { Features::NoRagdoll(Features::playernoragdoll); });
			 Menu::Bool("~o~Super Jump", Features::playersuperjump, [] { Features::SuperJump(Features::playersuperjump); });
			 Menu::Bool("~o~Never Wanted", Features::neverwanted, [] { Features::NeverGetWanted(Features::neverwanted);  });
			 Menu::Bool("~o~No-Clip", Features::flybool, [] { Features::playerflyer(Features::flybool);  });
			 Menu::Bool("~o~Off The Radar", Features::orbool, [] { Features::OffRadar(Features::orbool);  });
			 Menu::Bool("~o~Mobile Radio", Features::mobileRadio, [] { Features::mobilevoid(Features::mobileRadio);  });
			 Menu::Bool("~o~Fast Run", Features::fastrun, [] { Features::RunFast(Features::fastrun); });
			 Menu::Bool("~o~Fast Swim", Features::fastswim, [] { Features::SwimFast(Features::fastswim); });
			 Menu::Bool("~o~Super Man", Features::superman, [] { Features::Superman(Features::superman); });
			 Menu::Bool("~o~Tiny Player", Features::betiny, [] { Features::TinyPlayer(Features::betiny); });
			 if (Menu::Option("~r~Suicide")) { Memory::set_value<float>({ OFFSET_PLAYER , OFFSET_ENTITY_HEALTH }, 0); }
			 Menu::Option("~y~Clean Ped", [] { int Ped = PLAYER::PLAYER_PED_ID(); PED::CLEAR_PED_BLOOD_DAMAGE(Ped); PED::RESET_PED_VISIBLE_DAMAGE(Ped); });
			 if (Menu::Option("~y~New Look")) { PED::SET_PED_RANDOM_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), true); }			 
		 }
		 break;


		 //Credits
		 case credits:
		 {
			 Menu::Title("~o~Credits");

			 Menu::Option("~r~Owner : ~g~Vaseliinikives");
			 Menu::Option("~g~Helper : ~b~Lior_Modder");



		 }
		 break;

	
		 //Model Changer 
		 case modelchanger:
		 {
			 Menu::Title("~o~Model Changer");
			 for (int i = 0; i < ARRAYSIZE(pedModels); i++)
			 {
				 if (Menu::Option(pedModels[i]))
				 {
					 DWORD model = GAMEPLAY::GET_HASH_KEY(pedModels[i]);
					 STREAMING::REQUEST_MODEL(model);
					 while (!STREAMING::HAS_MODEL_LOADED(model)) WAIT(0);
					 PLAYER::SET_PLAYER_MODEL(PLAYER::PLAYER_ID(), model);
					 PED::SET_PED_DEFAULT_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID());
					 WAIT(10);
					 STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
					 WAIT(10);
				 }
			 }
		 }
		 break;


		 //Animations 
		 case anim:
		 {
			 Menu::Title("~o~Animations");
			 Menu::MenuOption("~o~Scenarios", senas);
			 if (Menu::Option("~o~Clear Animation")) { Features::clearanim(); }
			 if (Menu::Option("~o~Sex Receiver")) { Features::doAnimation("rcmpaparazzo_2", "shag_loop_poppy"); }
			 if (Menu::Option("~o~Sex Giver")) { Features::doAnimation("rcmpaparazzo_2", "shag_loop_a"); }
			 if (Menu::Option("~o~Stripper Dance")) { Features::doAnimation("mini@strip_club@private_dance@part1", "priv_dance_p1"); }
			 if (Menu::Option("~o~Pole Dance")) { Features::doAnimation("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			 if (Menu::Option("~o~Push Ups")) { Features::doAnimation("amb@world_human_push_ups@male@base", "base"); }
			 if (Menu::Option("~o~Sit Ups")) { Features::doAnimation("amb@world_human_sit_ups@male@base", "base"); }
			 if (Menu::Option("~o~Celebrate")) { Features::doAnimation("rcmfanatic1celebrate", "celebrate"); }
			 if (Menu::Option("~o~Electrocution")) { Features::doAnimation("ragdoll@human", "electrocute"); }
			 if (Menu::Option("~o~Suicide")) { Features::doAnimation("mp_suicide", "pistol"); }
			 if (Menu::Option("~o~Showering")) { Features::doAnimation("mp_safehouseshower@male@", "male_shower_idle_b"); }
		 }
		 break;


		 //Scenarios Animtions 
		 case senas:
		 {
			 Menu::Title("~o~Scenarios");
			 if (Menu::Option("~o~Kill Animation")) AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			 if (Menu::Option("~o~Paparizzi")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_PAPARAZZI", 0, true);
			 if (Menu::Option("~o~Drug Dealer")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_DRUG_DEALER_HARD", 0, true);
			 if (Menu::Option("~o~Drinking Coffee")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_AA_COFFEE", 0, true);
			 if (Menu::Option("~o~Playing Instruments")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MUSICIAN", 0, true);
			 if (Menu::Option("~o~Flexing")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MUSCLE_FLEX", 0, true);
			 if (Menu::Option("~o~Jogging")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_JOG_STANDING", 0, true);
			 if (Menu::Option("~o~Binoculars")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_BINOCULARS", 0, true);
			 if (Menu::Option("~o~Clipboard")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_CLIPBOARD", 0, true);
			 if (Menu::Option("~o~Bench Press")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_SEAT_MUSCLE_BENCH_PRESS", 0, true);
			 if (Menu::Option("~o~Chin Ups")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_MUSCLE_CHIN_UPS", 0, true);
			 if (Menu::Option("~o~BBQ")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "PROP_HUMAN_BBQ", 0, true);
			 if (Menu::Option("~o~Superhero")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SUPERHERO", 0, true);
			 if (Menu::Option("~o~Fishing")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_STAND_FISHING", 0, true);
			 if (Menu::Option("~o~Security")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SECURITY_SHINE_TORCH", 0, true);
			 if (Menu::Option("~o~Leaf Blower")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_GARDENER_LEAF_BLOWER", 0, true);
			 if (Menu::Option("~o~Film Shocking")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_MOBILE_FILM_SHOCKING", 0, true);
			 if (Menu::Option("~o~Idle Cop")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_COP_IDLES", 0, true);
			 if (Menu::Option("~o~Drinking")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_DRINKING", 0, true);
			 if (Menu::Option("~o~Golf Player")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_GOLF_PLAYER", 0, true);
			 if (Menu::Option("~o~Welding")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_WELDING", 0, true);
			 if (Menu::Option("~o~Smoking Pot")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_SMOKING_POT", 0, true);
			 if (Menu::Option("~o~Hammering")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_HAMMERING", 0, true);
			 if (Menu::Option("~o~Tennis")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_TENNIS_PLAYER", 0, true);
			 if (Menu::Option("~o~Drilling")) AI::TASK_START_SCENARIO_IN_PLACE(PLAYER::PLAYER_PED_ID(), "WORLD_HUMAN_CONST_DRILL", 0, true);
		 }
		 break;


		 //Online Player List Code 
		 case onlinemenu_playerlist:
		 {
			 Menu::Title("~o~Player List");

			 for (int i = 0; i < 32; ++i) {
				 if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(i))) {
					 Menu::MenuOption(PLAYER::GET_PLAYER_NAME(i), onlinemenu_selected) ? Features::Online::selectedPlayer = i : NULL;
				 }
			 }
		 }
		 break;



		 //Select Online Player Codes 
		 case onlinemenu_selected:
		 {
			 Features::LoadPlayerInfo(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer), Features::Online::selectedPlayer);
			 Menu::Title(PLAYER::GET_PLAYER_NAME(Features::Online::selectedPlayer));
			 if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) { Menu::MenuOption("~o~Force Animation", forcean); }
			 if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) { Menu::MenuOption("~o~TP Options", tpother); }
			 Menu::MenuOption("~o~Effects", PTFXO);

			 Menu::Bool("~o~Water Loop", Features::playerwaterloop[Features::Online::selectedPlayer], [] { Features::WaterLoop(Features::playerwaterloop[Features::Online::selectedPlayer]); });
			 Menu::Bool("~o~Fire Loop", Features::playerfireloop[Features::Online::selectedPlayer], [] { Features::FireLoop(Features::playerfireloop[Features::Online::selectedPlayer]); });
			 Menu::Bool("~o~Freeze", Features::freezed[Features::Online::selectedPlayer], [] { Features::Freezer(Features::freezed[Features::Online::selectedPlayer]); });
			 Menu::Bool("~o~Fuck Handling", Features::fuckedhandling[Features::Online::selectedPlayer], [] { Features::fuckhandling(Features::fuckedhandling[Features::Online::selectedPlayer]); });
			 Menu::Bool("~o~Shake Cam", Features::camshaker[Features::Online::selectedPlayer], [] { Features::shakecam(Features::camshaker[Features::Online::selectedPlayer]); });
			 if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) { Menu::Bool("~o~Spectate", Features::spectate[Features::Online::selectedPlayer], [] { Features::specter(Features::spectate[Features::Online::selectedPlayer]); }); }
			 Menu::Bool("~o~Explosion Loop", Features::exploder[Features::Online::selectedPlayer], [] { Features::explodeloop(Features::exploder[Features::Online::selectedPlayer]); });
			 if (risky == true) { Menu::Bool("~r~Drop Him 2k", Features::savenewdrop2[Features::Online::selectedPlayer], [] {Features::cashdrop2(Features::savenewdrop2[Features::Online::selectedPlayer]); }); }
			 if (Menu::Option("~o~Explode him")) {
				 Vector3 coords = ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), false);
				 FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, 0, 1000.f, true, false, 1000.f);
			 }
			 if (Menu::Option("~o~Kick him out of Car")) {
				 Ped playerPed = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 RequestControlOfEnt(playerPed);
				 AI::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
				 AI::CLEAR_PED_TASKS(playerPed);
				 AI::CLEAR_PED_SECONDARY_TASK(playerPed);
			 }
			 if (Menu::Option("~r~Kill Player")) {

				 int selectedPed = Features::Online::selectedPlayer;
				 Vector3 MyPosition = { -15000, -15000, -50 };
				 Features::teleporttocoords(selectedPed, MyPosition);

			 }
			 if (Menu::Option("~o~Crash")) {
				 if (Features::Online::selectedPlayer != PLAYER::PLAYER_ID()) {
					 int selectedPed = Features::Online::selectedPlayer;
					 Vector3 MyPosition = { -129.9640f, 8130.8730f, 6705.6510f };
					 Features::teleporttocoords(selectedPed, MyPosition);
					 Player playerHandle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
					 Hash crash = GAMEPLAY::GET_HASH_KEY("v_proc2_temp");
					 STREAMING::REQUEST_MODEL(crash);
					 while (!STREAMING::HAS_MODEL_LOADED(crash)) WAIT(0);
					 if (ENTITY::DOES_ENTITY_EXIST(playerHandle))
					 {
						 Object crash2 = OBJECT::CREATE_OBJECT(crash, -129.9640f, 8130.8730f, 6705.6510f, true, true, false);
						 STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(crash);

					 }
				 }
			 }
			 if (Menu::Option("~o~Give Player T20")) 
			 {
				 int Handle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 AI::CLEAR_PED_TASKS_IMMEDIATELY(Handle);
				 Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(Handle, 0);
				 Vector3 Ocoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Handle, 0.0, 5.0, 0.0);
				 Vehicle zentorno = Features::SpawnVehicle("t20", Ocoords, 0, 0.0f);
				 ENTITY::SET_ENTITY_INVINCIBLE(zentorno, 0);
			 }
			 if (Menu::Option("~o~Give Player Monster"))
			 {
				 int Handle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 AI::CLEAR_PED_TASKS_IMMEDIATELY(Handle);
				 Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(Handle, 0);
				 Vector3 Ocoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Handle, 0.0, 5.0, 0.0);
				 Vehicle zentorno = Features::SpawnVehicle("MONSTER", Ocoords, 0, 0.0f);
				 ENTITY::SET_ENTITY_INVINCIBLE(zentorno, 0);
			 }
			 if (Menu::Option("~o~Give Player Tank")) 
			 {
				 int Handle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 AI::CLEAR_PED_TASKS_IMMEDIATELY(Handle);
				 Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(Handle, 0);
				 Vector3 Ocoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Handle, 0.0, 5.0, 0.0);
				 Vehicle zentorno = Features::SpawnVehicle("RHINO", Ocoords, 0, 0.0f);
				 ENTITY::SET_ENTITY_INVINCIBLE(zentorno, 0);
			 }
			 if (Menu::Option("~o~Give Player Docker")) 
			 {
				 int Handle = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 AI::CLEAR_PED_TASKS_IMMEDIATELY(Handle);
				 Vector3 pCoords = ENTITY::GET_ENTITY_COORDS(Handle, 0);
				 Vector3 Ocoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Handle, 0.0, 5.0, 0.0);
				 Vehicle zentorno = Features::SpawnVehicle("DUNE2", Ocoords, 0, 0.0f);
				 ENTITY::SET_ENTITY_INVINCIBLE(zentorno, 0);
			 }
			 if (Menu::Option("~o~Ram Player")) {
		     
				 float offset;
				 Hash vehmodel = GAMEPLAY::GET_HASH_KEY("SANDKING");
				 STREAMING::REQUEST_MODEL(vehmodel);

				 while (!STREAMING::HAS_MODEL_LOADED(vehmodel)) WAIT(0);
				 Vector3 pCoords = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 0.0, -10.0, 0.0);

				 if (STREAMING::IS_MODEL_IN_CDIMAGE(vehmodel) && STREAMING::IS_MODEL_A_VEHICLE(vehmodel))
				 {
					 Vector3 dim1, dim2;
					 GAMEPLAY::GET_MODEL_DIMENSIONS(vehmodel, &dim1, &dim2);

					 offset = dim2.y * 1.6;

					 Vector3 dir = ENTITY::GET_ENTITY_FORWARD_VECTOR(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
					 float rot = (ENTITY::GET_ENTITY_ROTATION(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 0)).z;

					 Vehicle veh = VEHICLE::CREATE_VEHICLE(vehmodel, pCoords.x + (dir.x * offset), pCoords.y + (dir.y * offset), pCoords.z, rot, 1, 1);

					 VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veh);
					 ENTITY::SET_ENTITY_VISIBLE(veh, true, 0);
					 VEHICLE::SET_VEHICLE_FORWARD_SPEED(veh, 700.0);
				 }

			 }
			 if (Menu::Option("~o~Semi God"))
			 {
				 Hash oball = GAMEPLAY::GET_HASH_KEY("prop_juicestand");
				 STREAMING::REQUEST_MODEL(oball);
				 while (!STREAMING::HAS_MODEL_LOADED(oball))
					 WAIT(0);
				 int orangeball = OBJECT::CREATE_OBJECT(oball, 0, 0, 0, true, 1, 0);
				 RequestControlOfEnt(orangeball);
				 ENTITY::SET_ENTITY_VISIBLE(orangeball, 0, 0);
				 ENTITY::ATTACH_ENTITY_TO_ENTITY(orangeball, PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 2, 1);

			 }
			 if (Menu::Option("~o~Slingshot Car")) {
				 NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true));
				 if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true)));
				 {
					 ENTITY::APPLY_FORCE_TO_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true), 1, 0, 0, 20, 0, 0, 0, 1, false, true, true, true, true);
				 }
			 }
			 if (Menu::Option("~o~Clone Player"))
			 {
				 PED::CLONE_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 1, 1, 1);
			 }
			 int clone[1000];
			 int gcount = 1;
			 if (Menu::Option("~g~Spawn Bodyguard")) {
				 Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				 Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN");
				 Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				 Hash pedm = GAMEPLAY::GET_HASH_KEY("u_m_m_jesus_01");
				 STREAMING::REQUEST_MODEL(pedm);
				 while (!STREAMING::HAS_MODEL_LOADED(pedm))
					 WAIT(0);
				 int my_group = PLAYER::GET_PLAYER_GROUP(selectedplayer);
				 clone[gcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				 PED::SET_PED_AS_GROUP_LEADER(selectedplayer, my_group);
				 PED::SET_PED_AS_GROUP_MEMBER(clone[gcount], my_group);
				 PED::SET_PED_NEVER_LEAVES_GROUP(clone[gcount], my_group);
				 ENTITY::SET_ENTITY_INVINCIBLE(clone[gcount], false);
				 PED::SET_PED_COMBAT_ABILITY(clone[gcount], 100);
				 WEAPON::GIVE_WEAPON_TO_PED(clone[gcount], railgun, railgun, 9999, 9999);
				 PED::SET_PED_CAN_SWITCH_WEAPON(clone[gcount], true);
				 PED::SET_GROUP_FORMATION(my_group, 3);
				 PED::SET_PED_MAX_HEALTH(clone[gcount], 5000);
				 gcount++;
			 }
			 int eclone[1000];
			 int egcount = 1;
			 if (Menu::Option("~r~Spawn Enemy")) {
				 Ped selectedplayer = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 if (!ENTITY::DOES_ENTITY_EXIST(selectedplayer)) return;
				 Hash railgun = GAMEPLAY::GET_HASH_KEY("WEAPON_RAILGUN");
				 Vector3 pos = ENTITY::GET_ENTITY_COORDS(selectedplayer, 1);
				 Hash pedm = GAMEPLAY::GET_HASH_KEY("u_m_m_jesus_01");
				 STREAMING::REQUEST_MODEL(pedm);
				 while (!STREAMING::HAS_MODEL_LOADED(pedm))
					 WAIT(0);
				 eclone[egcount] = PED::CREATE_PED(26, pedm, pos.x + rand() % 1, pos.y + rand() % 1, pos.z + 1, 0, 1, 1);
				 ENTITY::SET_ENTITY_INVINCIBLE(eclone[egcount], false);
				PED::SET_PED_COMBAT_ABILITY(eclone[egcount], 100);
				WEAPON::GIVE_WEAPON_TO_PED(eclone[egcount], railgun, railgun, 9999, 9999);
				PED::SET_PED_CAN_SWITCH_WEAPON(eclone[egcount], true);
				AI::TASK_COMBAT_PED(eclone[egcount], selectedplayer, 1, 1);
				PED::SET_PED_ALERTNESS(eclone[egcount], 1000);
				PED::SET_PED_COMBAT_RANGE(eclone[egcount], 1000);
				 egcount++;
			 }
			if ( Menu::Option("~o~Attach")) {
				if (player != PLAYER::PLAYER_PED_ID())
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), 0, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, true, true, false, true, 2, true);
				}
			}
			if ( Menu::Option("~o~Detach")) {
				ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
			}
			if (Menu::Option("~o~Cage Player")) {
				Features::trapcage(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
			}
			 if (PLAYER::PLAYER_PED_ID() == NETWORK::NETWORK_GET_HOST_OF_SCRIPT("freemode", -1, 0)) {
				 if (Menu::Option("~g~Kick")) {
					 if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer)))
					 {
						 NETWORK::NETWORK_SESSION_KICK_PLAYER(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
					 }
				 }
			 }
			 else {
				 if (Menu::Option("~r~Kick")) {
					 if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer)))
					 {
						 NETWORK::NETWORK_SESSION_KICK_PLAYER(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer));
					 }
				 }
			 }
			 if (Menu::Option("~o~Give All Weapons")) {
				 uint Weapons[] = { 0x99B507EA, 0x678B81B1, 0x4E875F73, 0x958A4A8F, 0x440E4788, 0x84BD7BFD, 0x1B06D571, 0x5EF9FEC4, 0x22D8FE39, 0x99AEEB3B, 0x13532244, 0x2BE6766B, 0xEFE7E2DF, 0xBFEFFF6D, 0x83BF0278, 0xAF113F99, 0x9D07F764, 0x7FD62962, 0x1D073A89, 0x7846A318, 0xE284C527, 0x9D61E50F, 0x3656C8C1, 0x05FC3C11, 0x0C472FE2, 0x33058E22, 0xA284510B, 0x4DD2DC56, 0xB1CA77B1, 0x687652CE, 0x42BF8A85, 0x93E220BD, 0x2C3731D9, 0xFDBC8A50, 0x24B17070, 0x060EC506, 0x34A67B97, 0xFDBADCED, 0x23C9F95C, 0x497FACC3, 0xF9E6AA4B, 0x61012683, 0xC0A3098D, 0xD205520E, 0xBFD21232, 0x7F229F94, 0x92A27487, 0x083839C4, 0x7F7497E5, 0xA89CB99E, 0x3AABBBAA, 0xC734385A, 0x787F0BB, 0x47757124, 0xD04C944D };
				 for (int i = 0; i < (sizeof(Weapons) / 4); i++) {
					 WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), Weapons[i], 9999, 1);
					 WAIT(10);
				 }
			 }
			 if (Menu::Option("~o~Take All Weapons")) {
				 WEAPON::REMOVE_ALL_PED_WEAPONS(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), true);
			 }
			 
		 }
		 break;

		 case recover:
		 {
			 Menu::Title("~o~Recovery");

			 Menu::Option("~r~Small Risk*");

			 if (Menu::Option("~o~Give 10Mil")) {

				 Any var0 = 0ul;
				 int var3 = 312105838;
				 int bankVal = 4;

				 UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&var0, 1474183246, var3, 1445302971, 10000000, bankVal);
				 UNK3::_NETWORK_SHOP_CHECKOUT_START(var0);

			 }
			 if (Menu::Option("~o~Give 5Mil")) {

				 Any var0 = 0ul;
				 int var3 = 312105838;
				 int bankVal = 4;

				 UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&var0, 1474183246, var3, 1445302971, 10000000, bankVal);
				 UNK3::_NETWORK_SHOP_CHECKOUT_START(var0);

			 }
			 if (Menu::Option("~o~Give 1Mil")) {

				 Any var0 = 0ul;
				 int var3 = 312105838;
				 int bankVal = 4;

				 UNK3::_NETWORK_SHOP_BEGIN_SERVICE(&var0, 1474183246, var3, 1445302971, 1000000, bankVal);
				 UNK3::_NETWORK_SHOP_CHECKOUT_START(var0);

				 break;

			 if (Menu::Option("~o~Withdraw 1 Mil")) {
					 Features::withdraw(1000000);
			 }
			 if (Menu::Option("~o~Withdraw 10 Mil")) {
					 Features::withdraw(10000000);
			 }
			 if (Menu::Option("~o~Withdraw 100 Mil")) {
					 Features::withdraw(100000000);
			 }
			 break;
			 }
			 if (Menu::Option("~o~Full Recovery")) {
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CHAR_XP_FM"), Features::Levels[120], 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STAM"), 100, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STRN"), 100, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_LUNG"), 100, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_DRIV"), 100, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_FLY"), 100, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_SHO"), 100, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SCRIPT_INCREASE_STL"), 100, 0);

				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_8"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_9"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_10"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_11"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_tattoo_fm_unlocks_12"), -1, 1);

				 STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMRACEWORLDRECHOLDER"), 1, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_ENEMYDRIVEBYKILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_COMPLETED"), 50, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_USJS_FOUND"), 50, 0);
				 STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINALLRACEMODES"), 1, 0);
				 STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMWINEVERYGAMEMODE"), 1, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DB_PLAYER_KILLS"), 1000, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_KILLS_PLAYERS"), 1000, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMHORDWAVESSURVIVE"), 21, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_CAR_BOMBS_ENEMY_KILLS"), 25, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_MVP"), 60, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_HOLD_UP_SHOPS"), 20, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_RACES_WON"), 101, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_NO_ARMWRESTLING_WINS"), 21, 0);
				 STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMATTGANGHQ"), 1, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMBBETWIN"), 50000, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 51, 0);
				 STATS::STAT_SET_BOOL(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FMFULLYMODDEDCAR"), 1, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_TOTALKILLS"), 500, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_DM_TOTAL_DEATHS"), 412, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TIMES_FINISH_DM_TOP_3"), 36, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PLAYER_HEADSHOTS"), 623, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_DM_WINS"), 63, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TDM_WINS"), 13, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GTA_RACES_WON"), 12, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_GOLF_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_TG_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_RT_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_CT_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_SHOOTRANG_GRAN_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_FM_TENNIS_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TENNIS_MATCHES_WON"), 2, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_TDEATHMATCH_WON"), 63, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_WON"), 101, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_DEATHMATCH_LOST"), 23, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MPPLY_TOTAL_RACES_LOST"), 36, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_25_KILLS_STICKYBOMBS"), 50, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_50_KILLS_GRENADES"), 50, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 50, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_AWD_20_KILLS_MELEE"), 50, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTPISTOL_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PISTOL50_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_APPISTOL_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MICROSMG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSMG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTRIFLE_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CRBNRIFLE_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADVRIFLE_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CMBTMG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTMG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_PUMP_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SAWNOFF_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_BULLPUP_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ASLTSHTGN_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SNIPERRFL_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_HVYSNIPER_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRNLAUNCH_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_RPG_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MINIGUNS_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_GRENADE_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_SMKGRENADE_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_STKYBMB_ENEMY_KILLS"), 600, 0);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_MOLOTOV_ENEMY_KILLS"), 600, 0);

				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_HAIR_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_JBIB_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_LEGS_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_FEET_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_BERD_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_8"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_9"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_PROPS_10"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_OUTFIT"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_5"), -1, 1);;
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_HAIR_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_JBIB_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_6"), -1, 1);;
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_LEGS_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_FEET_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_BERD_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_8"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_9"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_PROPS_10"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_OUTFIT"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TORSO"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_SPECIAL2_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_DECL"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_AVAILABLE_TEETH_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TORSO"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_SPECIAL2_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_DECL"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_CLTHS_ACQUIRED_TEETH_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_0"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_8"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_9"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_10"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_11"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_12"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_13"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_14"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_15"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_16"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_17"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_18"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_19"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_21"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_22"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_23"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_24"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_25"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_26"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_27"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_28"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_29"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_30"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_31"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_32"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_33"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_34"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_35"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_36"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_37"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_38"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_39"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_DLC_APPAREL_ACQUIRED_40"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_2"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_3"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_4"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_5"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_6"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_7"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_8"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_9"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_13"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_1"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_10"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_11"), -1, 1);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MP0_ADMIN_CLOTHES_GV_BS_12"), -1, 1);
			 }
			 if (Menu::Option("~o~Clear Badsport Stats")) {
				 STATS::STAT_SET_FLOAT(GAMEPLAY::GET_HASH_KEY("MPPLY_OVERALL_BADSPORT"), 0.0f, TRUE);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_DESTROYED_PVEHICLES"), 0, TRUE);
				 STATS::STAT_SET_INT(GAMEPLAY::GET_HASH_KEY("MPPLY_BADSPORT_MESSAGE"), 0, TRUE);
			 }
			 if (Menu::Option("~o~Rank Set 88")) {
				 Features::SetRank(88);
			 }
			 if (Menu::Option("~o~Rank Set 100")) {
				 Features::SetRank(100);
			 }
			 if (Menu::Option("~o~Rank Set 120")) {
				 Features::SetRank(120);
			 }
			 if (Menu::Option("~o~Rank Set 200")) {
				 Features::SetRank(200);
			 }
			 if (Menu::Option("~o~Rank Set 420")) {
				 Features::SetRank(420);
			 }
			 if (Menu::Option("~o~Rank Set 500")) {
				 Features::SetRank(500);
			 }
			 if (Menu::Option("~o~Rank Set 1000")) {
				 Features::SetRank(1000);
			 }
			 if (Menu::Option("~o~Rank Set 1337")) {
				 Features::SetRank(1337);
			 }
			 if (Menu::Option("~o~Rank Set 8000")) {
				 Features::SetRank(8000);
			 }
		 }
		 break;


		 //Settings  Menu 
		 case settingsmenu:
		 {
			 Menu::Title("~o~Settings");

			 //Menu::MenuOption("Themes", settingsmenu_theme);
			 
			 Menu::MenuOption("~o~Protection", protection);
			 Menu::Option("~o~-------------------------------------------------------------");
			 Menu::Option("~r~Owner : ~g~Vaseliinikives");
			 Menu::Option("~r~Helpers :");
			 Menu::Option("~r~Lior_Modder");
			 if (Menu::Option("~o~Kill Game")) exit(0);
		 }
		 break;


		 //Protections 
		 case protection:
		 {
			 Menu::Title("~o~Protection");
			 Menu::Bool("~o~Risky Mode", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Hide Name", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Ban Protection", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~PTFX Protection", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Kick From Car Protection", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Explode Protection", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Cash Drop Protection", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Attach Object Protection", risky, [] { Features::riskyOptins(risky); });
			 Menu::Bool("~o~Crash Protection", risky, [] { Features::riskyOptins(risky); });
		 }
		 break;


		 //Settings Menu 2 
		 case settingsmenu_theme:
		 {
			 Menu::Title("Theme Menu");

			 Menu::MenuOption("Title Text", settingsmenu_theme_titletext);
			 Menu::MenuOption("Title Rect", settingsmenu_theme_titlerect);
			 Menu::MenuOption("Option Text", settingsmenu_theme_optiontext);
			 Menu::MenuOption("Option Rect", settingsmenu_theme_optionrect);
			 Menu::MenuOption("Scroller", settingsmenu_theme_scroller);
		 }
		 break;


		 //Settings Menu 3 
		 case settingsmenu_theme_titletext:
		 {
			 Menu::Title("Title Text");

			 Menu::Int("Red", Menu::Settings::titleText.r, 0, 255);
			 Menu::Int("Green", Menu::Settings::titleText.g, 0, 255);
			 Menu::Int("Blue", Menu::Settings::titleText.b, 0, 255);
			 Menu::Int("Alpha", Menu::Settings::titleText.a, 0, 255);
			 Menu::Int("Font", Menu::Settings::titleText.f, 0, 7);
		 }
		 break;


		 //Settings Menu 4 
		 case settingsmenu_theme_titlerect:
		 {
			 Menu::Title("Title Rect");

			 Menu::Int("Red", Menu::Settings::titleRect.r, 0, 255);
			 Menu::Int("Green", Menu::Settings::titleRect.g, 0, 255);
			 Menu::Int("Blue", Menu::Settings::titleRect.b, 0, 255);
			 Menu::Int("Alpha", Menu::Settings::titleRect.a, 0, 255);
		 }
		 break;


		 //Settings Menu  5
		 case settingsmenu_theme_optiontext:
		 {
			 Menu::Title("Option Text");

			 Menu::Int("Red", Menu::Settings::optionText.r, 0, 255);
			 Menu::Int("Green", Menu::Settings::optionText.g, 0, 255);
			 Menu::Int("Blue", Menu::Settings::optionText.b, 0, 255);
			 Menu::Int("Alpha", Menu::Settings::optionText.a, 0, 255);
			 Menu::Int("Font", Menu::Settings::optionText.f, 0, 7);
		 }
		 break;


		 //Settings Menu 6 
		 case settingsmenu_theme_optionrect:
		 {
			 Menu::Title("Option Rect");

			 Menu::Int("Red", Menu::Settings::optionRect.r, 0, 255);
			 Menu::Int("Green", Menu::Settings::optionRect.g, 0, 255);
			 Menu::Int("Blue", Menu::Settings::optionRect.b, 0, 255);
			 Menu::Int("Alpha", Menu::Settings::optionRect.a, 0, 255);
		 }
		 break;


		 //Settings Menu 7 
		 case settingsmenu_theme_scroller:
		 {
			 Menu::Title("Option Rect");

			 Menu::Int("Red", Menu::Settings::scroller.r, 0, 255);
			 Menu::Int("Green", Menu::Settings::scroller.g, 0, 255);
			 Menu::Int("Blue", Menu::Settings::scroller.b, 0, 255);
			 Menu::Int("Alpha", Menu::Settings::scroller.a, 0, 255);
		 }
		 break;


		 case vehicle:
		 {
			 Menu::Title("~o~Vehicle Options");
			 Menu::MenuOption("~o~Vehicle Spawner", vehspawner);
			 if (Menu::Bool("~o~Car Godmode", Features::cargodmodebool)) { Features::cargodmode(); }
			 Menu::Bool("~o~Engine Allways On", Features::enginealwaysonbool, [] { Features::enginealwayson(Features::enginealwaysonbool); });
			 Menu::Bool("~o~Horn Boost", Features::boostbool, [] { Features::carboost(Features::boostbool); });
			 Menu::Bool("~o~Flying Car", Features::fcbool, [] { Features::FlyingCarLoop(Features::fcbool); });
			 Menu::Bool("~o~Drive on Water", Features::dowbool, [] { Features::DriveOnWater(Features::dowbool); });
			 Menu::Bool("~o~Rainbow Car", Features::rlbool, [] { Features::HasPaintLoop(Features::rlbool); });
			 if (Menu::Option("~o~Fix Car")) {
				 uint Vehicle = PED::GET_VEHICLE_PED_IS_USING(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PLAYER::PLAYER_ID()));
				 VEHICLE::SET_VEHICLE_FIXED(Vehicle);
				 VEHICLE::SET_VEHICLE_DEFORMATION_FIXED(Vehicle);
				 VEHICLE::SET_VEHICLE_DIRT_LEVEL(Vehicle, 0);
			 }
			 if (Menu::Option("~o~Max Car")) {
				 Features::maxvehicle();
			 }
			 if (Menu::Option("~o~Flip Car")) {
				 Features::flipup();
			 }
			 if (Menu::Option("~o~Open Doors")) {
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 2, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 3, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 4, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 5, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 6, true, false);
				 VEHICLE::SET_VEHICLE_DOOR_OPEN(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 7, true, false);
			 }
			 if (Menu::Option("~o~Close Doors")) {
				 VEHICLE::SET_VEHICLE_DOORS_SHUT(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true);
			 }
			 if (Menu::Float("~o~Speed", Features::accelerationfloat, 0.f, 500.f, 1.0000000f)) Features::acceleration();
			 if (Menu::Float("~o~Traction", Features::tractionfloat, 0.f, 500.f, 1.0000000f)) Features::traction();
			 if (Menu::Float("~o~Brakes", Features::brakeforcefloat, 0.f, 500.f, 1.0000000f)) Features::brakeforce();
		 }
		 break;




         //Spawn Vehicle 
		 case vehspawner: {
			 Menu::Title("~o~Vehicle Spawner");
			 Menu::Bool("~o~Spawn in Car", Features::spawnincar);
			 Menu::Bool("~o~Spawn Maxed", Features::spawnmaxed);
			 Menu::MenuOption("~o~Super Sports", SuperSports);
			 Menu::MenuOption("~o~Doomsday ~v~>", Doomsday);
			 Menu::MenuOption("~o~Super", Super);
			 Menu::MenuOption("~o~Sports", Sports);
			 Menu::MenuOption("~o~Sport Classic", SportClassic);
			 Menu::MenuOption("~o~Offroad", Offroad);
			 Menu::MenuOption("~o~Sedans", Sedans);
			 Menu::MenuOption("~o~Coupes", Coupes);
			 Menu::MenuOption("~o~Muscle", Muscle);
			 Menu::MenuOption("~o~Boats", Boats);
			 Menu::MenuOption("~o~Commercial", Commercial);
			 Menu::MenuOption("~o~Compacts", Compacts);
			 Menu::MenuOption("~o~Cycles", Cycles);
			 Menu::MenuOption("~o~Emergency", Emergency);
			 Menu::MenuOption("~o~Helicopters", Helicopters);
			 Menu::MenuOption("~o~Industrial", Industrial);
			 Menu::MenuOption("~o~Military", Military);
			 Menu::MenuOption("~o~Motorcycles", Motorcycles);
			 Menu::MenuOption("~o~Planes", Planes);
			 Menu::MenuOption("~o~Service", Service);
			 Menu::MenuOption("~o~SUV", SUV);
			 Menu::MenuOption("~o~Trailer", Trailer);
			 Menu::MenuOption("~o~Trains", Trains);
			 Menu::MenuOption("~o~Utility", Utility);
			 Menu::MenuOption("~o~Vans", Vans);
		

			 break;
		 case Doomsday:
			 Menu::Title("~o~Doomsday");
			 for (auto car : Doomsday1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case SuperSports:
			 Menu::Title("~o~SuperSports");
			 for (auto car : Supersports1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Super:
			 Menu::Title("~o~Super");
			 for (auto car : Super1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Sports:
			 Menu::Title("~o~Sports");
			 for (auto car : Sports1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case SportClassic:
			 Menu::Title("~o~Sports Classic");
			 for (auto car : SportsClassics1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Offroad:
			 Menu::Title("~o~Offroad");
			 for (auto car : OffRoad1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Sedans:
			 Menu::Title("~o~Sedans");
			 for (auto car : Sedans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Coupes:
			 Menu::Title("~o~Coupes");
			 for (auto car : Coupes1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Muscle:
			 Menu::Title("~o~Muscle");
			 for (auto car : Muscle1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Boats:
			 Menu::Title("~o~Boats");
			 for (auto car : Boats1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Commercial:
			 Menu::Title("~o~Commercial");
			 for (auto car : Commercial1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Compacts:
			 Menu::Title("~o~Compacts");
			 for (auto car : Compacts1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Cycles:
			 Menu::Title("~o~Cycles");
			 for (auto car : Cycles1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Emergency:
			 Menu::Title("~o~Emergency");
			 for (auto car : Emergency1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Helicopters:
			 Menu::Title("~o~Helicopters");
			 for (auto car : Helicopters1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Industrial:
			 Menu::Title("~o~Industrial");
			 for (auto car : Industrial1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Military:
			 Menu::Title("~o~Military");
			 for (auto car : Military1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Motorcycles:
			 Menu::Title("~o~Motorcycles");
			 for (auto car : Motorcycles1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Planes:
			 Menu::Title("~o~Planes");
			 for (auto car : Planes1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Service:
			 Menu::Title("~o~Service");
			 for (auto car : Service1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case SUV:
			 Menu::Title("~o~SUV");
			 for (auto car : SUVs1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Trailer:
			 Menu::Title("~o~Trailer");
			 for (auto car : Trailer1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Trains:
			 Menu::Title("~o~Trains");
			 for (auto car : Trains1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Utility:
			 Menu::Title("~o~Utility");
			 for (auto car : Utility1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 case Vans:
			 Menu::Title("~o~Vans");
			 for (auto car : Vans1) { Menu::Option(car, [car] { Features::spawn_vehicle(car); }); }
			 break;
		 }
		 break;


		 //Force Animation
		 case forcean:
		 {
			 Menu::Title("~o~Force Animation");
			 if (Menu::Option("~o~Stop Animation")) { AI::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer)); }
			 if (Menu::Option("~o~Sex Receiver")) { Features::animatePlayer(Features::Online::selectedPlayer, "rcmpaparazzo_2", "shag_loop_poppy"); }
			 if (Menu::Option("~o~Sex Giver")) { Features::animatePlayer(Features::Online::selectedPlayer, "rcmpaparazzo_2", "shag_loop_a"); }
			 if (Menu::Option("~o~Stripper Dance")) { Features::animatePlayer(Features::Online::selectedPlayer, "mini@strip_club@private_dance@part1", "priv_dance_p1"); }
			 if (Menu::Option("~o~Pole Dance")) { Features::animatePlayer(Features::Online::selectedPlayer, "mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			 if (Menu::Option("~o~Push Ups")) { Features::animatePlayer(Features::Online::selectedPlayer, "amb@world_human_push_ups@male@base", "base"); }
			 if (Menu::Option("~o~Sit Ups")) { Features::animatePlayer(Features::Online::selectedPlayer, "amb@world_human_sit_ups@male@base", "base"); }
			 if (Menu::Option("~o~Celebrate")) { Features::animatePlayer(Features::Online::selectedPlayer, "rcmfanatic1celebrate", "celebrate"); }
			 if (Menu::Option("~o~Electrocution")) { Features::animatePlayer(Features::Online::selectedPlayer, "ragdoll@human", "electrocute"); }
			 if (Menu::Option("~o~Suicide")) { Features::animatePlayer(Features::Online::selectedPlayer, "mp_suicide", "pistol"); }
			 if (Menu::Option("~o~Showering")) { Features::animatePlayer(Features::Online::selectedPlayer, "mp_safehouseshower@male@", "male_shower_idle_b"); }
			
		 }
		 break;



		 //PTFX 
		 case PTFX:
		 {
			 Menu::Title("~o~Effects");
			 Menu::Bool("~o~Looped", Features::PTLoopedO[PLAYER::PLAYER_ID()]);
			 if (Menu::Option("~o~Clown Appears"))Features::PTFXCALL("scr_rcbarry2", "scr_rcbarry2", "scr_clown_appears");
			 if (Menu::Option("~o~Firework 1"))Features::PTFXCALL("scr_indep_fireworks", "scr_indep_fireworks", "scr_indep_firework_trailburst");
			 if (Menu::Option("~o~Firework 2"))Features::PTFXCALL("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_burst_rgw");
			 if (Menu::Option("~o~Firework 3"))Features::PTFXCALL("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_spiral_burst_rgw");
			 if (Menu::Option("~o~Banknotes"))Features::PTFXCALL("scr_ornate_heist", "scr_ornate_heist", "scr_heist_ornate_banknotes");
			 if (Menu::Option("~o~Truck Crash"))Features::PTFXCALL("scr_fbi4", "scr_fbi4", "scr_fbi4_trucks_crash");
			 if (Menu::Option("~o~Alien 1"))Features::PTFXCALL("scr_rcbarry1", "scr_rcbarry1", "scr_alien_disintegrate");
			 if (Menu::Option("~o~Alien 2"))Features::PTFXCALL("scr_rcbarry1", "scr_rcbarry1", "scr_alien_teleport");
			 if (Menu::Option("~o~Electric Box"))Features::PTFXCALL("scr_agencyheistb", "scr_agencyheistb", "scr_agency3b_elec_box");
			 if (Menu::Option("~o~Water Splash"))Features::PTFXCALL("scr_fbi5a", "scr_fbi5a", "scr_fbi5_ped_water_splash");
			 if (Menu::Option("~o~Bubbles"))Features::PTFXCALL("scr_fbi5a", "scr_fbi5a", "water_splash_ped_bubbles");
			 if (Menu::Option("~o~Blood Entry"))Features::PTFXCALL("scr_finalec2", "scr_finalec2", "scr_finale2_blood_entry");
			 if (Menu::Option("~o~Sniper Impact"))Features::PTFXCALL("scr_martin1", "scr_martin1", "scr_sol1_sniper_impact");
			 if (Menu::Option("~o~Dirt Throw"))Features::PTFXCALL("core_snow", "core_snow", "cs_mich1_spade_dirt_throw");
			 if (Menu::Option("~o~Blood Stab"))Features::PTFXCALL("scr_michael2", "scr_michael2", "scr_mich2_blood_stab");
			 if (Menu::Option("~o~Ped Sliced"))Features::PTFXCALL("scr_michael2", "scr_michael2", "scr_abattoir_ped_sliced");
			 if (Menu::Option("~o~Camera"))Features::PTFXCALL("scr_rcpaparazzo1", "scr_rcpaparazzo1", "scr_rcpap1_camera");
			 if (Menu::Option("~o~Meth Smoke"))Features::PTFXCALL("scr_familyscenem", "scr_familyscenem", "scr_meth_pipe_smoke");
			 if (Menu::Option("~o~Burial Dirt"))Features::PTFXCALL("scr_reburials", "scr_reburials", "scr_burial_dirt");

		 }
		 break;



         //PTFXO
		 case PTFXO:
		 {
			 Menu::Title("~o~Effects");
			 Menu::Bool("~o~Looped", Features::PTLoopedO[Features::Online::selectedPlayer]);
			 if (Menu::Option("~o~Clown Appears"))Features::PTFXCALLO("scr_rcbarry2", "scr_rcbarry2", "scr_clown_appears",Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Firework 1"))Features::PTFXCALLO("scr_indep_fireworks", "scr_indep_fireworks", "scr_indep_firework_trailburst", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Firework 2"))Features::PTFXCALLO("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_burst_rgw", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Firework 3"))Features::PTFXCALLO("proj_xmas_firework", "proj_xmas_firework", "scr_firework_xmas_spiral_burst_rgw", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Banknotes"))Features::PTFXCALLO("scr_ornate_heist", "scr_ornate_heist", "scr_heist_ornate_banknotes", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Truck Crash"))Features::PTFXCALLO("scr_fbi4", "scr_fbi4", "scr_fbi4_trucks_crash", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Alien 1"))Features::PTFXCALLO("scr_rcbarry1", "scr_rcbarry1", "scr_alien_disintegrate", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Alien 2"))Features::PTFXCALLO("scr_rcbarry1", "scr_rcbarry1", "scr_alien_teleport", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Electric Box"))Features::PTFXCALLO("scr_agencyheistb", "scr_agencyheistb", "scr_agency3b_elec_box", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Water Splash"))Features::PTFXCALLO("scr_fbi5a", "scr_fbi5a", "scr_fbi5_ped_water_splash", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Bubbles"))Features::PTFXCALLO("scr_fbi5a", "scr_fbi5a", "water_splash_ped_bubbles", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Blood Entry"))Features::PTFXCALLO("scr_finalec2", "scr_finalec2", "scr_finale2_blood_entry", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Sniper Impact"))Features::PTFXCALLO("scr_martin1", "scr_martin1", "scr_sol1_sniper_impact", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Dirt Throw"))Features::PTFXCALLO("core_snow", "core_snow", "cs_mich1_spade_dirt_throw", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Blood Stab"))Features::PTFXCALLO("scr_michael2", "scr_michael2", "scr_mich2_blood_stab", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Ped Sliced"))Features::PTFXCALLO("scr_michael2", "scr_michael2", "scr_abattoir_ped_sliced", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Camera"))Features::PTFXCALLO("scr_rcpaparazzo1", "scr_rcpaparazzo1", "scr_rcpap1_camera", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Meth Smoke"))Features::PTFXCALLO("scr_familyscenem", "scr_familyscenem", "scr_meth_pipe_smoke", Features::Online::selectedPlayer);
			 if (Menu::Option("~o~Burial Dirt"))Features::PTFXCALLO("scr_reburials", "scr_reburials", "scr_burial_dirt", Features::Online::selectedPlayer);


		 }
		 break;


		 //Force All Animation
		 case forceanall:
		 {
			 Menu::Title("~o~Force All Animation");
			 if (Menu::Option("~o~Stop Animation")) { Features::clearanimateallPlayer(); }
			 if (Menu::Option("~o~Sex Receiver")) { Features::animateallPlayer("rcmpaparazzo_2", "shag_loop_poppy"); }
			 if (Menu::Option("~o~Sex Giver")) { Features::animateallPlayer("rcmpaparazzo_2", "shag_loop_a"); }
			 if (Menu::Option("~o~Stripper Dance")) { Features::animateallPlayer("mini@strip_club@private_dance@part1", "priv_dance_p1"); }
			 if (Menu::Option("~o~Pole Dance")) { Features::animateallPlayer("mini@strip_club@pole_dance@pole_dance1", "pd_dance_01"); }
			 if (Menu::Option("~o~Push Ups")) { Features::animateallPlayer("amb@world_human_push_ups@male@base", "base"); }
			 if (Menu::Option("~o~Sit Ups")) { Features::animateallPlayer("amb@world_human_sit_ups@male@base", "base"); }
			 if (Menu::Option("~o~Celebrate")) { Features::animateallPlayer("rcmfanatic1celebrate", "celebrate"); }
			 if (Menu::Option("~o~Electrocution")) { Features::animateallPlayer("ragdoll@human", "electrocute"); }
			 if (Menu::Option("~o~Suicide")) { Features::animateallPlayer("mp_suicide", "pistol"); }
			 if (Menu::Option("~o~Showering")) { Features::animateallPlayer("mp_safehouseshower@male@", "male_shower_idle_b"); }

		 }
		 break;
				 

		 //Tp Other 
		 case tpother:
		 {
			 Menu::Title("~o~TP Options");
			 if (Menu::Option("~o~Teleport all to Him")) {
				 int Me = PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer);
				 Vector3 MyPosition = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Me, 0.0, 0.0, 0.0);
				 Features::teleportallcoords(MyPosition);
			 }

			 if (Menu::Option("~o~Teleport to Me")) {

				 int Me = PLAYER::PLAYER_PED_ID();
				 Vector3 MyPosition = ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Me, 0.0, 0.0, 0.0);
				 int selectedPed = Features::Online::selectedPlayer;
				 Features::teleporttocoords(selectedPed, MyPosition);

			 }
			 if (Menu::Option("~o~Teleport Into Car")) {
				 Vehicle veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(Features::Online::selectedPlayer), false);
				 for (int i = -1; i < 16; i++)
				 {
					 if (VEHICLE::IS_VEHICLE_SEAT_FREE(veh, i))
					 {
						 PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veh, i);
					 }
				 }
			 };
			 Menu::MenuOption("~o~Locations", teleportso);
			 Menu::Option("~o~Teleport To Player", [] {Features::Online::TeleportToPlayer(Features::Online::selectedPlayer); });
		 }
		 break;
#pragma endregion
		}
		Menu::End();
		WAIT(0);
		}
	}

void ScriptMain() {
	srand(GetTickCount());
	Features::TimePD = timeGetTime();
	Features::TimePD1 = timeGetTime();
	Features::TimePD2 = timeGetTime();
	Features::TimePD3 = timeGetTime();
	Features::TimePD4 = timeGetTime();
	Features::TimePD5 = timeGetTime();
	Features::TimePD6 = timeGetTime();
	Features::TimePD7 = timeGetTime();
	Features::TimePD8 = timeGetTime();
	main();
}

