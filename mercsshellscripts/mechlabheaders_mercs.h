//Zone IDs
#define MLLeftLegZone 0
#define MLRightLegZone 1
#define MLLeftArmZone 2
#define MLRightArmZone 3
#define MLRightTorsoZone 4
#define MLLeftTorsoZone 5
#define MLCenterTorsoZone 6
#define MLHeadZone 7
#define MLSpecialZone1 8
#define MLSpecialZone2 9

//Callback IDs
#define MLGetDummyData -1
#define MLDataSetupLeftArm 0			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupRightArm 1			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupLeftLeg 2			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupRightLeg 3			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupLeftTorso 4			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupRightTorso 5			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupCenterTorso 6		//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupHead 7				//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupMechSelection 8
#define MLDataSetupChassisSelection 9
#define MLCreateNewMech 10
#define MLSelectNewMech 11
#define MLInitChassisTab 12
#define MLInitWeaponsTab 13
#define MLInitArmorTab 14
#define MLDataSetupSpecial1 15			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupSpecial2 16			//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupAllWeapons 17		//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupBeamWeapons 18		//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupProjectileWeapons 19	//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupMissileWeapons 20	//IDs, SlotType, SlotSize, ton, dam, range, heat, num
#define MLDataSetupGetMechData 21		//ID, ton, battle, heat eff
#define MLDataSetupGetMechArmor 22		//Vals, Max Vals, type, int type, points per, ton, tot
#define MLDataSetupGetMechNoEditData 23
#define MLDataSetupGetEngineSpeed 24
#define MLSetEngineUpgrade 25
#define MLSetEngineDegrade 26
#define MLDataSetupGetHeatSinks 27
#define MLAddHeatSink 28
#define MLRemoveHeatSink 29
#define MLGetJumpJets 30
#define MLSetJumpJets 31
#define MLGetECM 32
#define MLSetECM 33
#define MLGetBeagle 34
#define MLSetBeagle 35
#define MLSetArmorType 36
#define MLAddArmorToZone 37
#define MLRemoveArmorFromZone 38

//Data manipulation
#define MLAddSubsystem 40
#define MLRemoveSubsystem 41
#define MLRemoveAllSubsystems 42
#define MLAutoAddSubsystem 43

//Weapon Grouping
#define MLDataGetWeaponGroups 44
#define MLSetWeaponGroup 45
#define MLClearWeaponGroup 46
#define MLSetAllWeaponGroups 47

//other stuff
#define MLSave 48
#define MLExit 49
#define MLDeleteMech 50
#define MLRestore 51
#define MLRename 52

//Ammo Support
#define MLDataGetWeaponAmmo 53
#define MLAddWeaponAmmo 54
#define MLRemoveWeaponAmmo 55

//Skin Support
#define MLGetSkinListCount 56
#define MLDataGetSkinList 57
#define MLSetMechSkin 58

#define MLGetLightAmp 59
#define MLSetLightAmp 60

//Added Functions
#define MLSetArmorZoneValue 61
#define MLDistributeArmor 62
#define MLGetAMS 63
#define MLSetAMS 64
#define MLGetLAMS 65
#define MLSetLAMS 66
#define MLGetBaseMechName 67
#define MLGetMechStatus 68
#define MLGetBlackMarketItemCount 69

//Expansion Functions

//Black Market Support

#define BMDataSetupSalvageChits			71 //IDs, tradeValues, num
#define BMDataSetupOfferingChits		72
#define BMDataSetupMarketChits			73
#define BMDataSetupAcquiringChits		74

#define BMOfferItemForTrade				75	//ID
#define BMCancelOfferForTrade			76  //ID
#define BMAcquireItemForTrade			77  //ID
#define BMCancelAcquireForTrade			78  //ID

#define BMIsTradeValid					79

#define BMGetOfferingValue				80
#define BMGetAcquiringValue				81

#define BMExecuteTrade					82
#define BMExit							83

#define BMDataSetupBeamWeaponSalvageChits	84
#define BMDataSetupBallisticWeaponSalvageChits	85
#define BMDataSetupMissileWeaponSalvageChits	86
#define BMDataSetupMechSalvageChits		87

#define BMDataSetupBeamWeaponMarketChits	88
#define BMDataSetupBallisticWeaponMarketChits	89
#define BMDataSetupMissileWeaponMarketChits	90
#define BMDataSetupMechMarketChits		91

#define BMRestore						92

// Enhanced Optics
#define MLGetEnhancedOptics 93
#define MLSetEnhancedOptics 94

// IFF Jammer
#define MLGetIFF_Jammer 95
#define MLSetIFF_Jammer 96

// Advanced Gyro
#define MLGetAdvancedGyro 97
#define MLSetAdvancedGyro 98

