/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCLEventSource.h>
#import <Messenger/FBBackgroundFetchObserver.h>

@class FBBackgroundFetchManager, FBCLLocationLogger, NSString;

@interface FBCLBackgroundFetchEventSource : FBCLEventSource <FBBackgroundFetchObserver> {

	BOOL _started;
	FBBackgroundFetchManager* _backgroundFetchManager;
	id _notificationFetchHandle;
	id _backgroundFetchHandle;
	FBCLLocationLogger* _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)_accuracyAtLevel:(long long)arg1 ;
-(void)handleBackgroundFetchRequest:(id)arg1 ;
-(id)initWithBackgroundFetchManager:(id)arg1 eventChannel:(id)arg2 locationLogger:(id)arg3 ;
-(void)dealloc;
-(void)stop;
-(void)start;
@end
