#ifndef _CORE_NETWORK_PACKETS_IPCS_H
#define _CORE_NETWORK_PACKETS_IPCS_H

#include <stdint.h>

namespace Sapphire::Network::Packets
{

  ////////////////////////////////////////////////////////////////////////////////
  /// Lobby Connection IPC Codes
  /**
  * Server IPC Lobby Type Codes.
  */
  enum ServerLobbyIpcType : uint16_t
  {
    LobbyError = 0x0002,
    LobbyServiceAccountList = 0x000C,
    LobbyCharList = 0x000D,
    LobbyCharCreate = 0x000E,
    LobbyEnterWorld = 0x000F,
    LobbyServerList = 0x0015,
    LobbyRetainerList = 0x0017,

  };

  /**
  * Client IPC Lobby Type Codes.
  */
  enum ClientLobbyIpcType : uint16_t
  {
    ReqCharList = 0x0003,
    ReqEnterWorld = 0x0004,
    ClientVersionInfo = 0x0005,

    ReqCharDelete = 0x000A,
    ReqCharCreate = 0x000B,
  };

  ////////////////////////////////////////////////////////////////////////////////
  /// Zone Connection IPC Codes
  /**
  * Server IPC Zone Type Codes.
  */
  enum ServerZoneIpcType : uint16_t
  {
    // Ping = 0x0219, // 
    // Init = 0x0185, // 

    // ActorFreeSpawn = 0x0239, // 
    InitZone = 0x00BA, // updated 5.25

    // EffectResult = 0x01C2, // 
    ActorControl = 0x03B6, // updated 5.25
    ActorControlSelf = 0x0200, // updated 5.25
    ActorControlTarget = 0x01DE, // updated 5.25

    /*!
     * @brief Used when resting
     */
    UpdateHpMpTp = 0x03BE, // updated 5.25

    ///////////////////////////////////////////////////

    // ChatBanned = 0xF06B,
    Playtime = 0x02EB, // updated 5.25
    // Logout = 0x02AD, // 
    CFNotify = 0x0242, // updated 5.25
    // CFMemberStatus = 0x0079,
    // CFDutyInfo = 0x007A,
    // CFPlayerInNeed = 0xF07F,
    CFPreferredRole = 0x02F1, // updated 5.25
    // CFCancel = 0x00EC, // 
    // SocialRequestError = 0xF0AD,

    // CFRegistered = 0x010C, // 
    // SocialRequestResponse = 0x01C7, // 
    // SocialMessage = 0x0308, // 
    // SocialMessage2 = 0x037C, // 
    // CancelAllianceForming = 0x00C6, // 

    // LogMessage = 0x00D0,

    // Chat = 0x0349, // 
    // PartyChat = 0x0065,

    // WorldVisitList = 0xF0FE, // 

    // SocialList = 0x0216, // 

    ExamineSearchInfo = 0x01A2, // updated 5.25
    UpdateSearchInfo = 0x00B2, // updated 5.25
    // InitSearchInfo = 0x036F, // 
    // ExamineSearchComment = 0x0102, // 

    // ServerNoticeShort = 0x0115, // 
    ServerNotice = 0x02A9, // updated 5.25
    // SetOnlineStatus = 0x03D7, // 

    // CountdownInitiate = 0x0237, // 
    // CountdownCancel = 0x00D9, // 

    // PlayerAddedToBlacklist = 0x033F, // 
    // PlayerRemovedFromBlacklist = 0x0385, // 
    // BlackList = 0x02DB, // 

    // LinkshellList = 0x01F0, // 

    // MailDeleteRequest = 0xF12B, // 

    // 12D - 137 - constant gap between 4.5x -> 5.0
    // ReqMoogleMailList = 0xF138, // 
    // ReqMoogleMailLetter = 0xF139, // 
    // MailLetterNotification = 0x013A, // 

    MarketTaxRates = 0x03E4, // updated 5.25

    MarketBoardSearchResult = 0x0277, // updated 5.25
    MarketBoardItemListing = 0x0191, // updated 5.25
    MarketBoardItemListingCount = 0x00F0, // updated 5.25
    MarketBoardItemListingHistory = 0x01C3, // updated 5.25
    
