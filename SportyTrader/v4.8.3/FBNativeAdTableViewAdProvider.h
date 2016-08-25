/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/FBNativeAdDelegate.h>
#import <SportyTrader/FBNativeAdsManagerDelegate.h>

@protocol FBNativeAdDelegate;
@class FBNativeAdsManager, NSMutableDictionary, NSString;

@interface FBNativeAdTableViewAdProvider : NSObject <FBNativeAdDelegate, FBNativeAdsManagerDelegate> {

	id<FBNativeAdDelegate> _delegate;
	FBNativeAdsManager* _manager;
	NSMutableDictionary* _currentIndexPathToAdMap;

}

@property (assign,nonatomic,__weak) id<FBNativeAdDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBNativeAdsManager * manager;                               //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * currentIndexPathToAdMap;              //@synthesize currentIndexPathToAdMap=_currentIndexPathToAdMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)nativeAdWillLogImpression:(id)arg1 ;
-(void)nativeAdDidClick:(id)arg1 ;
-(void)nativeAdDidFinishHandlingClick:(id)arg1 ;
-(NSMutableDictionary *)currentIndexPathToAdMap;
-(void)setCurrentIndexPathToAdMap:(NSMutableDictionary *)arg1 ;
-(BOOL)isAdCellAtIndexPath:(id)arg1 forStride:(unsigned long long)arg2 ;
-(id)adjustNonAdCellIndexPath:(id)arg1 forStride:(unsigned long long)arg2 ;
-(unsigned long long)adjustCount:(unsigned long long)arg1 forStride:(unsigned long long)arg2 ;
-(void)nativeAdsLoaded;
-(void)nativeAdsFailedToLoadWithError:(id)arg1 ;
-(id)tableView:(id)arg1 nativeAdForRowAtIndexPath:(id)arg2 ;
-(FBNativeAdsManager *)manager;
-(void)setDelegate:(id<FBNativeAdDelegate>)arg1 ;
-(id)init;
-(id<FBNativeAdDelegate>)delegate;
-(id)initWithManager:(id)arg1 ;
-(void)setManager:(FBNativeAdsManager *)arg1 ;
@end
