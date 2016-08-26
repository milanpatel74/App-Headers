/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionLogging.h>

@class FBNotificationsRichNotificationsManager, FBNotificationsSyncManager, FBReactionGenericLogger, FBDownstreamActionsTracker, FBNotificationsSeenStateManager, FBNotificationsLoggingIndexPathResolver, FBUserSession, NSString;

@interface FBNotificationsRichNotificationsActionHandler : NSObject <FBReactionLogging> {

	FBNotificationsRichNotificationsManager* _richNotificationsManager;
	FBNotificationsSyncManager* _syncManager;
	FBReactionGenericLogger* _reactionLogger;
	FBDownstreamActionsTracker* _downstreamActionsTracker;
	FBNotificationsSeenStateManager* _notificationsSeenStateManager;
	FBNotificationsLoggingIndexPathResolver* _loggingIndexPathResolver;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithRichNotificationsManager:(id)arg1 notificationsSyncManager:(id)arg2 analyticsModule:(id)arg3 reactionSessionInfo:(id)arg4 downstreamActionsTracker:(id)arg5 notificationsSeenStateManager:(id)arg6 notificationsLoggingIndexPathResolver:(id)arg7 session:(id)arg8 ;
-(void)logUserInteraction:(id)arg1 withExtras:(id)arg2 forReactionUnit:(id)arg3 ;
-(void)setUpDownstreamActionsTrackingWithNotification:(id)arg1 ;
-(void)_unhighlightIfNeededForInteraction:(id)arg1 notification:(id)arg2 ;
@end