    // CharaFreeCompanyTag = 0x013B, // 
    // FreeCompanyBoardMsg = 0x013C, // 
    // FreeCompanyInfo = 0xF13D, // 
    // ExamineFreeCompanyInfo = 0xF13E, // 

    // FreeCompanyUpdateShortMessage = 0xF157, // 

    AddStatusEffect = 0x0280, // updated 5.25
    StatusEffectList = 0x013D, // updated 5.25
    // EurekaStatusEffectList = 0x0167, // 
    BossStatusEffectList = 0x0292, // updated 5.25
    Effect = 0x0198, // updated 5.25
    AoeEffect8 = 0x0305, // updated 5.25
    AoeEffect16 = 0x0173, // updated 5.25
    AoeEffect24 = 0x02A1, // updated 5.25
    AoeEffect32 = 0x0129, // updated 5.25
    // PersistantEffect = 0x0317, // 

    // GCAffiliation = 0xF16F, // 

    PlayerSpawn = 0x019B, // updated 5.25
    NpcSpawn = 0x023E, // updated 5.25
    // NpcSpawn2 = 0x01CB, // ( Bigger statuseffectlist? ) 
    ActorMove = 0x0117, // updated 5.25

    ActorSetPos = 0x01DA, // updated 5.25

    ActorCast = 0x0310, // updated 5.25
    // SomeCustomiseChangePacketProbably = 0x00CD, // 

    // PartyList = 0x02B2, // 
    // PartyMessage = 0x00AE, // 
    // HateRank = 0x02CC, // 
    // HateList = 0x0198, // 
    ObjectSpawn = 0x01F2, // updated 5.25
    // ObjectDespawn = 0xF34B, // 
    UpdateClassInfo = 0x024E, // updated 5.25
    // SilentSetClassJob = 0x018E, // seems to be the case, not sure if it's actually used for anything
    PlayerSetup = 0x0269, // updated 5.25
    PlayerStats = 0x007D, // updated 5.25
    // ActorOwner = 0x00E8, // 
    // PlayerStateFlags = 0x00F8, // 
    // PlayerClassInfo = 0x02C3, // 
    // CharaVisualEffect = 0x02E2, // 

    WaymarkPreset = 0x031B, // updated 5.25
    WaymarkSingle = 0x03E2, // updated 5.25

    // ModelEquip = 0x0277, // 
    Examine = 0x01E4, // updated 5.25
    // CharaNameReq = 0x008E, // 

    // nb: see #565 on github
    // UpdateRetainerItemSalePrice = 0xF19F, // 
    // RetainerSaleHistory = 0x020E, // 
    RetainerInformation = 0x0078, // updated 5.25

    // SetLevelSync = 0x1186, // 

    ItemInfo = 0x0228, // updated 5.25
    // ContainerInfo = 0x00C5, // 
    InventoryTransaction = 0x02A3, // updated 5.25
    InventoryTransactionFinish = 0x013F, // updated 5.25
    CurrencyCrystalInfo = 0x00E6, // updated 5.25

    InventoryActionAck = 0x0344, // updated 5.25
    UpdateInventorySlot = 0x00A3, // updated 5.25

    // HuntingLogEntry = 0x0146, // 

    EventPlay = 0x011E, // updated 5.25
    EventPlay4 = 0x02F3, // updated 5.25
    // EventPlay8 = 0x023F, // 
    // EventPlay16 = 0x025B, // 
    EventPlay32 = 0x0157, // updated 5.25 
    // EventPlay64 = 0x02C1, // 
    // EventPlay128 = 0x038A, // 
    // EventPlay255 = 0x034B, // 

    EventStart = 0x0272, // updated 5.25 
    EventFinish = 0x02C2, // updated 5.25 

    // EventLinkshell = 0x1169,

    // QuestActiveList = 0x0117, // 
    // QuestUpdate = 0x0073, // 
    // QuestCompleteList = 0x0240, // 

    // QuestFinish = 0x00E9, // 
    // MSQTrackerComplete = 0xF1D6, // 
    // MSQTrackerProgress = 0xF1CD, // this actually looks like the two opcodes have been combined, see #474

