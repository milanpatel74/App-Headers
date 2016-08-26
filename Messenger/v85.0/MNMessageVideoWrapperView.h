/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/MNVideoViewNodeCloseDelegate.h>

@class MNVideoViewNode, MNMessageVideoView, NSString;

@interface MNMessageVideoWrapperView : UIView <MNVideoViewNodeCloseDelegate> {

	MNVideoViewNode* _videoViewNode;
	MNMessageVideoView* _videoView;

}

@property (nonatomic,readonly) MNVideoViewNode * videoViewNode;              //@synthesize videoViewNode=_videoViewNode - In the implementation block
@property (nonatomic,readonly) MNMessageVideoView * videoView;               //@synthesize videoView=_videoView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNVideoViewNode *)videoViewNode;
-(id)initWithVideoView:(id)arg1 videoViewNodeConfiguration:(id)arg2 ;
-(id)videoNodeCloseView:(id)arg1 ;
-(CGRect)videoNodeCloseFrame:(id)arg1 ;
-(void)layoutSubviews;
-(MNMessageVideoView *)videoView;
@end
