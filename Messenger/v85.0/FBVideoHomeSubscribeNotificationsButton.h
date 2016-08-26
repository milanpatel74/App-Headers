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
@class FBMorphableButton, FBMorphableButtonContent, FBMemModelObject, FBUserSession, NSOperationQueue;

@interface FBVideoHomeSubscribeNotificationsButton : UIView {

	FBMorphableButton* _button;
	FBMorphableButtonContent* _subscribeButtonContent;
	FBMorphableButtonContent* _unsubscribeButtonContent;
	FBMemModelObject*<FBQueriedVideoChannelFieldsProtocol> _videoChannel;
	FBUserSession* _session;
	BOOL _darkBackground;
	long long _buttonAlignment;
	BOOL _showVideoHomeTabItemBling;
	/*^block*/id _videoHomeSessionIDProvider;
	/*^block*/id _stateToggledToBlock;
	NSOperationQueue* _queueForNextFollowedCLCUpdate;

}
-(void)_layoutSubviewsInternal:(BOOL)arg1 ;
-(void)_animateVideoTabItemBling;
-(void)_didTapSubscribeButton;
-(void)_didTapUnsubscribeButton;
-(void)_subscribedValueDidChange:(id)arg1 ;
-(id)initWithVideoChannel:(id)arg1 session:(id)arg2 darkBackground:(BOOL)arg3 buttonAlignment:(long long)arg4 showVideoHomeTabItemBling:(BOOL)arg5 videoHomeSessionIDProvider:(/*^block*/id)arg6 stateToggledToBlock:(/*^block*/id)arg7 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
