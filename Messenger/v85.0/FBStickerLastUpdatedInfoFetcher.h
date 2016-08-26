/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:29 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBGraphQLService;

@interface FBStickerLastUpdatedInfoFetcher : NSObject {

	id<FBServiceTransactionMutating> _fetchRequest;
	FBGraphQLService* _graphQLService;
	unsigned long long _layoutIdiom;

}
-(void)_applyServiceConfiguration:(id)arg1 ;
-(id)_handleDownloadResponse:(id)arg1 ;
-(void)_handleDownloadError:(id)arg1 ;
-(id)initWithGraphQLService:(id)arg1 layoutIdiom:(unsigned long long)arg2 ;
-(void)fetchUpdatedStickerPacksSince:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)cancelRequest;
@end
