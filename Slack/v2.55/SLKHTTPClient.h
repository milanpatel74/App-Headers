/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class AFHTTPSessionManager, NSString;

@interface SLKHTTPClient : NSObject {

	AFHTTPSessionManager* _manager;
	NSString* _accessToken;

}

@property (nonatomic,readonly) AFHTTPSessionManager * manager;              //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSString * accessToken;                      //@synthesize accessToken=_accessToken - In the implementation block
+(id)sharedClient;
-(void)openGroupWithGroupId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)leaveGenericChannel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createGroupWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createGroupChild:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getPushOptions:(/*^block*/id)arg1 ;
-(void)cancelRequestsWithPath:(id)arg1 ;
-(void)handleAccessToken:(id)arg1 teamId:(id)arg2 ;
-(void)unregisterFromPushWithToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)signout:(/*^block*/id)arg1 ;
-(void)registerForPushWithToken:(id)arg1 deviceIdentifier:(id)arg2 deviceName:(id)arg3 isNewPrimaryTeam:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(void)sendMessageText:(id)arg1 channel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getSlashCommands:(/*^block*/id)arg1 ;
-(void)getEmojiList:(/*^block*/id)arg1 ;
-(void)sendAction:(id)arg1 toBot:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addReaction:(id)arg1 toGenericObject:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeReaction:(id)arg1 fromGenericObject:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)willDumpCache:(id)arg1 ;
-(void)openIMWithUserId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getRecentMentionsWithCount:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)getStarsForUser:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserPresence:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateUserProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUserPhoto:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)markGenericChannel:(id)arg1 timestamp:(id)arg2 reason:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deleteMessageAttachment:(id)arg1 fromMessage:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteComment:(id)arg1 fromFile:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMessagesForGenericChannel:(id)arg1 latest:(id)arg2 oldest:(id)arg3 count:(unsigned long long)arg4 completion:(/*^block*/id)arg5 shouldSave:(BOOL)arg6 shouldCalculateCounts:(BOOL)arg7 shorterTimeout:(BOOL)arg8 ;
-(void)markAllGenericChannels:(/*^block*/id)arg1 ;
-(void)starGenericObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unstarGenericObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)inviteToGenericChannel:(id)arg1 userId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)sendCommand:(id)arg1 text:(id)arg2 forGenericChannel:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setTeamPref:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserPref:(id)arg1 forKey:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setUserPrefs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPushOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)joinChannelWithName:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)rtmStart:(/*^block*/id)arg1 ;
-(void)getEventLog:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)openMPDMWithUserIds:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getTeamInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateTeamInfoForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUsersForGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendTestPushWithToken:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAccessTokenFromResponse:(id)arg1 ;
-(void)signoutFromTeam:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getMessagesForChannelType:(unsigned long long)arg1 channelId:(id)arg2 latest:(id)arg3 oldest:(id)arg4 count:(unsigned long long)arg5 completion:(/*^block*/id)arg6 shouldSave:(BOOL)arg7 shouldCalculateCounts:(BOOL)arg8 shorterTimeout:(BOOL)arg9 ;
-(void)doesRequestWithPathExist:(id)arg1 params:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performReactionAction:(id)arg1 name:(id)arg2 file:(id)arg3 fileComment:(id)arg4 channel:(id)arg5 timestamp:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)inviteToGenericChannel:(id)arg1 userIds:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)performReactionAction:(id)arg1 name:(id)arg2 forGenericObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)starParamsForGenericObject:(id)arg1 ;
-(BOOL)hasMore:(id)arg1 ;
-(void)getFilesFilteredBy:(id)arg1 fromUser:(id)arg2 latest:(id)arg3 oldest:(id)arg4 count:(unsigned long long)arg5 page:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)getFileInfo:(id)arg1 count:(unsigned long long)arg2 page:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)searchMessages:(id)arg1 sort:(unsigned long long)arg2 in:(id)arg3 from:(id)arg4 count:(unsigned long long)arg5 page:(unsigned long long)arg6 completion:(/*^block*/id)arg7 ;
-(void)searchFiles:(id)arg1 sort:(unsigned long long)arg2 count:(unsigned long long)arg3 page:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)findTeamWithDomain:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)findUserWithTeam:(id)arg1 email:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)signinWithEmail:(id)arg1 password:(id)arg2 teamId:(id)arg3 pin:(id)arg4 sendCodeToBackup:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(void)singleSignonWithTeamId:(id)arg1 callbackURLString:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)joinTeamWithEmail:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)createTeamWithEmail:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)emailToken:(id)arg1 teamId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)emailTeams:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getTeamPrefs:(/*^block*/id)arg1 ;
-(void)getUserPrefs:(/*^block*/id)arg1 ;
-(id)profileParamsForUser:(id)arg1 ;
-(void)getUserCounts:(/*^block*/id)arg1 ;
-(void)getCountsForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)inviteToTeam:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getUserGroups:(/*^block*/id)arg1 ;
-(void)getMessagesForGenericChannel:(id)arg1 completion:(/*^block*/id)arg2 shouldSave:(BOOL)arg3 shouldCalculateCounts:(BOOL)arg4 ;
-(void)editMessage:(id)arg1 withText:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)addReaction:(id)arg1 file:(id)arg2 fileComment:(id)arg3 channel:(id)arg4 timestamp:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)removeReaction:(id)arg1 file:(id)arg2 fileComment:(id)arg3 channel:(id)arg4 timestamp:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)renameGenericChannel:(id)arg1 name:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)archiveGenericChannel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unArchiveGenericChannel:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setTopic:(id)arg1 forGenericChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setPurpose:(id)arg1 forGenericChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)getRecentMentions:(/*^block*/id)arg1 ;
-(void)getAllTeamFiles:(/*^block*/id)arg1 ;
-(void)getAllMyFiles:(/*^block*/id)arg1 ;
-(void)setFileTitle:(id)arg1 fileId:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shareFile:(id)arg1 inChannel:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteFile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getCommentsForFile:(id)arg1 count:(unsigned long long)arg2 page:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)addComment:(id)arg1 toFile:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)editComment:(id)arg1 withText:(id)arg2 toFile:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)searchAll:(id)arg1 sort:(unsigned long long)arg2 count:(unsigned long long)arg3 page:(unsigned long long)arg4 completion:(/*^block*/id)arg5 ;
-(void)searchMessages:(id)arg1 sort:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)searchFiles:(id)arg1 sort:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)saveSearch:(id)arg1 mode:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(AFHTTPSessionManager *)manager;
-(void)cancelAllRequests;
-(void)dealloc;
-(id)init;
-(NSString *)accessToken;
@end