// New free market callbacks
#define	 FMDataSetupPlayerWeaponChits         	  	100
#define	 FMDataSetupPlayerBeamWeaponChits	  	  	101
#define	 FMDataSetupPlayerBallisticWeaponChits	  	102
#define	 FMDataSetupPlayerMissileWeaponChits  	  	103
#define	 FMDataSetupPlayerMechChits		  	  	  	104
#define	 FMDataSetupPlayerMechLightChits	  	  	105
#define	 FMDataSetupPlayerMechMediumChits	  	  	106
#define	 FMDataSetupPlayerMechHeavyChits	  	  	107
#define	 FMDataSetupPlayerMechAssaultChits	  	  	108
#define	 FMDataSetupPlayerPersonnelChits	  	  	109
#define	 FMDataSetupMarketWeaponChits		  	  	110
#define	 FMDataSetupMarketBeamWeaponChits	  	  	111
#define	 FMDataSetupMarketBallisticWeaponChits	  	112
#define	 FMDataSetupMarketMissileWeaponChits  	  	113
#define	 FMDataSetupMarketMechChits		  	  	  	114
#define	 FMDataSetupMarketMechLightChits	  	  	115
#define	 FMDataSetupMarketMechMediumChits	  	  	116
#define	 FMDataSetupMarketMechHeavyChits	  	  	117
#define	 FMDataSetupMarketMechAssaultChits	  	  	118
#define	 FMDataSetupMarketPersonnelChits      	  	119
#define	 FMDataSetupTransactingChits      	  		120
#define	 FMOfferToSellItem							121
#define  FMCancelOfferToSellItem					122
#define  FMOfferToBuyItem							123
#define  FMCancelOfferToBuyItem						124
#define  FMCancelAllTransactions					125
#define  FMCompleteSales							126
#define  FMCompletePurchases						127



//Mech IDs
// NOTE: IF YOU CHANGE THESE, YOU MUST ALSO CHANGE THE CONSTANTS IN MWCONST.ABI!!!
//       YOU MUST ALSO CHANGE THE CHASSIS LOOKUP TABLE IN MECH.HPP/MECH.CPP
#define FirstMechID 		0
#define	M_ArcticWolf	   	0
#define	M_Argus		       	1
#define	M_Atlas		       	2
#define	M_Awesome	       	3
#define	M_BlackKnight	   	4
#define	M_Bushwacker	   	5
#define	M_Catapult	   	   	6
#define	M_CauldronBorn	   	7
#define	M_Chimera	       	8
#define	M_Cougar	       	9
#define	M_Daishi	       	10
#define	M_Dragon	       	11
#define M_Fafnir            12
#define	M_Flea		       	13
#define M_Gladiator         14
#define M_Hauptmann         15
#define	M_Hellhound	       	16
#define	M_Hellspawn	       	17
#define	M_Highlander	   	18
#define	M_Hunchback	       	19
#define	M_Kodiak	       	20
#define	M_Loki		       	21
#define M_Longbow           22
#define	M_Madcat	       	23
#define	M_Madcat_MKII	   	24
#define	M_Masakari	       	25
#define	M_Mauler	       	26
#define	M_Novacat	       	27
#define	M_Osiris	       	28
#define M_Owens             29
#define M_Puma              30
#define	M_Raven		       	31
#define	M_Ryoken	       	32
#define	M_Shadowcat	       	33
#define	M_Sunder	       	34
#define	M_Templar           35
#define	M_Thanatos	       	36
#define	M_Thor		       	37
#define	M_Uller		       	38
#define	M_Uziel		       	39
#define M_Victor            40
#define	M_Vulture	       	41
#define	M_Wolfhound	       	42
#define	M_Zeus		       	43
#define LastMSMechID		43	//mektek

#define	M_Avatar		44	// mektek
#define	M_Warhammer		45	// mektek
#define	M_Strider		46	// mektek
#define	M_Marauder		47	// mektek
#define	M_Bloodasp		48	// mektek
#define	M_Ares			49	// mektek
#define	M_Stalker		50	// mektek
#define	M_UrbanmechIIC		51	// mektek
#define	M_Urbanmech		52	// mektek
#define	M_BrcticWolf		53	// Mechstorm


		// #define LastMechID 		M_Urbanmech	// mektek // Mechstorm
		 #define LastMechID 		M_BrcticWolf 	// Mechstorm

#define NoMechID 		LastMechID + 1 //This is used for the stack sprites in the campaign screen...//mektek
#define M_CameraShip LastMechID+1
#define EmptyMechID LastMechID+2



//Expansion Mech trading chits
//This offset for Mech ID is so that
//you can trade chassis on the Black Market
//by trading these Mech Chits
//Since Weapons are traded as well, the Mech these
//Mech chit IDs need to be unique among the weapons.
//
#define FirstMechChitID 150
#define FirstPersonnelChitID 200



