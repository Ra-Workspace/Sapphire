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
    Ping = 0x0219, // global
    Init = 0x0185, // global

    ActorFreeSpawn = 0x0239, // global
    InitZone = 0x00BA, // updated 5.25

    EffectResult = 0x01C2, // global
    ActorControl = 0x03B6, // updated 5.25
    ActorControlSelf = 0x0200, // updated 5.25
    ActorControlTarget = 0x01DE, // updated 5.25

    /*!
     * @brief Used when resting
     */
    UpdateHpMpTp = 0x03BE, // updated 5.25

    ///////////////////////////////////////////////////

    ChatBanned = 0xF06B,
    Playtime = 0x02EB, // updated 5.25
    Logout = 0x02AD, // global
    CFNotify = 0x0242, // updated 5.25
    CFMemberStatus = 0x0079,
    CFDutyInfo = 0x007A,
    CFPlayerInNeed = 0xF07F,
    CFPreferredRole = 0x02F1, // updated 5.25
    CFCancel = 0x00EC, // global
    SocialRequestError = 0xF0AD,

    CFRegistered = 0x010C, // global
    SocialRequestResponse = 0x01C7, // global
    SocialMessage = 0x0308, // global
    SocialMessage2 = 0x037C, // global
    CancelAllianceForming = 0x00C6, // global

    LogMessage = 0x00D0,

    Chat = 0x0349, // global
    PartyChat = 0x0065,

    WorldVisitList = 0xF0FE, // global

    SocialList = 0x0216, // global

    ExamineSearchInfo = 0x01A2, // updated 5.25
    UpdateSearchInfo = 0x00B2, // updated 5.25
    InitSearchInfo = 0x036F, // global
    ExamineSearchComment = 0x0102, // global

    ServerNoticeShort = 0x0115, // global
    ServerNotice = 0x02A9, // updated 5.25
    SetOnlineStatus = 0x03D7, // global

    CountdownInitiate = 0x0237, // global
    CountdownCancel = 0x00D9, // global

    PlayerAddedToBlacklist = 0x033F, // global
    PlayerRemovedFromBlacklist = 0x0385, // global
    BlackList = 0x02DB, // global

    LinkshellList = 0x01F0, // global

    MailDeleteRequest = 0xF12B, // global

    // 12D - 137 - constant gap between 4.5x -> 5.0
    ReqMoogleMailList = 0xF138, // global
    ReqMoogleMailLetter = 0xF139, // global
    MailLetterNotification = 0x013A, // global

    MarketTaxRates = 0x03E4, // updated 5.25

    MarketBoardSearchResult = 0x0277, // updated 5.25
    MarketBoardItemListing = 0x0191, // updated 5.25
    MarketBoardItemListingCount = 0x00F0, // updated 5.25
    MarketBoardItemListingHistory = 0x01C3, // updated 5.25
    
    CharaFreeCompanyTag = 0x013B, // global
    FreeCompanyBoardMsg = 0x013C, // global
    FreeCompanyInfo = 0xF13D, // global
    ExamineFreeCompanyInfo = 0xF13E, // global

    FreeCompanyUpdateShortMessage = 0xF157, // global

    AddStatusEffect = 0x0280, // updated 5.25
    StatusEffectList = 0x013D, // updated 5.25
    EurekaStatusEffectList = 0x0167, // global
    BossStatusEffectList = 0x0292, // updated 5.25
    Effect = 0x0198, // updated 5.25
    AoeEffect8 = 0x0305, // updated 5.25
    AoeEffect16 = 0x0173, // updated 5.25
    AoeEffect24 = 0x02A1, // updated 5.25
    AoeEffect32 = 0x0129, // updated 5.25
    PersistantEffect = 0x0317, // global

    GCAffiliation = 0xF16F, // global

    PlayerSpawn = 0x019B, // updated 5.25
    NpcSpawn = 0x023E, // updated 5.25
    NpcSpawn2 = 0x01CB, // global ( Bigger statuseffectlist? ) 
    ActorMove = 0x0117, // updated 5.25

    ActorSetPos = 0x01DA, // updated 5.25

    ActorCast = 0x0310, // updated 5.25
    SomeCustomiseChangePacketProbably = 0x00CD, // global

    PartyList = 0x02B2, // global
    PartyMessage = 0x00AE, // global
    HateRank = 0x02CC, // global
    HateList = 0x0198, // global
    ObjectSpawn = 0x01F2, // updated 5.25
    ObjectDespawn = 0xF34B, // global
    UpdateClassInfo = 0x024E, // updated 5.25
    SilentSetClassJob = 0x018E, // global. seems to be the case, not sure if it's actually used for anything
    PlayerSetup = 0x0269, // updated 5.25
    PlayerStats = 0x007D, // updated 5.25
    ActorOwner = 0x00E8, // global
    PlayerStateFlags = 0x00F8, // global
    PlayerClassInfo = 0x02C3, // global
    CharaVisualEffect = 0x02E2, // global

    PlaceFieldMarkerPreset = 0x031B, // updated 5.25
    PlaceFieldMarker = 0x03E2, // updated 5.25

    ModelEquip = 0x0277, // global
    Examine = 0x01E4, // updated 5.25
    CharaNameReq = 0x008E, // global

    // nb: see #565 on github
    UpdateRetainerItemSalePrice = 0xF19F, // global
    RetainerSaleHistory = 0x020E, // global
    RetainerInformation = 0x0078, // updated 5.25

    SetLevelSync = 0x1186, // global

    ItemInfo = 0x0228, // updated 5.25
    ContainerInfo = 0x00C5, // global
    InventoryTransaction = 0x02A3, // updated 5.25
    InventoryTransactionFinish = 0x013F, // updated 5.25
    CurrencyCrystalInfo = 0x00E6, // updated 5.25

    InventoryActionAck = 0x0344, // updated 5.25
    UpdateInventorySlot = 0x00A3, // updated 5.25

    HuntingLogEntry = 0x0146, // global

    EventPlay = 0x011E, // updated 5.25
    EventPlay4 = 0x02F3, // updated 5.25
    EventPlay8 = 0x023F, // global
    EventPlay16 = 0x025B, // global
    EventPlay32 = 0x0157, // updated 5.25 
    EventPlay64 = 0x02C1, // global
    EventPlay128 = 0x038A, // global
    EventPlay255 = 0x034B, // global

    EventStart = 0x0272, // updated 5.25 
    EventFinish = 0x02C2, // updated 5.25 

    EventLinkshell = 0x1169,

    QuestActiveList = 0x0117, // global
    QuestUpdate = 0x0073, // global
    QuestCompleteList = 0x0240, // global

    QuestFinish = 0x00E9, // global
    MSQTrackerComplete = 0xF1D6, // global
    MSQTrackerProgress = 0xF1CD, // global. this actually looks like the two opcodes have been combined, see #474

    QuestMessage = 0x0381, // global

    QuestTracker = 0x018B, // global

    Mount = 0x01B5, // global

    DirectorVars = 0x00E6, // global
    SomeDirectorUnk1 = 0x0084, // global
    SomeDirectorUnk2 = 0xF0C1, // global
    SomeDirectorUnk4 = 0x02DA, // updated 5.25
    SomeDirectorUnk8 = 0x028A, // global
    SomeDirectorUnk16 = 0x028C, // global
    DirectorPopUp = 0xF162, // global. display dialogue pop-ups in duties and FATEs, for example, Teraflare's countdown
    DirectorPopUp4 = 0x0214, // global
    DirectorPopUp8 = 0x00F8, // global

    CFAvailableContents = 0xF1FD, // global

    WeatherChange = 0x025B, // updated 5.25
    PlayerTitleList = 0x037D, // global
    Discovery = 0x031B, // global

    EorzeaTimeOffset = 0xF3B8, // global

    EquipDisplayFlags = 0x00BE, // global

    MiniCactpotInit = 0x0286, // global
    ShopMessage = 0x0197, // global
    LootMessage = 0x01B7, // global

    /// Housing //////////////////////////////////////

    LandSetInitialize = 0x0234, // global
    LandUpdate = 0x0235, // global
    YardObjectSpawn = 0xF236, // global
    HousingIndoorInitialize = 0x0237, // global
    LandPriceUpdate = 0x0238, // global
    LandInfoSign = 0x023D, // global
    LandRename = 0x023A, // global
    HousingEstateGreeting = 0x023B, // global
    HousingUpdateLandFlagsSlot = 0x023C, // global
    HousingLandFlags = 0x022F, // global
    HousingShowEstateGuestAccess = 0x023E, // global

    HousingObjectInitialize = 0x01AA, // global
    HousingInternalObjectSpawn = 0xF241, // global

    HousingWardInfo = 0x02FD, // global
    HousingObjectMove = 0xF244, // global

    SharedEstateSettingsResponse = 0x0245, // global

    LandUpdateHouseName = 0x0257, // global

    LandSetMap = 0x025B, // global

    //////////////////////////////////////////////////

    DuelChallenge = 0x0277, // global. this is responsible for opening the ui
    PerformNote = 0x0286, // global

    PrepareZoning = 0x026C, // global
    ActorGauge = 0x02F9, // updated 5.25

    // daily quest info -> without them sent,  login will take longer...
    DailyQuests = 0x0139, // global
    DailyQuestRepeatFlags = 0x024C, // global

    /// Doman Mahjong //////////////////////////////////////
    MahjongOpenGui = 0x02A4, // global. only available in mahjong instance
    MahjongNextRound = 0x02BD, // global. initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
    MahjongPlayerAction = 0x02BE, // global. tsumo(as in drawing a tile) called chi/pon/kan/riichi
    MahjongEndRoundTsumo = 0x02BF, // global. called tsumo
    MahjongEndRoundRon = 0x2C0, // global. called ron or double ron (waiting for action must be flagged from discard packet to call)
    MahjongTileDiscard = 0x02C1, // global. giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
    MahjongPlayersInfo = 0x02C2, // global. actor id, name, rating and stuff..
    // 2C3 and 2C4 are currently unknown
    MahjongEndRoundDraw = 0x02C5, // global. self explanatory
    MahjongEndGame = 0x02C6, // global. finished oorasu(all-last) round; shows a result screen.
  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {
    PingHandler = 0x0219, // global
    InitHandler = 0x0185, // global

    FinishLoadingHandler = 0x01BE, // global

    CFCommenceHandler = 0x0118, // global

    CFCancelHandler = 0x0332, // global
    CFRegisterDuty = 0x0289, // global
    CFRegisterRoulette = 0x0088, // global
    PlayTimeHandler = 0x02A8, // global
    LogoutHandler = 0x00EC, // global
    CancelLogout = 0x03DB, // global

    CFDutyInfoHandler = 0x0078, // global

    SocialReqSendHandler = 0x0387, // global
    SocialResponseHandler = 0x028D, // global
    CreateCrossWorldLS = 0x00AF, // global

    ChatHandler = 0x0131, // global
    PartyChatHandler = 0x0065,
    PartySetLeaderHandler = 0x0208, // global
    LeavePartyHandler = 0x0337, // global
    KickPartyMemberHandler = 0x014C, // global
    DisbandPartyHandler = 0x0205, // global

    SocialListHandler = 0x0340, // global
    SetSearchInfoHandler = 0x0314, // global
    ReqSearchInfoHandler = 0x01E9, // global
    ReqExamineSearchCommentHandler = 0x00E7, // global

    ReqRemovePlayerFromBlacklist = 0x00F1, // global
    BlackListHandler = 0x0079, // global
    PlayerSearchHandler = 0x00F4, // global

    LinkshellListHandler = 0x024B, // global

    MarketBoardRequestItemListingInfo = 0x0102, // global
    MarketBoardRequestItemListings = 0x0103, // global
    MarketBoardSearch = 0x0107, // global

    ReqExamineFcInfo = 0x0113, // global

    FcInfoReqHandler = 0x011A, // global

    FreeCompanyUpdateShortMessageHandler = 0x0123, // global

    ReqMarketWishList = 0x012C, // global

    ReqJoinNoviceNetwork = 0x0129, // global

    ReqCountdownInitiate = 0x009A, // global
    ReqCountdownCancel = 0x0244, // global

    ZoneLineHandler = 0x0279, // global
    ClientTrigger = 0x03D3, // global
    DiscoveryHandler = 0x00E3, // global

    PlaceFieldMarkerPreset = 0x023F, // global
    PlaceFieldMarker = 0x01BA, // global
    SkillHandler = 0x01CD, // global
    GMCommand1 = 0x02AC, // global
    GMCommand2 = 0x029F, // global
    AoESkillHandler = 0x030C, // global

    UpdatePositionHandler = 0x0236, // global

    InventoryModifyHandler = 0x0135, // global
    
    InventoryEquipRecommendedItems = 0x0149, // global

    ReqPlaceHousingItem = 0x014B, // global
    BuildPresetHandler = 0x0150, // global

    TalkEventHandler = 0x02A4, // global
    EmoteEventHandler = 0x02C8, // global
    WithinRangeEventHandler = 0x0209, // global
    OutOfRangeEventHandler = 0x0319, // global
    EnterTeriEventHandler = 0x0192, // global
    ShopEventHandler = 0x0156, // global

    ReturnEventHandler = 0x02B4, // global
    TradeReturnEventHandler = 0x00A4, // global
    TradeMultipleReturnEventHander = 0x035C, // global

    LinkshellEventHandler = 0x016B, // global
    LinkshellEventHandler1 = 0x016C, // global

    ReqEquipDisplayFlagsChange = 0x02F6, // global

    LandRenameHandler = 0xF177, // global
    HousingUpdateHouseGreeting = 0x0178, // global
    HousingUpdateObjectPosition = 0x0159, // global

    SetSharedEstateSettings = 0x017B, // global

    UpdatePositionInstance = 0x0345, // global

    PerformNoteHandler = 0x029B, // global

    WorldInteractionHandler = 0x00A9, // global
    Dive = 0x02CC, // global
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

    FreeCompanyEvent = 0x012C,
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
