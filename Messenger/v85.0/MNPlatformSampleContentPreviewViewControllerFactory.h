/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, MNPlatformSampleProvider;

@interface MNPlatformSampleContentPreviewViewControllerFactory : NSObject {

	NSMutableDictionary* _controllers;
	NSMutableDictionary* _fetchers;
	MNPlatformSampleProvider* _platformSampleProvider;
	/*^block*/id _viewControllerCreationBlock;

}
-(id)initWithViewControllerCreationBlock:(/*^block*/id)arg1 platformSampleProvider:(id)arg2 ;
-(id)platformSampleContentPreviewViewControllerForAppID:(id)arg1 ;
-(BOOL)platformSampleContentAvailableForAppID:(id)arg1 ;
-(id)_sampleContentFetcherForAppID:(id)arg1 ;
-(id)_newSampleContentPreviewViewControllerForAppID:(id)arg1 ;
-(id)_newSampleContentFetcherForAppID:(id)arg1 ;
@end