    // QuestMessage = 0x0381, // 

    // QuestTracker = 0x018B, // 

    // Mount = 0x01B5, // 

    // DirectorVars = 0x00E6, // 
    // SomeDirectorUnk1 = 0x0084, // 
    // SomeDirectorUnk2 = 0xF0C1, // 
    SomeDirectorUnk4 = 0x02DA, // updated 5.25
    // SomeDirectorUnk8 = 0x028A, // 
    // SomeDirectorUnk16 = 0x028C, // 
    // DirectorPopUp = 0xF162, // display dialogue pop-ups in duties and FATEs, for example, Teraflare's countdown
    // DirectorPopUp4 = 0x0214, // 
    // DirectorPopUp8 = 0x00F8, // 

    // CFAvailableContents = 0xF1FD, // 

    WeatherChange = 0x025B, // updated 5.25
    // PlayerTitleList = 0x037D, // 
    // Discovery = 0x031B, // 

    // EorzeaTimeOffset = 0xF3B8, // 

    // EquipDisplayFlags = 0x00BE, // 

    // MiniCactpotInit = 0x0286, // 
    // ShopMessage = 0x0197, // 
    // LootMessage = 0x01B7, // 

    /// Housing //////////////////////////////////////

    // LandSetInitialize = 0x0234, // 
    // LandUpdate = 0x0235, // 
    // YardObjectSpawn = 0xF236, // 
    // HousingIndoorInitialize = 0x0237, // 
    // LandPriceUpdate = 0x0238, // 
    // LandInfoSign = 0x023D, // 
    // LandRename = 0x023A, // 
    // HousingEstateGreeting = 0x023B, // 
    // HousingUpdateLandFlagsSlot = 0x023C, // 
    // HousingLandFlags = 0x022F, // 
    // HousingShowEstateGuestAccess = 0x023E, // 

    // HousingObjectInitialize = 0x01AA, // 
    // HousingInternalObjectSpawn = 0xF241, // 

    // HousingWardInfo = 0x02FD, // 
    // HousingObjectMove = 0xF244, // 

    // SharedEstateSettingsResponse = 0x0245, // 

    // LandUpdateHouseName = 0x0257, // 

    // LandSetMap = 0x025B, // 

    //////////////////////////////////////////////////

    // DuelChallenge = 0x0277, // this is responsible for opening the ui
    // PerformNote = 0x0286, // 

    // PrepareZoning = 0x026C, // 
    ActorGauge = 0x02F9, // updated 5.25

    // daily quest info -> without them sent,  login will take longer...
    // DailyQuests = 0x0139, // 
    // DailyQuestRepeatFlags = 0x024C, // 

