/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:12 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/StormApiBase.h>

@class NSMutableArray;

@interface StormApi : StormApiBase {

	NSMutableArray* checkpointDelegates;

}

@property (nonatomic,retain) NSMutableArray * checkpointDelegates; 
+(id)delegateWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(void)setStormApi:(id)arg1 ;
+(id)instance;
-(id)responseFormat;
-(BOOL)isNonBlockingCall:(id)arg1 ;
-(void)executeApiCall:(id)arg1 ;
-(id)getApiContext;
-(void)addPiggyBackedParameters:(id)arg1 ;
-(id)versionedSystemDataResponseFormat;
-(BOOL)getAdditionalGameData:(id)arg1 withDelegate:(id)arg2 ;
-(id)postProcess:(id)arg1 ;
-(void)loginWithDelegate:(id)arg1 withRefId:(id)arg2 withProfileId:(id)arg3 ;
-(void)getLeaderboard;
-(void)getInstalledBinaryListWithDelegate:(id)arg1 ;
-(void)sendUserInfo;
-(void)sendFacebookRequest:(id)arg1 delegate:(id)arg2 ;
-(void)applyChangesWithDelegate:(id)arg1 ;
-(void)setDeviceToken:(id)arg1 ;
-(void)getReplayEventProgressLeaderboard;
-(void)setUserName:(id)arg1 gemCost:(int)arg2 withDelegate:(id)arg3 ;
-(void)sendUserInfo:(BOOL)arg1 ;
-(void)getAdditionalGameDataFrom:(long long)arg1 withDelegate:(id)arg2 ;
-(void)loginwithAdditionalParameters:(id)arg1 withDelegate:(id)arg2 ;
-(void)applyChangesSynchronouslyWithDelegate:(id)arg1 ;
-(void)closeHotTip:(id)arg1 ;
-(void)trackRefId:(id)arg1 ;
-(void)setAccountName:(id)arg1 withDelegate:(id)arg2 ;
-(void)setUserName:(id)arg1 withDelegate:(id)arg2 ;
-(void)processAppleStoreTransactions:(id)arg1 withDelegate:(id)arg2 ;
-(void)processGooglePlayTransactions:(id)arg1 withSignature:(id)arg2 withDelegate:(id)arg3 ;
-(void)groupDataWithDelegate:(id)arg1 ;
-(void)sendGiftsWithItemId:(int)arg1 receiverIds:(id)arg2 delegate:(id)arg3 ;
-(void)sendGiftsWithItemId:(int)arg1 toLINEFriends:(id)arg2 delegate:(id)arg3 ;
-(void)sendGiftsWithItemId:(int)arg1 toFriends:(id)arg2 delegate:(id)arg3 ;
-(void)getFriendRanking:(id)arg1 delegate:(id)arg2 ;
-(void)newsFeedWithDelegate:(id)arg1 ;
-(void)updateFacebookFriendsWithDelegate:(id)arg1 ;
-(void)updateFacebookGameFriends:(id)arg1 delegate:(id)arg2 ;
-(void)allMessagesWithDelegate:(id)arg1 ;
-(void)processFacebookRequestId:(id)arg1 delegate:(id)arg2 ;
-(void)getSuggestedFacebookFriendsWithDelegate:(id)arg1 ;
-(void)crossGameFacebookInvite:(id)arg1 delegate:(id)arg2 ;
-(void)seenFacebookFriends:(id)arg1 delegate:(id)arg2 ;
-(void)updateSlotsGameData:(BOOL)arg1 withDelegate:(id)arg2 ;
-(void)spinSlots:(int)arg1 lines:(int)arg2 betPerLine:(long long)arg3 isFreeSpin:(BOOL)arg4 isAutoSpin:(BOOL)arg5 withDelegate:(id)arg6 ;
-(void)betForDoubleYourMoney:(int)arg1 betAmount:(long long)arg2 betCount:(long long)arg3 betType:(int)arg4 betNumber:(long long)arg5 withDelegate:(id)arg6 ;
-(void)spinSlotsAdventure:(int)arg1 isFreeSpin:(BOOL)arg2 betAmount:(long long)arg3 isAutoSpin:(BOOL)arg4 withDelegate:(id)arg5 ;
-(void)miniGameForReel:(int)arg1 delegate:(id)arg2 ;
-(void)getUserInfo:(id)arg1 ;
-(void)resetUserWithDelegate:(id)arg1 ;
-(void)removeGroupMember:(id)arg1 withDelegate:(id)arg2 ;
-(void)getUserData:(id)arg1 ;
-(void)getAdsWithDelegate:(id)arg1 ;
-(void)updateTreasurerunLeaderBoard:(BOOL)arg1 friendLeaderBoardFullUpdate:(BOOL)arg2 WithDelegate:(id)arg3 ;
-(void)updateTest:(BOOL)arg1 testID:(long long)arg2 levelNumber:(int)arg3 name:(id)arg4 frequency:(float)arg5 actions:(id)arg6 snapshots:(id)arg7 recordedRandomNumbers:(id)arg8 withDelegate:(id)arg9 ;
-(void)removeTest:(long long)arg1 withDelegate:(id)arg2 ;
-(void)testInfoForID:(long long)arg1 withDelegate:(id)arg2 ;
-(void)testLevelsWithDelegate:(id)arg1 ;
-(void)createGameWithRandomOpponentWithDelegate:(id)arg1 ;
-(void)createGameWithTargetUser:(id)arg1 withDelegate:(id)arg2 ;
-(void)createGameWithTargetAccountName:(id)arg1 withDelegate:(id)arg2 ;
-(void)loadAllCurrentGamesWithDelegate:(id)arg1 ;
-(void)pollForGameListsWithRowVersions:(id)arg1 WithPruneMessageTimeStamp:(int)arg2 withDelegate:(id)arg3 ;
-(void)pollForGameUpdates:(id)arg1 withRowVersion:(int)arg2 withDelegate:(id)arg3 ;
-(void)pollForChatMessages:(id)arg1 sinceTimestamp:(int)arg2 withDelegate:(id)arg3 ;
-(void)saveMove:(id)arg1 withGameRowVersionsJson:(id)arg2 withDelegate:(id)arg3 ;
-(void)sendGameMessage:(id)arg1 gameHashId:(id)arg2 withDelegate:(id)arg3 ;
-(void)resignGame:(id)arg1 withDelegate:(id)arg2 ;
-(void)declineGame:(id)arg1 withDelegate:(id)arg2 ;
-(void)unlockAllLevelsWithDelegate:(id)arg1 ;
-(void)unlockAllPetsWithDelegate:(id)arg1 ;
-(void)saveEditedLevelData:(id)arg1 withDelegate:(id)arg2 ;
-(void)saveEditedBossData:(id)arg1 withDelegate:(id)arg2 ;
-(void)saveRegion:(int)arg1 levels:(id)arg2 objects:(id)arg3 height:(float)arg4 positionY:(float)arg5 levelDatas:(id)arg6 withDelegate:(id)arg7 ;
-(void)saveLevelOrder:(id)arg1 withDelegate:(id)arg2 ;
-(void)saveWorld:(int)arg1 levels:(id)arg2 objects:(id)arg3 worldName:(id)arg4 minimapIcon:(id)arg5 width:(float)arg6 height:(float)arg7 positionX:(float)arg8 positionY:(float)arg9 levelDatas:(id)arg10 withDelegate:(id)arg11 ;
-(void)loadItemAttributesForLevelEditor:(id)arg1 ;
-(void)updateUserPuzzleTournamentProgressWithTournament:(int)arg1 withDelegate:(id)arg2 ;
-(void)startPuzzleTournament:(int)arg1 withDelegate:(id)arg2 ;
-(void)checkPuzzleTournamentMatchMakingCompleted:(int)arg1 withDelegate:(id)arg2 ;
-(void)userPuzzleTournamentAttemptStartForTournament:(int)arg1 ofInstance:(int)arg2 withDelagate:(id)arg3 ;
-(void)userPuzzleTournamentAttemptPurchaseForTournament:(int)arg1 ofInstance:(int)arg2 withDelagate:(id)arg3 ;
-(void)getPuzzleTournamentLeaderboards:(int)arg1 ;
-(void)getPuzzleTournamentWeeklyLeaderboardReward;
-(void)getUserPuzzleTournamentStandings:(int)arg1 forInstances:(id)arg2 ;
-(void)getTournamentLeaderboardsWithDelegate:(id)arg1 ;
-(void)getUserMailboxWithDelegate:(id)arg1 ;
-(void)getRaffleInfoWithDelegate:(id)arg1 ;
-(void)collectTournamentRewards:(id)arg1 delegate:(id)arg2 ;
-(void)collectEventCompletedRewards:(int)arg1 delegate:(id)arg2 ;
-(void)getPotentialBracketWithDelegate:(id)arg1 ;
-(void)matchmakeUserWithDelegate:(id)arg1 ;
-(void)trackAction:(id)arg1 withParameters:(id)arg2 ;
-(void)processAndroidMarketTransactions:(id)arg1 data:(id)arg2 signature:(id)arg3 withDelegate:(id)arg4 ;
-(void)processAmazonMarketTransaction:(id)arg1 token:(id)arg2 sku:(id)arg3 withDelegate:(id)arg4 ;
-(NSMutableArray *)checkpointDelegates;
-(void)setCheckpointDelegates:(NSMutableArray *)arg1 ;
-(void)dealloc;
@end

