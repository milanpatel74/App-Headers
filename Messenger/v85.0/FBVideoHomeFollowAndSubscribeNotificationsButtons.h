/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol FBQueriedVideoChannelFieldsProtocol;
@class FBMorphableButton, FBMorphableButtonContent, FBMemModelObject, NSString, FBUserSession;

@interface FBVideoHomeFollowAndSubscribeNotificationsButtons : UIView {

	FBMorphableButton* _followButton;
	FBMorphableButtonContent* _followButtonFollowContent;
	FBMorphableButtonContent* _followButtonFollowingContent;
	FBMorphableButton* _notificationsButton;
	FBMorphableButtonContent* _notificationsButtonSubscribeContent;
	FBMorphableButtonContent* _notificationsButtonUnsubscribeContent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	NSString* _videoID;
	FBUserSession* _session;
	BOOL _darkBackground;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _followStateToggledToBlock;
	/*^block*/id _notificationsStateToggledToBlock;

}
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)_followingOrNotificationValueDidChange:(id)arg1 ;
-(id)initWithVideoChannel:(id)arg1 videoID:(id)arg2 session:(id)arg3 darkBackground:(BOOL)arg4 videoHomeSessionIDProvider:(/*^block*/id)arg5 followStateToggledToBlock:(/*^block*/id)arg6 notificationsStateToggledToBlock:(/*^block*/id)arg7 ;
-(void)_didTapFollowButton;
-(void)_didTapFollowingButton;
-(void)_didTapSubscribeButton;
-(void)_didTapUnsubscribeButton;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