    /// Doman Mahjong //////////////////////////////////////
    // MahjongOpenGui = 0x02A4, // only available in mahjong instance
    // MahjongNextRound = 0x02BD, // initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
    // MahjongPlayerAction = 0x02BE, // tsumo(as in drawing a tile) called chi/pon/kan/riichi
    // MahjongEndRoundTsumo = 0x02BF, // called tsumo
    // MahjongEndRoundRon = 0x2C0, // called ron or double ron (waiting for action must be flagged from discard packet to call)
    // MahjongTileDiscard = 0x02C1, // giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
    // MahjongPlayersInfo = 0x02C2, // actor id, name, rating and stuff..
    // 2C3 and 2C4 are currently unknown
    // MahjongEndRoundDraw = 0x02C5, // self explanatory
    // MahjongEndGame = 0x02C6, // finished oorasu(all-last) round; shows a result screen.
  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {
    // PingHandler = 0x0219, // 
    // InitHandler = 0x0185, // 

    // FinishLoadingHandler = 0x01BE, // 

    // CFCommenceHandler = 0x0118, // 

    // CFCancelHandler = 0x0332, // 
    // CFRegisterDuty = 0x0289, // 
    // CFRegisterRoulette = 0x0088, // 
    // PlayTimeHandler = 0x02A8, // 
    // LogoutHandler = 0x00EC, // 
    // CancelLogout = 0x03DB, // 

    // CFDutyInfoHandler = 0x0078, // 

    // SocialReqSendHandler = 0x0387, // 
    // SocialResponseHandler = 0x028D, // 
    // CreateCrossWorldLS = 0x00AF, // 

    // ChatHandler = 0x0131, // 
    // PartyChatHandler = 0x0065,
    // PartySetLeaderHandler = 0x0208, // 
    // LeavePartyHandler = 0x0337, // 
    // KickPartyMemberHandler = 0x014C, // 
    // DisbandPartyHandler = 0x0205, // 

    // SocialListHandler = 0x0340, // 
    // SetSearchInfoHandler = 0x0314, // 
    // ReqSearchInfoHandler = 0x01E9, // 
    // ReqExamineSearchCommentHandler = 0x00E7, // 

    // ReqRemovePlayerFromBlacklist = 0x00F1, // 
    // BlackListHandler = 0x0079, // 
    // PlayerSearchHandler = 0x00F4, // 

    // LinkshellListHandler = 0x024B, // 

    // MarketBoardRequestItemListingInfo = 0x0102, // 
    // MarketBoardRequestItemListings = 0x0103, // 
    // MarketBoardSearch = 0x0107, // 

    // ReqExamineFcInfo = 0x0113, // 

    // FcInfoReqHandler = 0x011A, // 

    // FreeCompanyUpdateShortMessageHandler = 0x0123, // 

    // ReqMarketWishList = 0x012C, // 

    // ReqJoinNoviceNetwork = 0x0129, // 

    // ReqCountdownInitiate = 0x009A, // updated 5.25
    // ReqCountdownCancel = 0x0244, // updated 5.25

    // ZoneLineHandler = 0x0279, // 
    // ClientTrigger = 0x03D3, // 
    // DiscoveryHandler = 0x00E3, // 

    // PlaceFieldMarkerPreset = 0x023F, // updated 5.25
    // PlaceFieldMarker = 0x01BA, // updated 5.25
    // SkillHandler = 0x01CD, // 
    // GMCommand1 = 0x02AC, // 
    // GMCommand2 = 0x029F, // 
    // AoESkillHandler = 0x030C, // 

    // UpdatePositionHandler = 0x0236, // 

    // InventoryModifyHandler = 0x0135, // 
    
    // InventoryEquipRecommendedItems = 0x0149, // 

    // ReqPlaceHousingItem = 0x014B, // 
    // BuildPresetHandler = 0x0150, // 

    // TalkEventHandler = 0x02A4, // 
    // EmoteEventHandler = 0x02C8, // 
    // WithinRangeEventHandler = 0x0209, // 
    // OutOfRangeEventHandler = 0x0319, // 
    // EnterTeriEventHandler = 0x0192, // 
    // ShopEventHandler = 0x0156, // 

    // ReturnEventHandler = 0x02B4, // 
    // TradeReturnEventHandler = 0x00A4, // 
    // TradeMultipleReturnEventHander = 0x035C, // 

    // LinkshellEventHandler = 0x016B, // 
    // LinkshellEventHandler1 = 0x016C, // 

    // ReqEquipDisplayFlagsChange = 0x02F6, // 

    // LandRenameHandler = 0xF177, // 
    // HousingUpdateHouseGreeting = 0x0178, // 
    // HousingUpdateObjectPosition = 0x0159, // updated 5.25

    // SetSharedEstateSettings = 0x017B, // 

    // UpdatePositionInstance = 0x0345, // 

    // PerformNoteHandler = 0x029B, // 

    // WorldInteractionHandler = 0x00A9, // 
    // Dive = 0x02CC, // 
  };

  ////////////////////////////////////////////////////////////////////////////////
  /// Chat Connection IPC Codes
  /**
  * Server IPC Chat Type Codes.
  */
  enum ServerChatIpcType : uint16_t
  {
    Tell = 0x0064, // updated for sb
    TellErrNotFound = 0x0066,

    FreeCompanyEvent = 0x012C, // 
  };

  /**
  * Client IPC Chat Type Codes.
  */
  enum ClientChatIpcType : uint16_t
  {
    TellReq = 0x0064,
  };


}

#endif /*_CORE_NETWORK_PACKETS_IPCS_H*/
