/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:30 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNearbyPlacesResultListDownloaderDelegate.h>
#import <Facebook/FBNearbyPlacesResultListDataFetching.h>

@protocol FBNearbyPlacesResultListDataFetchingDelegate;
@class FBNearbyPlacesResultListCache, FBNearbyPlacesResultListDownloader, FBNearbyPlacesPerfLogger, FBNearbyPlacesResultListRequestParameters, NSString;

@interface FBNearbyPlacesEndpointDataFetcher : NSObject <FBNearbyPlacesResultListDownloaderDelegate, FBNearbyPlacesResultListDataFetching> {

	FBNearbyPlacesResultListCache* _cache;
	FBNearbyPlacesResultListDownloader* _downloader;
	FBNearbyPlacesPerfLogger* _perfLogger;
	FBNearbyPlacesResultListRequestParameters* _currentParameters;
	id<FBNearbyPlacesResultListDataFetchingDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBNearbyPlacesResultListDataFetchingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isMapRequestParameters:(id)arg1 ;
-(id)initWithSession:(id)arg1 perfLogger:(id)arg2 ;
-(void)_cancelPerfEvents;
-(void)fetchWithParameters:(id)arg1 ;
-(BOOL)hasPendingFetch;
-(void)cancelFetch;
-(void)nearbyPlacesResultListDownloader:(id)arg1 didParseResponseWithResultListData:(id)arg2 ;
-(void)nearbyPlacesResultListDownloaderDidFail;
-(void)nearbyPlacesResultListDownloaderDidReceiveResponse;
-(void)setDelegate:(id<FBNearbyPlacesResultListDataFetchingDelegate>)arg1 ;
-(id<FBNearbyPlacesResultListDataFetchingDelegate>)delegate;
@end
