/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterCardViewBaseEventHandler.h>
#import <Twitter/TFNTwitterAudioPlayerDelegate.h>
#import <Twitter/TFNTwitterCardViewEventHandler.h>

@class T1NativeAudioCardView, NSString;

@interface T1NativeAudioCardViewEventHandler : TFNTwitterCardViewBaseEventHandler <TFNTwitterAudioPlayerDelegate, TFNTwitterCardViewEventHandler> {

	T1NativeAudioCardView* _cardView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleViewEvent:(id)arg1 context:(id)arg2 ;
-(void)_handleAudioPlayEvent:(id)arg1 context:(id)arg2 ;
-(id)audioPlayerConfigurationForAudioPlayer:(id)arg1 ;
-(void)audioPlayerDidDispose:(id)arg1 ;
-(void)audioPlayerDidPresent:(id)arg1 ;
-(void)audioPlayerDidStartLoading:(id)arg1 ;
@end