//Weapon IDs
#define EmptyWeaponID       -1
//Beams
#define FirstWeaponID       0
#define FirstBeamID         0
#define W_LargeLaser        0
#define W_MediumLaser       1
#define W_SmallLaser        2
#define W_ERLargeLaser      3
#define W_ERMediumLaser     4
#define W_ERSmallLaser      5
#define W_LargePulse        6
#define W_MediumPulse       7
#define W_SmallPulse        8
#define W_LargeXPulse       9
#define W_MedXPulse         10
#define W_SmallXPulse       11
#define W_ERLargePulse      12
#define W_ERMediumPulse     13
#define W_ERSmallPulse      14
#define W_PPC               15
#define W_ERPPC             16
#define W_Flamer            17
#define W_ERFlamer          18
//#define LastBeamID          18	// Evil
#define W_CapPPC            19	// Evil
#define W_HeavyLargeLaser   20	// Evil
#define W_HeavyMediumLaser  21	// Evil
#define LastBeamID          21	// Evil
//#define W_HeavySmallLaser   22  // Evil (reserved)

//Missiles
#define FirstMissileID      51
#define W_LRM5              51
#define W_LRM10             52
#define W_LRM15             53
#define W_LRM20             54
#define W_ClanLRM5          55
#define W_ClanLRM10         56
#define W_ClanLRM15         57
#define W_ClanLRM20         58
#define W_MRM10             59
#define W_MRM20             60
#define W_MRM30             61
#define W_MRM40             62
#define W_SMRM10            63
#define W_SMRM20            64
#define W_SMRM30            65
#define W_SMRM40            66
#define W_SRM2              67
#define W_SRM4              68
#define W_SRM6              69
#define W_SSRM2             70
#define W_SSRM4             71
#define W_SSRM6             72
#define W_ArrowCluster      73
#define W_ArrowHeavy        74
#define W_NarcBeacon        75
#define W_ClanNarcBeacon    76
#define W_Flare             77
#define W_ArtilleryStrike   78
//#define LastMissileID       78
#define W_ISRM2             79  // Evil
#define W_RL20              80  // Evil
#define W_ATM6M             81  // Evil
#define W_ATM12M            82  // Evil
#define W_ATM6E             83  // Evil
#define W_ATM12E            84  // Evil
#define LastMissileID       84  // Evil


//Projectiles
#define W_MiniGauss          89	 // jeho
#define FirstProjectileID    90  // mektek
#define W_Napalm             90  // jeho
#define W_LongTomTracer      91  // jeho
#define W_ThumperTracer      92  // jeho
#define W_Thumper            93  // Evil
#define W_ClanLightMGun      94  // Evil
#define W_LAC5               95  // Evil
#define W_HVAC2              96  // Evil
#define W_HVAC5              97  // Evil
#define W_HVAC10             98  // Evil
#define W_HVAC20             99  // Evil
#define W_AC5               100
#define W_AC10              101
#define W_AC20              102
#define W_LBXAC10           103
#define W_LBXAC20           104
#define W_ClanLBXAC10       105
#define W_ClanLBXAC20       106
#define W_RTXAC2            107
#define W_RTXAC5            108
#define W_UltraAC2          109
#define W_UltraAC5          110
#define W_UltraAC10 	    111
#define W_UltraAC20		    112
#define W_ClanUltraAC2      113
#define W_ClanUltraAC5      114
#define W_ClanUltraAC10		115
#define W_ClanUltraAC20     116
#define W_LightGauss        117
#define W_Gauss             118
#define W_HeavyGauss        119
#define W_ClanGauss         120
#define W_MachineGun        121
#define W_ClanMachineGun    122
#define W_LongTom           123
#define LastProjectileID    123
#define LastWeaponID        123

//unique weapon
#define W_ModlLaser			125

#define FirstGenericSubsystemID 131
#define Sub_JumpJet 131
#define Sub_AMS 132
#define Sub_LAMS 133
#define Sub_ECM	134
#define Sub_HeatSink 135
#define Sub_Beagle 136
#define Sub_LightAmp 137
#define Sub_EnhancedOptics 138
#define Sub_IFF_Jammer 139
#define Sub_AdvancedGyro 140
#define LastGenericSubsystemID 140




//Weapon Slot defines
#define Slot_Empty -1
#define Slot_Missile 0
#define Slot_Projectile 1
#define Slot_Beam 2
#define Slot_Omni 3

//Armor Values
#define A_LeftLeg 0
#define A_RightLeg 1
#define A_LeftArm 2
#define A_RightArm 3
#define A_RightTorso 4
#define A_LeftTorso 5
#define A_CenterTorso 6
#define A_RearTorso 7
#define A_Head 8

//Armor Values
#define Armor_Ferro 0
#define Armor_Reactive 1
#define Armor_Reflective 2

//Internal Values
#define Internal_Standard 0
#define Internal_EndoSteel 1

//Tech Types
#define Tech_IS 0
#define Tech_Clan 1

