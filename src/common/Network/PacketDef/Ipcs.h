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
    ActorCast = 0x00C5, // updated v5.4
    ActorControl = 0x020A, // updated v5.4
    ActorControlSelf = 0x01A8, // updated v5.4
    ActorControlTarget = 0x0151, // updated v5.4
    ActorFreeSpawn = 0x01A4, // updated v5.4
    ActorGauge = 0x0112, // updated v5.4
    ActorMove = 0x019C, // updated v5.4
    ActorOwner = 0x00E80, // global
    ActorSetPos = 0x0130, // updated v5.4
    AddStatusEffect = 0x01560, // = EffectResult
    AirshipExplorationResult = 0x032D0, // updated v5.35
    AirshipStatus = 0x0100, // updated v5.4
    AirshipStatusList = 0x01BA, // updated v5.4
    AirshipTimers = 0x0256, // updated v5.4
    AoeEffect16 = 0x00B9, // updated v5.4
    AoeEffect24 = 0x018F, // updated v5.4
    AoeEffect32 = 0x0195, // updated v5.4
    AoeEffect8 = 0x017F, // updated v5.4
    BlackList = 0x02DB0, // global
    BossStatusEffectList = 0x0000, // global
    CFAvailableContents = 0xF1FD0, // global
    CFCancel = 0x00EC0, // global
    CFDutyInfo = 0x007A0, // global
    CFMemberStatus = 0x00790, // global
    CFNotify = 0x0248, // updated v5.4
    CFPlayerInNeed = 0xF07F0,, // global
    CFPreferredRole = 0x0222, // updated v5.4
    CFRegistered = 0x010C0, // global
    CancelAllianceForming = 0x00C60, // global
    CharaFreeCompanyTag = 0x013B0, // global
    CharaNameReq = 0x008E0, // global
    CharaVisualEffect = 0x02E20, // global
    Chat = 0x03490, // global
    ChatBanned = 0xF06B0, // global
    ContainerInfo = 0x03CC, // updated v5.4
    CountdownCancel = 0x00D90, // global
    CountdownInitiate = 0x02370, // global
    CurrencyCrystalInfo = 0x034D, // updated v5.4
    DailyQuestRepeatFlags = 0x024C0, // global
    DailyQuests = 0x01390, // global
    DesynthResult = 0x00D40, // updated v5.35
    DirectorPopUp = 0xF1620, // global. display dialogue pop-ups in duties and FATEs, for example, Teraflare's countdown
    DirectorPopUp4 = 0x02140, // global
    DirectorPopUp8 = 0x00F80, // global
    DirectorVars = 0x00E60, // global
    Discovery = 0x031A0, // global
    DuelChallenge = 0x02770, // global. this is responsible for opening the ui
    Effect = 0x02EA, // updated v5.4
    EffectResult = 0x0119, // updated v5.4
    EorzeaTimeOffset = 0xF3B80, // global
    EquipDisplayFlags = 0x00BE0, // global
    EurekaStatusEffectList = 0x01670, // global
    EventFinish = 0x00DE, // updated v5.4
    EventLinkshell = 0x11690, // global
    EventPlay = 0x031F, // updated v5.4
    EventPlay128 = 0x038A0, // global
    EventPlay16 = 0x025C0, // global
    EventPlay255 = 0x034B0, // global
    EventPlay32 = 0x02C30, // updated v5.35
    EventPlay4 = 0x0072, // updated v5.4
    EventPlay64 = 0x02C10, // global
    EventPlay8 = 0x023F0, // global
    EventStart = 0x00AF, // updated v5.4
    Examine = 0x0154, // updated v5.4
    ExamineFreeCompanyInfo = 0x03400, // updated v5.35
    ExamineSearchComment = 0x01020, // global
    ExamineSearchInfo = 0x0233, // updated v5.4
    FreeCompanyBoardMsg = 0x013C0, // global
    FreeCompanyDialog = 0x00F4, // updated v5.4
    FreeCompanyInfo = 0x0255, // updated v5.4
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
    HousingWardInfo = 0x0293, // updated v5.4
    HuntingLogEntry = 0x01460, // global
    Init = 0x01850, // global
    InitSearchInfo = 0x036F0, // global
    InitZone = 0x0308, // updated v5.4
    InventoryActionAck = 0x03C0, // updated v5.4
    InventoryTransaction = 0x02D0, // updated v5.4
    InventoryTransactionFinish = 0x0229, // updated v5.4
    ItemInfo = 0x02FC, // updated v5.4
    LandInfoSign = 0x0206, // updated v5.3
    LandPriceUpdate = 0x02380, // global
    LandRename = 0x023A0, // global
    LandSetInitialize = 0x02340, // global
    LandSetMap = 0x025A0, // global
    LandUpdate = 0x02350, // global
    LandUpdateHouseName = 0x02570, // global
    LinkshellList = 0x01F00, // global
    LogMessage = 0x00D0,
    Logout = 0x011B0, // updated v5.35
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
    MarketBoardItemListing = 0x02E1, // updated v5.4
    MarketBoardItemListingCount = 0x0263, // updated v5.4
    MarketBoardItemListingHistory = 0x01B0, // updated v5.4
    MarketBoardPurchase = 0x0099, // updated v5.4
    MarketBoardSearchResult = 0x0253, // updated v5.4
    MiniCactpotInit = 0x01FB, // updated v5.4
    ModelEquip = 0x02770, // global
    Mount = 0x01B50, // global
    NpcSpawn = 0x0349, // updated v5.4
    NpcSpawn2 = 0x01CB0, // global ( Bigger statuseffectlist? ) 
    ObjectDespawn = 0xF34B0, // global
    ObjectSpawn = 0x00FE, // updated v5.4
    PartyChat = 0x0065,
    PartyList = 0x02B20, // global
    PartyMessage = 0x00AE0, // global
    PerformNote = 0x02860, // global
    PersistantEffect = 0x03170, // global
    Ping = 0x02190, // global
    PlaceFieldMarker = 0x03E4, // updated v5.4
    PlaceFieldMarkerPreset = 0x01BD, // updated v5.4
    PlayerAddedToBlacklist = 0x033F0, // global
    PlayerClassInfo = 0x02C30, // global
    PlayerRemovedFromBlacklist = 0x03850, // global
    PlayerSetup = 0x01F7, // updated v5.4
    PlayerSpawn = 0x02C2, // updated v5.4
    PlayerStateFlags = 0x00F80, // global
    PlayerStats = 0x03BC, // updated v5.4
    PlayerTitleList = 0x037D0, // global
    Playtime = 0x033B, // updated v5.4
    PrepareZoning = 0x00C6, // updated v5.4
    QuestActiveList = 0x01170, // global
    QuestCompleteList = 0x02400, // global
    QuestFinish = 0x00E90, // global
    QuestMessage = 0x03810, // global
    QuestTracker = 0x018B0, // global
    QuestUpdate = 0x00730, // global
    ReqMoogleMailLetter = 0xF1390, // global
    ReqMoogleMailList = 0xF1380, // global
    ResultDialog = 0x01ED, // updated v5.4
    RetainerInformation = 0x03C3, // updated v5.4
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
    SomeDirectorUnk4 = 0x02E7, // updated v5.4
    SomeDirectorUnk8 = 0x028A0, // global
    StatusEffectList = 0x00EB, // updated v5.4
    StatusEffectList2 = 0x030E0,// updated v5.35
    SubmarineExplorationResult = 0x030A0, // updated v5.35
    SubmarineProgressionStatus = 0x0087, // updated v5.4
    SubmarineStatusList = 0x01AB, // updated v5.4
    SubmarineTimers = 0x00BA, // updated v5.4
    UpdateClassInfo = 0x0067, // updated v5.4
    UpdateHpMpTp = 0x01A4, // updated v5.4
    UpdateInventorySlot = 0x038D, // updated v5.4
    UpdateRetainerItemSalePrice = 0xF19F0, // global
    UpdateSearchInfo = 0x03AD, // updated v5.4
    WeatherChange = 0x02610, // updated v5.35
    WorldVisitList = 0xF0FE0, // global
    YardObjectSpawn = 0xF2360, // global
  };

  /**
  * Client IPC Zone Type Codes.
  */
  enum ClientZoneIpcType : uint16_t
  {
    AoESkillHandler = 0x030C0, // global
    BlackListHandler = 0x00790, // global
    BuildPresetHandler = 0x01500, // global
    CFCancelHandler = 0x03320, // global
    CFCommenceHandler = 0x01180, // global
    CFDutyInfoHandler = 0x00780, // global
    CFRegisterDuty = 0x02890, // global
    CFRegisterRoulette = 0x00880, // global
    CancelLogout = 0x03DB0, // global
    ChatHandler = 0x00B7, // updated v5.4
    ClientTrigger = 0x031A, // updated v5.4
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
    InventoryModifyHandler = 0x0283, // updated v5.4 (Base offset: 0x028A)
    KickPartyMemberHandler = 0x014C0, // global
    LandRenameHandler = 0xF1770, // global
    LeavePartyHandler = 0x03370, // global
    LinkshellEventHandler = 0x016B0, // global
    LinkshellEventHandler1 = 0x016C0, // global
    LinkshellListHandler = 0x024B0, // global
    LogoutHandler = 0x00B8, // updated v5.35
    MarketBoardPurchaseHandler = 0x0367, // updated v5.4
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
    SetSearchInfoHandler = 0x0094, // updated v5.4
    SetSharedEstateSettings = 0x017B0, // global
    ShopEventHandler = 0x01560, // global
    SkillHandler = 0x01CD0, // global
    SocialListHandler = 0x03400, // global
    SocialReqSendHandler = 0x03870, // global
    SocialResponseHandler = 0x028D0, // global
    TalkEventHandler = 0x02A40, // global
    TradeMultipleReturnEventHander = 0x035C0, // global
    TradeReturnEventHandler = 0x00A40, // global
    UpdatePositionHandler = 0x0224, // updated v5.4
    UpdatePositionInstance = 0x01E2, // updated v5.4
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
