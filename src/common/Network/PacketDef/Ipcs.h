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
    ActorCast = 0x012C,// updated v5.35
    ActorControl = 0x017A,// updated v5.35
    ActorControlSelf = 0x007C,// updated v5.35
    ActorControlTarget = 0x0268,// updated v5.35
    ActorFreeSpawn = 0x010D,// updated v5.35
    ActorGauge = 0x0116,// updated v5.35
    ActorMove = 0x02F0,// updated v5.35
    ActorOwner = 0x00E80, // global
    ActorSetPos = 0x0306,// updated v5.35
    AddStatusEffect = 0x0156, // updated v5.3
    AirshipExplorationResult = 0x032D, // updated v5.35
    AirshipStatus = 0x013F,// updated v5.35
    AirshipStatusList = 0x0130,// updated v5.35
    AirshipTimers = 0x017C,// updated v5.35
    AoeEffect16 = 0x02D1,// updated v5.35
    AoeEffect24 = 0x01A4,// updated v5.35
    AoeEffect32 = 0x016E,// updated v5.35
    AoeEffect8 = 0x0199,// updated v5.35
    BlackList = 0x02DB0, // global
    BossStatusEffectList = 0x0000, // global
    CFAvailableContents = 0xF1FD0, // global
    CFCancel = 0x00EC0, // global
    CFDutyInfo = 0x007A0, // global
    CFMemberStatus = 0x00790, // global
    CFNotify = 0x0088,// updated v5.35
    CFPlayerInNeed = 0xF07F0,, // global
    CFPreferredRole = 0x00EF,// updated v5.35
    CFRegistered = 0x010C0, // global
    CancelAllianceForming = 0x00C60, // global
    CharaFreeCompanyTag = 0x013B0, // global
    CharaNameReq = 0x008E0, // global
    CharaVisualEffect = 0x02E20, // global
    Chat = 0x03490, // global
    ChatBanned = 0xF06B0, // global
    ContainerInfo = 0x00C50, // global
    CountdownCancel = 0x00D90, // global
    CountdownInitiate = 0x02370, // global
    CurrencyCrystalInfo = 0x0069,// updated v5.35
    DailyQuestRepeatFlags = 0x024C0, // global
    DailyQuests = 0x01390, // global
    DesynthResult = 0x00D4, // updated v5.35
    DirectorPopUp = 0xF1620, // global. display dialogue pop-ups in duties and FATEs, for example, Teraflare's countdown
    DirectorPopUp4 = 0x02140, // global
    DirectorPopUp8 = 0x00F80, // global
    DirectorVars = 0x00E60, // global
    Discovery = 0x031A0, // global
    DuelChallenge = 0x02770, // global. this is responsible for opening the ui
    Effect = 0x02D0,// updated v5.35
    EffectResult = 0x0204,// updated v5.35
    EorzeaTimeOffset = 0xF3B80, // global
    EquipDisplayFlags = 0x00BE0, // global
    EurekaStatusEffectList = 0x01670, // global
    EventFinish = 0x02EC,// updated v5.35
    EventLinkshell = 0x11690, // global
    EventPlay = 0x0121,// updated v5.35
    EventPlay128 = 0x038A0, // global
    EventPlay16 = 0x025C0, // global
    EventPlay255 = 0x034B0, // global
    EventPlay32 = 0x02C3, // updated v5.35
    EventPlay4 = 0x034C,// updated v5.35
    EventPlay64 = 0x02C10, // global
    EventPlay8 = 0x023F0, // global
    EventStart = 0x028D,// updated v5.35
    Examine = 0x02F5,// updated v5.35
    ExamineFreeCompanyInfo = 0x0340, // updated v5.35
    ExamineSearchComment = 0x01020, // global
    ExamineSearchInfo = 0x039F,// updated v5.35
    FreeCompanyBoardMsg = 0x013C0, // global
    FreeCompanyInfo = 0x01D3,// updated v5.35
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
    HousingWardInfo = 0x02FD0, // global
    HuntingLogEntry = 0x01460, // global
    Init = 0x01850, // global
    InitSearchInfo = 0x036F0, // global
    InitZone = 0x03BF,// updated v5.35
    InventoryActionAck = 0x02A5,// updated v5.35
    InventoryTransaction = 0x01E9,// updated v5.35
    InventoryTransactionFinish = 0x0157,// updated v5.35
    ItemInfo = 0x0287,// updated v5.35
    LandInfoSign = 0x0206, // updated v5.3
    LandPriceUpdate = 0x02380, // global
    LandRename = 0x023A0, // global
    LandSetInitialize = 0x02340, // global
    LandSetMap = 0x025A0, // global
    LandUpdate = 0x02350, // global
    LandUpdateHouseName = 0x02570, // global
    LinkshellList = 0x01F00, // global
    LogMessage = 0x00D0,
    Logout = 0x011B, // updated v5.35
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
    MarketBoardItemListing = 0x0229,// updated v5.35
    MarketBoardItemListingCount = 0x03DE,// updated v5.35
    MarketBoardItemListingHistory = 0x0343,// updated v5.35
    MarketBoardPurchase = 0x03A8,// updated v5.35
    MarketBoardSearchResult = 0x018D,// updated v5.35
    MiniCactpotInit = 0x03CF,// updated v5.35
    ModelEquip = 0x02770, // global
    Mount = 0x01B50, // global
    NpcSpawn = 0x02FC,// updated v5.35
    NpcSpawn2 = 0x01CB0, // global ( Bigger statuseffectlist? ) 
    ObjectDespawn = 0xF34B0, // global
    ObjectSpawn = 0x01D8,// updated v5.35
    PartyChat = 0x0065,
    PartyList = 0x02B20, // global
    PartyMessage = 0x00AE0, // global
    PerformNote = 0x02860, // global
    PersistantEffect = 0x03170, // global
    Ping = 0x02190, // global
    PlaceFieldMarker = 0x012F,// updated v5.35
    PlaceFieldMarkerPreset = 0x01F6,// updated v5.35
    PlayerAddedToBlacklist = 0x033F0, // global
    PlayerClassInfo = 0x02C30, // global
    PlayerRemovedFromBlacklist = 0x03850, // global
    PlayerSetup = 0x0304,// updated v5.35
    PlayerSpawn = 0x0171,// updated v5.35
    PlayerStateFlags = 0x00F80, // global
    PlayerStats = 0x03DD,// updated v5.35
    PlayerTitleList = 0x037D0, // global
    Playtime = 0x00F0,// updated v5.35
    PrepareZoning = 0x01A0,// updated v5.35
    PrepareZoning = 0x026C0, // global
    QuestActiveList = 0x01170, // global
    QuestCompleteList = 0x02400, // global
    QuestFinish = 0x00E90, // global
    QuestMessage = 0x03810, // global
    QuestTracker = 0x018B0, // global
    QuestUpdate = 0x00730, // global
    ReqMoogleMailLetter = 0xF1390, // global
    ReqMoogleMailList = 0xF1380, // global
    ResultDialog = 0x0236,// updated v5.35
    RetainerInformation = 0x023A,// updated v5.35
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
    SomeDirectorUnk4 = 0x0169,// updated v5.35
    SomeDirectorUnk8 = 0x028A0, // global
    StatusEffectList = 0x034B,// updated v5.35
    SubmarineExplorationResult = 0x030A, // updated v5.35
    SubmarineProgressionStatus = 0x03A0,// updated v5.35
    SubmarineStatusList = 0x03C6,// updated v5.35
    SubmarineTimers = 0x035D,// updated v5.35
    UpdateClassInfo = 0x0108,// updated v5.35
    UpdateHpMpTp = 0x0203,// updated v5.35
    UpdateInventorySlot = 0x026F,// updated v5.35
    UpdateRetainerItemSalePrice = 0xF19F0, // global
    UpdateSearchInfo = 0x0107,// updated v5.35
    WeatherChange = 0x0261, // updated v5.35
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
    ChatHandler = 0x00D9,// updated v5.35
    ClientTrigger = 0x03CB,// updated v5.35
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
    InventoryModifyHandler = 0x0086,// updated v5.35 (Base offset: 0x008D)
    KickPartyMemberHandler = 0x014C0, // global
    LandRenameHandler = 0xF1770, // global
    LeavePartyHandler = 0x03370, // global
    LinkshellEventHandler = 0x016B0, // global
    LinkshellEventHandler1 = 0x016C0, // global
    LinkshellListHandler = 0x024B0, // global
    LogoutHandler = 0x00B8, // updated v5.35
    MarketBoardPurchaseHandler = 0x00D1,// updated v5.35
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
    SetSearchInfoHandler = 0x01E1,// updated v5.35
    SetSharedEstateSettings = 0x017B0, // global
    ShopEventHandler = 0x01560, // global
    SkillHandler = 0x01CD0, // global
    SocialListHandler = 0x03400, // global
    SocialReqSendHandler = 0x03870, // global
    SocialResponseHandler = 0x028D0, // global
    TalkEventHandler = 0x02A40, // global
    TradeMultipleReturnEventHander = 0x035C0, // global
    TradeReturnEventHandler = 0x00A40, // global
    UpdatePositionHandler = 0x01F0,// updated v5.35
    UpdatePositionInstance = 0x01BE,// updated v5.35
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
