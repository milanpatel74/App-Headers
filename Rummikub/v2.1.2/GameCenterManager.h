/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:33 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GameCenterManagerDelegateNSObject;
@class NSMutableDictionary;

@interface GameCenterManager : NSObject {

	NSMutableDictionary* earnedAchievementCache;
	id<GameCenterManagerDelegate><NSObject> delegate;

}

@property (retain) NSMutableDictionary * earnedAchievementCache; 
@property (assign,nonatomic) id<GameCenterManagerDelegate> delegate; 
+(char)isGameCenterAvailable;
-(void)authenticateLocalUser;
-(void)setEarnedAchievementCache:(NSMutableDictionary *)arg1 ;
-(void)callDelegate:(SEL)arg1 withArg:(id)arg2 error:(id)arg3 ;
-(void)callDelegateOnMainThread:(SEL)arg1 withArg:(id)arg2 error:(id)arg3 ;
-(NSMutableDictionary *)earnedAchievementCache;
-(void)submitAchievement:(id)arg1 percentComplete:(double)arg2 ;
-(void)reloadHighScoresForCategory:(id)arg1 ;
-(void)reportScore:(long long)arg1 forCategory:(id)arg2 ;
-(void)resetAchievements;
-(void)mapPlayerIDtoPlayer:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<GameCenterManagerDelegate>)arg1 ;
-(id)init;
-(id<GameCenterManagerDelegate>)delegate;
@end
