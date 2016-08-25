/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 8:46:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/11A60D99-01E0-433C-ADB9-36971BECDA0C/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SLKAccount, SLKHTTPClient, SLKDataRepository, SLKDataParser, SLKWebSocketClient, NSNotificationCenter, SLKObjectCache, SLKMessageQueueManager, SLKEmojiManager, SLKPrefManager, _TtC5Slack11SLKSnoozers, _TtC5Slack12Experimenter, SLMarkingManager, SLKMentionsCountManager, SLKSlashCommandManager, SLKSidebarThemeHelper, SLKCallSessionClient, SLKLocalHandler, _TtC5Slack17SLKDeepLinkRouter, SLKMentionPredicateCache, SLTextProcessingManager, SLKServiceMediator, SLKMessageDataMediator, SLKHistoryGapMediator, SLKShareExtensionMediator, SLKWatchExtensionMediator, SLKWatchMessageMediator, _TtC5Slack21SLKChannelPermissions;

@interface SLKDependencies : NSObject {

	long long httpClientOnceToken;
	long long dataRepoOnceToken;
	long long dataParserOnceToken;
	long long webSocketClientOnceToken;
	long long notificationCenterOnceToken;
	long long objectCacheOnceToken;
	long long messageQueueManagerOnceToken;
	long long emojiManagerOnceToken;
	long long preferencesManagerOnceToken;
	long long snoozersManagerOnceToken;
	long long experimenterOnceToken;
	long long markingManagerOnceToken;
	long long mentionsCountManagerOnceToken;
	long long slashCommandManagerOnceToken;
	long long sidebarThemeHelperOnceToken;
	long long callSessionClientOnceToken;
	long long localHandlerClientOnceToken;
	long long deepLinkRouterClientOnceToken;
	long long mentionPredicateCacheOnceToken;
	long long textProcessingManagerOnceToken;
	long long serviceMediatorOnceToken;
	long long messageDataMediatorOnceToken;
	long long historyGapMediatorOnceToken;
	long long shareExtensionMediatorOnceToken;
	long long watchExtensionMediatorOnceToken;
	long long watchMessageMediatorOnceToken;
	long long channelPermissionsOnceToken;
	BOOL _pause;
	NSString* _teamId;
	SLKAccount* _account;
	SLKHTTPClient* _httpClient;
	SLKDataRepository* _dataRepository;
	SLKDataParser* _dataParser;
	SLKWebSocketClient* _webSocketClient;
	NSNotificationCenter* _notificationCenter;
	SLKObjectCache* _objectCache;
	SLKMessageQueueManager* _messageQueueManager;
	SLKEmojiManager* _emojiManager;
	SLKPrefManager* _preferencesManager;
	_TtC5Slack11SLKSnoozers* _snoozersManager;
	_TtC5Slack12Experimenter* _experimenter;
	SLMarkingManager* _markingManager;
	SLKMentionsCountManager* _mentionsCountManager;
	SLKSlashCommandManager* _slashCommandManager;
	SLKSidebarThemeHelper* _sidebarThemeHelper;
	SLKCallSessionClient* _callSessionClient;
	SLKLocalHandler* _localHandler;
	_TtC5Slack17SLKDeepLinkRouter* _deepLinkRouter;
	SLKMentionPredicateCache* _mentionPredicateCache;
	SLTextProcessingManager* _textProcessingManager;
	SLKServiceMediator* _serviceMediator;
	SLKMessageDataMediator* _messageDataMediator;
	SLKHistoryGapMediator* _historyGapMediator;
	SLKShareExtensionMediator* _shareExtensionMediator;
	SLKWatchExtensionMediator* _watchExtensionMediator;
	SLKWatchMessageMediator* _watchMessageMediator;
	_TtC5Slack21SLKChannelPermissions* _channelPermissions;

}

