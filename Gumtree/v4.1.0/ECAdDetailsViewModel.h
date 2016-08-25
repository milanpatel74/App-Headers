/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray;

@interface ECAdDetailsViewModel : NSObject {

	BOOL _isUserAd;
	NSMutableArray* _lastRequestedIDs;

}

@property (assign,nonatomic) BOOL isUserAd;                                  //@synthesize isUserAd=_isUserAd - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastRequestedIDs;              //@synthesize lastRequestedIDs=_lastRequestedIDs - In the implementation block
-(void)setIsUserAd:(BOOL)arg1 ;
-(void)setLastRequestedIDs:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lastRequestedIDs;
-(BOOL)isUserAd;
-(id)initWithMyAd:(BOOL)arg1 ;
-(void)loadAdDetailsForAd:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadOtherAdsCountForAd:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)loadUserProfileForAd:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)toggleWatchListWithAd:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end
