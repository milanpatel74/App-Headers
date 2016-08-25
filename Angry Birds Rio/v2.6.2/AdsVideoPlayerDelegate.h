/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <AngryBirdsRio/SNTVideoPlayerControllerDelegate.h>

@class NSString;

@interface AdsVideoPlayerDelegate : NSObject <SNTVideoPlayerControllerDelegate> {

	VideoPlayer* _iface;
	Listener* _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)onVideoEnded:(BOOL)arg1 percentCompleted:(float)arg2 ;
-(void)onCustomControlClicked:(const char*)arg1 percentCompleted:(float)arg2 ;
-(void)onVideoTrackEvent:(const char*)arg1 ;
-(void)onEndCardClick:(const char*)arg1 ;
-(void)onEndCardTrackEvent:(const char*)arg1 eventId:(const char*)arg2 ;
-(void)onEndCardReady:(BOOL)arg1 ;
-(id)initWithIface:(VideoPlayer*)arg1 ;
-(void)setListener:(Listener*)arg1 ;
@end