@property (nonatomic,retain) SLKAccount * account;                                                //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) SLKHTTPClient * httpClient;                                          //@synthesize httpClient=_httpClient - In the implementation block
@property (nonatomic,retain) SLKDataRepository * dataRepository;                                  //@synthesize dataRepository=_dataRepository - In the implementation block
@property (nonatomic,retain) SLKDataParser * dataParser;                                          //@synthesize dataParser=_dataParser - In the implementation block
@property (nonatomic,retain) SLKWebSocketClient * webSocketClient;                                //@synthesize webSocketClient=_webSocketClient - In the implementation block
@property (nonatomic,retain) NSNotificationCenter * notificationCenter;                           //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) SLKObjectCache * objectCache;                                        //@synthesize objectCache=_objectCache - In the implementation block
@property (nonatomic,retain) SLKMessageQueueManager * messageQueueManager;                        //@synthesize messageQueueManager=_messageQueueManager - In the implementation block
@property (nonatomic,retain) SLKEmojiManager * emojiManager;                                      //@synthesize emojiManager=_emojiManager - In the implementation block
@property (nonatomic,retain) SLKPrefManager * preferencesManager;                                 //@synthesize preferencesManager=_preferencesManager - In the implementation block
@property (nonatomic,retain) _TtC5Slack11SLKSnoozers * snoozersManager;                           //@synthesize snoozersManager=_snoozersManager - In the implementation block
@property (nonatomic,retain) _TtC5Slack12Experimenter * experimenter;                             //@synthesize experimenter=_experimenter - In the implementation block
@property (nonatomic,retain) SLMarkingManager * markingManager;                                   //@synthesize markingManager=_markingManager - In the implementation block
@property (nonatomic,retain) SLKMentionsCountManager * mentionsCountManager;                      //@synthesize mentionsCountManager=_mentionsCountManager - In the implementation block
@property (nonatomic,retain) SLKSlashCommandManager * slashCommandManager;                        //@synthesize slashCommandManager=_slashCommandManager - In the implementation block
@property (nonatomic,retain) SLKSidebarThemeHelper * sidebarThemeHelper;                          //@synthesize sidebarThemeHelper=_sidebarThemeHelper - In the implementation block
@property (nonatomic,retain) SLKCallSessionClient * callSessionClient;                            //@synthesize callSessionClient=_callSessionClient - In the implementation block
@property (nonatomic,retain) SLKLocalHandler * localHandler;                                      //@synthesize localHandler=_localHandler - In the implementation block
@property (nonatomic,retain) _TtC5Slack17SLKDeepLinkRouter * deepLinkRouter;                      //@synthesize deepLinkRouter=_deepLinkRouter - In the implementation block
@property (nonatomic,retain) SLKMentionPredicateCache * mentionPredicateCache;                    //@synthesize mentionPredicateCache=_mentionPredicateCache - In the implementation block
@property (nonatomic,retain) SLTextProcessingManager * textProcessingManager;                     //@synthesize textProcessingManager=_textProcessingManager - In the implementation block
@property (nonatomic,retain) SLKServiceMediator * serviceMediator;                                //@synthesize serviceMediator=_serviceMediator - In the implementation block
@property (nonatomic,retain) SLKMessageDataMediator * messageDataMediator;                        //@synthesize messageDataMediator=_messageDataMediator - In the implementation block
@property (nonatomic,retain) SLKHistoryGapMediator * historyGapMediator;                          //@synthesize historyGapMediator=_historyGapMediator - In the implementation block
@property (nonatomic,retain) SLKShareExtensionMediator * shareExtensionMediator;                  //@synthesize shareExtensionMediator=_shareExtensionMediator - In the implementation block
@property (nonatomic,retain) SLKWatchExtensionMediator * watchExtensionMediator;                  //@synthesize watchExtensionMediator=_watchExtensionMediator - In the implementation block
@property (nonatomic,retain) SLKWatchMessageMediator * watchMessageMediator;                      //@synthesize watchMessageMediator=_watchMessageMediator - In the implementation block
@property (nonatomic,retain) _TtC5Slack21SLKChannelPermissions * channelPermissions;              //@synthesize channelPermissions=_channelPermissions - In the implementation block
@property (nonatomic,retain) NSString * teamId;                                                   //@synthesize teamId=_teamId - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL pause;                                          //@synthesize pause=_pause - In the implementation block
+(void)clearExtensionsData;
-(NSString *)teamId;
-(SLKEmojiManager *)emojiManager;
-(void)setTeamId:(NSString *)arg1 ;
-(SLKDataRepository *)dataRepository;
-(SLKLocalHandler *)localHandler;
-(SLKSidebarThemeHelper *)sidebarThemeHelper;
-(SLKCallSessionClient *)callSessionClient;
-(_TtC5Slack21SLKChannelPermissions *)channelPermissions;
-(_TtC5Slack17SLKDeepLinkRouter *)deepLinkRouter;
-(SLTextProcessingManager *)textProcessingManager;
-(SLKWebSocketClient *)webSocketClient;
-(_TtC5Slack12Experimenter *)experimenter;
-(SLKWatchMessageMediator *)watchMessageMediator;
-(void)populateExtensionsData;
-(SLKServiceMediator *)serviceMediator;
-(SLKPrefManager *)preferencesManager;
-(SLKShareExtensionMediator *)shareExtensionMediator;
-(SLKMessageDataMediator *)messageDataMediator;
-(SLKMessageQueueManager *)messageQueueManager;
-(SLMarkingManager *)markingManager;
-(SLKDataParser *)dataParser;
-(SLKHistoryGapMediator *)historyGapMediator;
-(SLKSlashCommandManager *)slashCommandManager;
-(_TtC5Slack11SLKSnoozers *)snoozersManager;
-(id)initWithTeamId:(id)arg1 ;
-(SLKMentionPredicateCache *)mentionPredicateCache;
-(SLKWatchExtensionMediator *)watchExtensionMediator;
-(SLKMentionsCountManager *)mentionsCountManager;
-(void)setDataRepository:(SLKDataRepository *)arg1 ;
-(void)setDataParser:(SLKDataParser *)arg1 ;
-(void)setWebSocketClient:(SLKWebSocketClient *)arg1 ;
-(void)setNotificationCenter:(NSNotificationCenter *)arg1 ;
-(void)setMessageQueueManager:(SLKMessageQueueManager *)arg1 ;
-(void)setEmojiManager:(SLKEmojiManager *)arg1 ;
-(void)setPreferencesManager:(SLKPrefManager *)arg1 ;
-(void)setSnoozersManager:(_TtC5Slack11SLKSnoozers *)arg1 ;
-(void)setExperimenter:(_TtC5Slack12Experimenter *)arg1 ;
-(void)setMarkingManager:(SLMarkingManager *)arg1 ;
-(void)setMentionsCountManager:(SLKMentionsCountManager *)arg1 ;
-(void)setSlashCommandManager:(SLKSlashCommandManager *)arg1 ;
-(void)setSidebarThemeHelper:(SLKSidebarThemeHelper *)arg1 ;
-(void)setCallSessionClient:(SLKCallSessionClient *)arg1 ;
-(void)setLocalHandler:(SLKLocalHandler *)arg1 ;
-(void)setDeepLinkRouter:(_TtC5Slack17SLKDeepLinkRouter *)arg1 ;
-(void)setMentionPredicateCache:(SLKMentionPredicateCache *)arg1 ;
-(void)setTextProcessingManager:(SLTextProcessingManager *)arg1 ;
-(void)setServiceMediator:(SLKServiceMediator *)arg1 ;
-(void)setMessageDataMediator:(SLKMessageDataMediator *)arg1 ;
-(void)setHistoryGapMediator:(SLKHistoryGapMediator *)arg1 ;
-(void)setShareExtensionMediator:(SLKShareExtensionMediator *)arg1 ;
-(void)setWatchExtensionMediator:(SLKWatchExtensionMediator *)arg1 ;
-(void)setWatchMessageMediator:(SLKWatchMessageMediator *)arg1 ;
-(void)setChannelPermissions:(_TtC5Slack21SLKChannelPermissions *)arg1 ;
-(void)dealloc;
-(SLKAccount *)account;
-(void)setAccount:(SLKAccount *)arg1 ;
-(BOOL)isPaused;
-(void)setPause:(BOOL)arg1 ;
-(NSNotificationCenter *)notificationCenter;
-(SLKObjectCache *)objectCache;
-(void)setObjectCache:(SLKObjectCache *)arg1 ;
-(SLKHTTPClient *)httpClient;
-(void)setHttpClient:(SLKHTTPClient *)arg1 ;
@end
