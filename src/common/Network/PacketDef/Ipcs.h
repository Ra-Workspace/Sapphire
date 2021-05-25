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

    ActorCast = 0x00EB,// v5.4 Hot-fix
    ActorControl = 0x01CF,// v5.4 Hot-fix
    ActorControlSelf = 0x0307,// v5.4 Hot-fix
    ActorControlTarget = 0x01DF,// v5.4 Hot-fix
    ActorGauge = 0x00A5,// v5.4 Hot-fix
    ActorMove = 0x0182,// v5.4 Hot-fix
    ActorSetPos = 0x03B5,// v5.4 Hot-fix
    AirshipExplorationResult = 0x0130, // v5.4 Hot-fix
    AirshipStatus = 0x0333,// v5.4 Hot-fix
    AirshipStatusList = 0x02F3,// v5.4 Hot-fix
    AirshipTimers = 0x02D6,// v5.4 Hot-fix
    AoeEffect16 = 0x0131,// v5.4 Hot-fix
    AoeEffect24 = 0x03C0,// v5.4 Hot-fix
    AoeEffect32 = 0x0361,// v5.4 Hot-fix
    AoeEffect8 = 0x0235,// v5.4 Hot-fix
    CFNotify = 0x033D,// v5.4 Hot-fix
    CFPreferredRole = 0x0359,// v5.4 Hot-fix
    ContainerInfo = 0x038B,// v5.4 Hot-fix
    CurrencyCrystalInfo = 0x01C5,// v5.4 Hot-fix
    DesynthResult = 0x0203, // v5.4 Hot-fix
    Effect = 0x00B5,// v5.4 Hot-fix
    EffectResult = 0x01F2,// v5.4 Hot-fix
    EventFinish = 0x0224,// v5.4 Hot-fix
    EventPlay = 0x012C,// v5.4 Hot-fix
    EventPlay32 = 0x00D9, // v5.4 Hot-fix
    EventPlay4 = 0x01A6,// v5.4 Hot-fix
    EventStart = 0x030B,// v5.4 Hot-fix
    Examine = 0x0193,// v5.4 Hot-fix
    ExamineFreeCompanyInfo = 0x028B, // v5.4 Hot-fix
    ExamineSearchInfo = 0x02A4,// v5.4 Hot-fix
    FreeCompanyDialog = 0x0269,// v5.4 Hot-fix
    FreeCompanyInfo = 0x0087,// v5.4 Hot-fix
    HousingWardInfo = 0x00DF, // v5.4 Hot-fix
    InitZone = 0x035A,// v5.4 Hot-fix
    InventoryActionAck = 0x007E,// v5.4 Hot-fix
    InventoryTransaction = 0x0209,// v5.4 Hot-fix
    InventoryTransactionFinish = 0x00CE,// v5.4 Hot-fix
    ItemInfo = 0x01C6,// v5.4 Hot-fix
    Logout = 0x0396, // v5.4 Hot-fix
    MarketBoardItemListing = 0x009D,// v5.4 Hot-fix
    MarketBoardItemListingCount = 0x02FA,// v5.4 Hot-fix
    MarketBoardItemListingHistory = 0x03AE,// v5.4 Hot-fix
    MarketBoardPurchase = 0x02E6,// v5.4 Hot-fix
    MarketBoardSearchResult = 0x0220,// v5.4 Hot-fix
    MiniCactpotInit = 0x00A4,// v5.4 Hot-fix
    NpcSpawn = 0x0144,// v5.4 Hot-fix
    ObjectSpawn = 0x013D,// v5.4 Hot-fix
    PlaceFieldMarker = 0x02A7,// v5.4 Hot-fix
    PlaceFieldMarkerPreset = 0x0118,// v5.4 Hot-fix
    PlayerSetup = 0x02AA,// v5.4 Hot-fix
    PlayerSpawn = 0x00A7,// v5.4 Hot-fix
    PlayerStats = 0x02BF,// v5.4 Hot-fix
    Playtime = 0x0179,// v5.4 Hot-fix
    PrepareZoning = 0x0143, // v5.4 Hot-fix
    ResultDialog = 0x008F,// v5.4 Hot-fix
    RetainerInformation = 0x03BC,// v5.4 Hot-fix
    SomeDirectorUnk4 = 0x007C,// v5.4 Hot-fix
    StatusEffectList = 0x0113,// v5.4 Hot-fix
    StatusEffectList2 = 0x0389, // v5.4 Hot-fix
    SubmarineExplorationResult = 0x0117, // v5.4 Hot-fix
    SubmarineProgressionStatus = 0x0093,// v5.4 Hot-fix
    SubmarineStatusList = 0x03A0,// v5.4 Hot-fix
    SubmarineTimers = 0x018C,// v5.4 Hot-fix
    UpdateClassInfo = 0x0088,// v5.4 Hot-fix
    UpdateHpMpTp = 0x03E5,// v5.4 Hot-fix
    UpdateInventorySlot = 0x00BD,// v5.4 Hot-fix
    UpdateSearchInfo = 0x0344,// v5.4 Hot-fix
    WeatherChange = 0x01A9, // v5.4 Hot-fix
    
    ActorFreeSpawn = 0x01A40, // unknown
    ActorOwner = 0x00E80, // global
    AddStatusEffect = 0x01560, // = EffectResult
    BlackList = 0x02DB0, // global
    BossStatusEffectList = 0x0000, // global
    CFAvailableContents = 0xF1FD0, // global
    CFCancel = 0x00EC0, // global
    CFDutyInfo = 0x007A0, // global
    CFMemberStatus = 0x00790, // global
    CFPlayerInNeed = 0xF07F0,, // global
    CFRegistered = 0x010C0, // global
    CancelAllianceForming = 0x00C60, // global
    CharaFreeCompanyTag = 0x013B0, // global
    CharaNameReq = 0x008E0, // global
    CharaVisualEffect = 0x02E20, // global
    Chat = 0x03490, // global
    ChatBanned = 0xF06B0, // global
    CountdownCancel = 0x00D90, // global
    CountdownInitiate = 0x02370, // global
    DailyQuestRepeatFlags = 0x024C0, // global
    DailyQuests = 0x01390, // global
    DirectorPopUp = 0xF1620, // global. display dialogue pop-ups in duties and FATEs, for example, Teraflare's countdown
    DirectorPopUp4 = 0x02140, // global
    DirectorPopUp8 = 0x00F80, // global
    DirectorVars = 0x00E60, // global
    Discovery = 0x031A0, // global
    DuelChallenge = 0x02770, // global. this is responsible for opening the ui
    EorzeaTimeOffset = 0xF3B80, // global
    EquipDisplayFlags = 0x00BE0, // global
    EurekaStatusEffectList = 0x01670, // global
    EventLinkshell = 0x11690, // global
    EventPlay128 = 0x038A0, // global
    EventPlay16 = 0x025C0, // global
    EventPlay255 = 0x034B0, // global
    EventPlay64 = 0x02C10, // global
    EventPlay8 = 0x023F0, // global
    ExamineSearchComment = 0x01020, // global
    FreeCompanyBoardMsg = 0x013C0, // global
    FreeCompanyUpdateShortMessage = 0xF1570, // global
    GCAffiliation = 0xF16F0, // global
    HateList = 0x01980, // global
    HateRank = 0x02CC0, // global
    HousingEstateGreeting = 0x023B0, // global
    HousingIndoorInitialize = 0x02370, // global
    HousingInternalObjectSpawn = 0xF2410, // global
    HousingLandFlags = 0x022F0, // global
    HousingObjectInitialize = 0x01AA0, // global
    HousingObjectMove = 0xF2440, // global
    HousingShowEstateGuestAccess = 0x023E0, // global
    HousingUpdateLandFlagsSlot = 0x023C0, // global
    HuntingLogEntry = 0x01460, // global
    Init = 0x01850, // global
    InitSearchInfo = 0x036F0, // global
    LandInfoSign = 0x02060, // updated v5.3
    LandPriceUpdate = 0x02380, // global
    LandRename = 0x023A0, // global
    LandSetInitialize = 0x02340, // global
    LandSetMap = 0x025A0, // global
    LandUpdate = 0x02350, // global
    LandUpdateHouseName = 0x02570, // global
    LinkshellList = 0x01F00, // global
    LogMessage = 0x00D0,
    LootMessage = 0x01B70, // global
    MSQTrackerComplete = 0xF1D60, // global
    MSQTrackerProgress = 0xF1CD0, // global. this actually looks like the two opcodes have been combined, see #474
    MahjongEndGame = 0x02C60, // global. finished oorasu(all-last) round; shows a result screen.
    MahjongEndRoundDraw = 0x02C50, // global. self explanatory
    MahjongEndRoundRon = 0x2C00, // global. called ron or double ron (waiting for action must be flagged from discard packet to call)
    MahjongEndRoundTsumo = 0x02BF0, // global. called tsumo
    MahjongNextRound = 0x02BD0, // global. initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
    MahjongOpenGui = 0x02A40, // global. only available in mahjong instance
    MahjongPlayerAction = 0x02BE0, // global. tsumo(as in drawing a tile) called chi/pon/kan/riichi
    MahjongPlayersInfo = 0x02C20, // global. actor id, name, rating and stuff..
    MahjongTileDiscard = 0x02C10, // global. giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
    MailDeleteRequest = 0xF12B0, // global
    MailLetterNotification = 0x013A0, // global
    ModelEquip = 0x02770, // global
    Mount = 0x01B50, // global
    NpcSpawn2 = 0x01CB0, // global ( Bigger statuseffectlist? ) 
    ObjectDespawn = 0xF34B0, // global
    PartyChat = 0x0065,
    PartyList = 0x02B20, // global
    PartyMessage = 0x00AE0, // global
    PerformNote = 0x02860, // global
    PersistantEffect = 0x03170, // global
    Ping = 0x02190, // global
    PlayerAddedToBlacklist = 0x033F0, // global
    PlayerClassInfo = 0x02C30, // global
    PlayerRemovedFromBlacklist = 0x03850, // global
    PlayerStateFlags = 0x00F80, // global
    PlayerTitleList = 0x037D0, // global
    QuestActiveList = 0x01170, // global
    QuestCompleteList = 0x02400, // global
    QuestFinish = 0x00E90, // global
    QuestMessage = 0x03810, // global
    QuestTracker = 0x018B0, // global
    QuestUpdate = 0x00730, // global
    ReqMoogleMailLetter = 0xF1390, // global
    ReqMoogleMailList = 0xF1380, // global
    RetainerSaleHistory = 0x020E0, // global
    ServerNoticeShort = 0x01150, // global
    SetLevelSync = 0x11860, // global
    SetOnlineStatus = 0x03D70, // global
    SharedEstateSettingsResponse = 0x02450, // global
    ShopMessage = 0x01970, // global
    SilentSetClassJob = 0x018E0, // global. seems to be the case, not sure if it's actually used for anything
    SocialList = 0x02160, // global
    SocialMessage = 0x03080, // global
    SocialMessage2 = 0x037C0, // global
    SocialRequestError = 0xF0AD,
    SocialRequestResponse = 0x01C70, // global
    SomeCustomiseChangePacketProbably = 0x00CD0, // global
    SomeDirectorUnk1 = 0x00840, // global
    SomeDirectorUnk16 = 0x028C0, // global
    SomeDirectorUnk2 = 0xF0C10, // global
    SomeDirectorUnk8 = 0x028A0, // global
    UpdateRetainerItemSalePrice = 0xF19F0, // global
    WorldVisitList = 0xF0FE0, // global
    YardObjectSpawn = 0xF2360, // global
  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {

    ChatHandler = 0x00D6,// v5.4 Hot-fix
    ClientTrigger = 0x014E,// v5.4 Hot-fix
    InventoryModifyHandler = 0x0200,// v5.4 Hot-fix (Base offset: 0x0207)
    LogoutHandler = 0x02FD, // v5.4 Hot-fix
    MarketBoardPurchaseHandler = 0x0357,// v5.4 Hot-fix
    SetSearchInfoHandler = 0x01B7,// v5.4 Hot-fix
    UpdatePositionHandler = 0x039C,// v5.4 Hot-fix
    UpdatePositionInstance = 0x034B,// v5.4 Hot-fix

    AoESkillHandler = 0x030C0, // global
    BlackListHandler = 0x00790, // global
    BuildPresetHandler = 0x01500, // global
    CFCancelHandler = 0x03320, // global
    CFCommenceHandler = 0x01180, // global
    CFDutyInfoHandler = 0x00780, // global
    CFRegisterDuty = 0x02890, // global
    CFRegisterRoulette = 0x00880, // global
    CancelLogout = 0x03DB0, // global
    CreateCrossWorldLS = 0x00AF0, // global
    DisbandPartyHandler = 0x02050, // global
    DiscoveryHandler = 0x00E30, // global
    Dive = 0x02CC0, // global
    EmoteEventHandler = 0x02C80, // global
    EnterTeriEventHandler = 0x01920, // global
    FcInfoReqHandler = 0x011A0, // global
    FinishLoadingHandler = 0x01BE0, // global
    FreeCompanyUpdateShortMessageHandler = 0x01230, // global
    GMCommand1 = 0x02AC0, // global
    GMCommand2 = 0x029F0, // global
    HousingUpdateHouseGreeting = 0x01780, // global
    HousingUpdateObjectPosition = 0x01590, // global
    InitHandler = 0x01850, // global
    InventoryEquipRecommendedItems = 0x01490, // global
    KickPartyMemberHandler = 0x014C0, // global
    LandRenameHandler = 0xF1770, // global
    LeavePartyHandler = 0x03370, // global
    LinkshellEventHandler = 0x016B0, // global
    LinkshellEventHandler1 = 0x016C0, // global
    LinkshellListHandler = 0x024B0, // global
    MarketBoardRequestItemListingInfo = 0x01020, // global
    MarketBoardRequestItemListings = 0x01030, // global
    MarketBoardSearch = 0x01070, // global
    OutOfRangeEventHandler = 0x03190, // global
    PartyChatHandler = 0x0065,
    PartySetLeaderHandler = 0x02080, // global
    PerformNoteHandler = 0x029B0, // global
    PingHandler = 0x02190, // global
    PlayTimeHandler = 0x02A80, // global
    PlayerSearchHandler = 0x00F40, // global
    ReqCountdownCancel = 0x02440, // global
    ReqCountdownInitiate = 0x009A0, // global
    ReqEquipDisplayFlagsChange = 0x02F60, // global
    ReqExamineFcInfo = 0x01130, // global
    ReqExamineSearchCommentHandler = 0x00E70, // global
    ReqJoinNoviceNetwork = 0x01290, // global
    ReqMarketWishList = 0x012C0, // global
    ReqPlaceHousingItem = 0x014B0, // global
    ReqRemovePlayerFromBlacklist = 0x00F10, // global
    ReqSearchInfoHandler = 0x01E90, // global
    ReturnEventHandler = 0x02B40, // global
    SetSharedEstateSettings = 0x017B0, // global
    ShopEventHandler = 0x01560, // global
    SkillHandler = 0x01CD0, // global
    SocialListHandler = 0x03400, // global
    SocialReqSendHandler = 0x03870, // global
    SocialResponseHandler = 0x028D0, // global
    TalkEventHandler = 0x02A40, // global
    TradeMultipleReturnEventHander = 0x035C0, // global
    TradeReturnEventHandler = 0x00A40, // global
    WithinRangeEventHandler = 0x02090, // global
    WorldInteractionHandler = 0x00A90, // global
    ZoneLineHandler = 0x02790, // global
  };

    ////////////////////////////////////////////////////////////////////////////////
    /// Chat Connection IPC Codes
    /**
    * Server IPC Chat Type Codes.
    */
    enum ServerChatIpcType : ushort
    {
        Tell = 0x0064, // updated for sb
        TellErrNotFound = 0x0066,
        FreeCompanyEvent = 0x012C,
    };

    /**
    * Client IPC Chat Type Codes.
    */
    enum ClientChatIpcType : ushort
    {
      TellReq = 0x0064,
    };


}

#endif /*_CORE_NETWORK_PACKETS_IPCS_H*/
