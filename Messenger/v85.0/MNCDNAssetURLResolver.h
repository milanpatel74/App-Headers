/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, MNCDNAssetURLCache, MNCDNAssetURLFetcher;

@interface MNCDNAssetURLResolver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	MNCDNAssetURLCache* _urlCache;
	MNCDNAssetURLFetcher* _urlFetcher;

}
-(void)resolveUrlForAssetIdentifier:(id)arg1 withFulfillmentPolicy:(unsigned long long)arg2 success:(/*^block*/id)arg3 failure:(/*^block*/id)arg4 ;
-(id)initWithQueue:(id)arg1 urlCache:(id)arg2 urlFetcher:(id)arg3 ;
-(void)_didFinishFetchingCachedUrl:(id)arg1 fromAssetIdentifier:(id)arg2 withFulfillmentPolicy:(unsigned long long)arg3 success:(/*^block*/id)arg4 failure:(/*^block*/id)arg5 ;
-(void)_fetchUrlForAssetIdentifier:(id)arg1 success:(/*^block*/id)arg2 failure:(/*^block*/id)arg3 ;
-(void)_fetchUrlDidSucceedForAssetIdentifier:(id)arg1 url:(id)arg2 success:(/*^block*/id)arg3 ;
@end
