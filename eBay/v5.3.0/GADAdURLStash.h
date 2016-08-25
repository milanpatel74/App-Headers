/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GADAdURLStash : NSObject {

	NSObject*<OS_dispatch_queue> _lockQueue;
	NSMutableDictionary* _adViewURLCollections;
	NSMutableDictionary* _mainDocumentURLAdViewKeys;
	NSMutableDictionary* _adViewLoadingFrameCount;

}
+(id)sharedInstance;
-(void)adViewDidFinishLoad:(id)arg1 ;
-(BOOL)hasLoadingAd;
-(id)adViewForURLRequest:(id)arg1 ;
-(void)removeAdView:(id)arg1 ;
-(void)adViewWillLoadRootContent:(id)arg1 ;
-(void)adView:(id)arg1 willLoadURLRequest:(id)arg2 ;
-(void)adViewDidStartLoad:(id)arg1 ;
-(id)init;
@end
