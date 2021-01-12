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
    //CraftEfficiencyCalculations = 0x018F, // updated v5.3
    ActorCast = 0x03B8, // updated v5.3
    ActorControl = 0x013D, // updated v5.3
    ActorControlSelf = 0x025F, // updated v5.3
    ActorControlTarget = 0x0085, // updated v5.3
    ActorFreeSpawn = 0x0315, // updated v5.3
    ActorGauge = 0x014B, // updated v5.3
    ActorMove = 0x02E6, // updated v5.3
    ActorOwner = 0x00E8, // global
    ActorSetPos = 0x0164, // updated v5.3
    AddStatusEffect = 0x0156, // updated v5.3
    AoeEffect16 = 0x03A7, // updated v5.3
    AoeEffect24 = 0x016B, // updated v5.3
    AoeEffect32 = 0x0231, // updated v5.3
    AoeEffect8 = 0x0167, // updated v5.3
    BlackList = 0x02DB, // global
    CFAvailableContents = 0xF1FD, // global
    CFCancel = 0x00EC, // global
    CFDutyInfo = 0x007A,
    CFMemberStatus = 0x0079,
    CFNotify = 0x022C, // updated v5.3
    CFPlayerInNeed = 0xF07F,
    CFPreferredRole = 0x02B9, // updated v5.3
    CFRegistered = 0x010C, // global
    CancelAllianceForming = 0x00C6, // global
    CharaFreeCompanyTag = 0x013B, // global
    CharaNameReq = 0x008E, // global
    CharaVisualEffect = 0x02E2, // global
    Chat = 0x0349, // global
    ChatBanned = 0xF06B,
    ContainerInfo = 0x00C5, // global
    CountdownCancel = 0x00D9, // global
    CountdownInitiate = 0x0237, // global
    CurrencyCrystalInfo = 0x0335, // updated v5.3
    DailyQuestRepeatFlags = 0x024C, // global
    DailyQuests = 0x0139, // global
    DirectorPopUp = 0xF162, // global. display dialogue pop-ups in duties and FATEs, for example, Teraflare's countdown
    DirectorPopUp4 = 0x0214, // global
    DirectorPopUp8 = 0x00F8, // global
    DirectorVars = 0x00E6, // global
    Discovery = 0x031A, // global
    DuelChallenge = 0x0277, // global. this is responsible for opening the ui
    Effect = 0x0266, // updated v5.3
    EffectResult = 0x0156, // updated v5.3
    EorzeaTimeOffset = 0xF3B8, // global
    EquipDisplayFlags = 0x00BE, // global
    EurekaStatusEffectList = 0x0167, // global
    EventFinish = 0x0147, // updated v5.3
    EventLinkshell = 0x1169,
    EventPlay = 0x03B3, // updated v5.3
    EventPlay128 = 0x038A, // global
    EventPlay16 = 0x025C, // global
    EventPlay255 = 0x034B, // global
    EventPlay32 = 0x0154, // updated v5.3
    EventPlay4 = 0x0071, // updated v5.3
    EventPlay64 = 0x02C1, // global
    EventPlay8 = 0x023F, // global
    EventStart = 0x008B, // updated v5.3
    Examine = 0x017B, // updated v5.3
    ExamineFreeCompanyInfo = 0xF13E, // global
    ExamineSearchComment = 0x0102, // global
    ExamineSearchInfo = 0x01E5, // updated v5.3
    FreeCompanyBoardMsg = 0x013C, // global
    FreeCompanyInfo = 0xF13D, // global
    FreeCompanyUpdateShortMessage = 0xF157, // global
    GCAffiliation = 0xF16F, // global
    HateList = 0x0198, // global
    HateRank = 0x02CC, // global
    HousingEstateGreeting = 0x023B, // global
    HousingIndoorInitialize = 0x0237, // global
    HousingInternalObjectSpawn = 0xF241, // global
    HousingLandFlags = 0x022F, // global
    HousingObjectInitialize = 0x01AA, // global
    HousingObjectMove = 0xF244, // global
    HousingShowEstateGuestAccess = 0x023E, // global
    HousingUpdateLandFlagsSlot = 0x023C, // global
    HousingWardInfo = 0x02FD, // global
    HuntingLogEntry = 0x0146, // global
    Init = 0x0185, // global
    InitSearchInfo = 0x036F, // global
    InitZone = 0x0078, // updated v5.3
    InventoryActionAck = 0x01D6, // updated v5.3
    InventoryTransaction = 0x019A, // updated v5.3
    InventoryTransactionFinish = 0x039F, // updated v5.3
    ItemInfo = 0x00A6, // updated v5.3
    LandInfoSign = 0x023D, // global
    LandPriceUpdate = 0x0238, // global
    LandRename = 0x023A, // global
    LandSetInitialize = 0x0234, // global
    LandSetMap = 0x025A, // global
    LandUpdate = 0x0235, // global
    LandUpdateHouseName = 0x0257, // global
    LinkshellList = 0x01F0, // global
    LogMessage = 0x00D0,
    Logout = 0x02AD, // global
    LootMessage = 0x01B7, // global
    MSQTrackerComplete = 0xF1D6, // global
    MSQTrackerProgress = 0xF1CD, // global. this actually looks like the two opcodes have been combined, see #474
    MahjongEndGame = 0x02C6, // global. finished oorasu(all-last) round; shows a result screen.
    MahjongEndRoundDraw = 0x02C5, // global. self explanatory
    MahjongEndRoundRon = 0x2C0, // global. called ron or double ron (waiting for action must be flagged from discard packet to call)
    MahjongEndRoundTsumo = 0x02BF, // global. called tsumo
    MahjongNextRound = 0x02BD, // global. initial hands(baipai), # of riichi(wat), winds, honba, score and stuff
    MahjongOpenGui = 0x02A4, // global. only available in mahjong instance
    MahjongPlayerAction = 0x02BE, // global. tsumo(as in drawing a tile) called chi/pon/kan/riichi
    MahjongPlayersInfo = 0x02C2, // global. actor id, name, rating and stuff..
    MahjongTileDiscard = 0x02C1, // global. giri (discarding a tile.) chi(1)/pon(2)/kan(4)/ron(8) flags etc..
    MailDeleteRequest = 0xF12B, // global
    MailLetterNotification = 0x013A, // global
    MarketBoardItemListing = 0x032C, // updated v5.3
    MarketBoardItemListingCount = 0x0074, // updated v5.3
    MarketBoardItemListingHistory = 0x0102, // updated v5.3
    MarketBoardSearchResult = 0x00AF, // updated v5.3
    MarketTaxRates = 0x02A6, // updated v5.3
    MiniCactpotInit = 0x0316, // updated v5.3
    ModelEquip = 0x0277, // global
    Mount = 0x01B5, // global
    NpcSpawn = 0x02B2, // updated v5.3
    NpcSpawn2 = 0x01CB, // global ( Bigger statuseffectlist? ) 
    ObjectDespawn = 0xF34B, // global
    ObjectSpawn = 0x019C, // updated v5.3
    PartyChat = 0x0065,
    PartyList = 0x02B2, // global
    PartyMessage = 0x00AE, // global
    PerformNote = 0x0286, // global
    PersistantEffect = 0x0317, // global
    Ping = 0x0219, // global
    PlaceFieldMarker = 0x0086, // updated v5.3
    PlaceFieldMarkerPreset = 0x00E9, // updated v5.3
    PlayerAddedToBlacklist = 0x033F, // global
    PlayerClassInfo = 0x02C3, // global
    PlayerRemovedFromBlacklist = 0x0385, // global
    PlayerSetup = 0x039E, // updated v5.3
    PlayerSpawn = 0x038A, // updated v5.3
    PlayerStateFlags = 0x00F8, // global
    PlayerStats = 0x0230, // updated v5.3
    PlayerTitleList = 0x037D, // global
    Playtime = 0x0212, // updated v5.3
    PrepareZoning = 0x0166, // updated v5.3
    PrepareZoning = 0x026C, // global
    QuestActiveList = 0x0117, // global
    QuestCompleteList = 0x0240, // global
    QuestFinish = 0x00E9, // global
    QuestMessage = 0x0381, // global
    QuestTracker = 0x018B, // global
    QuestUpdate = 0x0073, // global
    ReqMoogleMailLetter = 0xF139, // global
    ReqMoogleMailList = 0xF138, // global
    RetainerInformation = 0x01F8, // updated v5.3
    RetainerSaleHistory = 0x020E, // global
    ServerNotice = 0x01B8, // updated v5.3
    ServerNoticeShort = 0x0115, // global
    SetLevelSync = 0x1186, // global
    SetOnlineStatus = 0x03D7, // global
    SharedEstateSettingsResponse = 0x0245, // global
    ShopMessage = 0x0197, // global
    SilentSetClassJob = 0x018E, // global. seems to be the case, not sure if it's actually used for anything
    SocialList = 0x0216, // global
    SocialMessage = 0x0308, // global
    SocialMessage2 = 0x037C, // global
    SocialRequestError = 0xF0AD,
    SocialRequestResponse = 0x01C7, // global
    SomeCustomiseChangePacketProbably = 0x00CD, // global
    SomeDirectorUnk1 = 0x0084, // global
    SomeDirectorUnk16 = 0x028C, // global
    SomeDirectorUnk2 = 0xF0C1, // global
    SomeDirectorUnk4 = 0x023E, // updated v5.3
    SomeDirectorUnk8 = 0x028A, // global
    StatusEffectList = 0x0314, // updated v5.3
    UpdateClassInfo = 0x00B3, // updated v5.3
    UpdateHpMpTp = 0x02A3, // updated v5.3
    UpdateInventorySlot = 0x0250, // updated v5.3
    UpdateRetainerItemSalePrice = 0xF19F, // global
    UpdateSearchInfo = 0x0364, // updated v5.3
    WeatherChange = 0x03D7, // updated v5.3
    WorldVisitList = 0xF0FE, // global
    YardObjectSpawn = 0xF236, // global
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

    ChatHandler = 0x00BF, // updated v5.3
    PartyChatHandler = 0x0065,
    PartySetLeaderHandler = 0x0208, // global
    LeavePartyHandler = 0x0337, // global
    KickPartyMemberHandler = 0x014C, // global
    DisbandPartyHandler = 0x0205, // global

    SocialListHandler = 0x0340, // global
    SetSearchInfoHandler = 0x0303, // updated v5.3
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
    ClientTrigger = 0x033A, // updated v5.3
    DiscoveryHandler = 0x00E3, // global

    SkillHandler = 0x01CD, // global
    GMCommand1 = 0x02AC, // global
    GMCommand2 = 0x029F, // global
    AoESkillHandler = 0x030C, // global

    UpdatePositionHandler = 0x017D, // updated v5.3

    InventoryModifyHandler = 0x019A, // updated v5.3 (Base offset: 0x01A1)
    
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

    UpdatePositionInstance = 0x0067, // updated v5.3

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
