/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/VideoRenderInfoDelegate.h>
#import <Messenger/VideoRenderInfo.h>

@protocol VideoRenderInfo, VideoRenderInfoDelegate;
@class UIView, NSString;

@interface FBWebRTCPeerVideoView : UIView <VideoRenderInfoDelegate, VideoRenderInfo> {

	UIView*<VideoRenderInfo> _peerView;
	UIView* _placeholderView;
	id<VideoRenderInfoDelegate> _renderInfoDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<VideoRenderInfoDelegate> renderInfoDelegate;              //@synthesize renderInfoDelegate=_renderInfoDelegate - In the implementation block
@property (nonatomic,readonly) CGSize videoSize; 
@property (nonatomic,readonly) double timeIntervalSinceLastFrame; 
@property (nonatomic,readonly) BOOL hasVideoStarted; 
-(void)setRenderInfoDelegate:(id<VideoRenderInfoDelegate>)arg1 ;
-(void)videoSizeChangedForInfo:(id)arg1 ;
-(void)makeInactivePeerView;
-(void)makeActivePeerView:(id)arg1 ;
-(void)videoStreamRestarted;
-(BOOL)hasVideoStarted;
-(double)timeIntervalSinceLastFrame;
-(void)_updateViewToBounds:(CGRect)arg1 ;
-(void)_setPeerView:(id)arg1 ;
-(id<VideoRenderInfoDelegate>)renderInfoDelegate;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)videoSize;
@end
