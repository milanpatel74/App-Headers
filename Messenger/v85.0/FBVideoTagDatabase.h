/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:27 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBVideoTagFaceAnalysisDelegate.h>

@class FBUserSession, FBVideoTagConfiguration, NSMutableDictionary, NSMutableArray, NSString;

@interface FBVideoTagDatabase : NSObject <FBVideoTagFaceAnalysisDelegate> {

	FBUserSession* _session;
	FBVideoTagConfiguration* _config;
	NSMutableDictionary* _analysesCallbacks;
	NSMutableDictionary* _cachedResults;
	NSMutableArray* _analysesQueue;
	unsigned long long _maxConcurrentAnalysesCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 configuration:(id)arg2 ;
-(void)_cancelCompletionBlock:(/*^block*/id)arg1 forVideoAssetID:(id)arg2 ;
-(void)_addCompletionBlock:(/*^block*/id)arg1 forVideoAssetID:(id)arg2 ;
-(void)_enqueueAnalysisIfRequiredForVideoAssetID:(id)arg1 ;
-(void)_removeAnalysisForVideoAssetID:(id)arg1 cancel:(BOOL)arg2 ;
-(void)_processAnalysisQueue;
-(void)_processCallbacksForAssetID:(id)arg1 ;
-(void)videoTagFaceAnalysisDidComplete:(id)arg1 ;
-(id)detectFacesForVideoAssetID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end
