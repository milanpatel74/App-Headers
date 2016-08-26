/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:43 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAnnouncerBase.h>
#import <Facebook/FBTVCastingPlaybackEventListener.h>

@class NSString;

@interface FBTVCastingPlaybackEventListenerAnnouncer : FBAnnouncerBase <FBTVCastingPlaybackEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tvVideoPlaybackControllerIsReady:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidStartPlayback:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidPausePlayback:(id)arg1 ;
-(void)tvVideoPlaybackControllerDidFinishPlayback:(id)arg1 ;
-(void)tvVideoPlaybackController:(id)arg1 didFailWithError:(unsigned long long)arg2 ;
-(void)tvVideoPlaybackController:(id)arg1 didLoadVideoDuration:(double)arg2 ;
-(void)tvVideoPlaybackController:(id)arg1 didUpdatePlaybackTime:(double)arg2 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
