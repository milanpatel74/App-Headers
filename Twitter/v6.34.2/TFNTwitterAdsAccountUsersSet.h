/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class TFNTwitterAccount, NSMutableSet;

@interface TFNTwitterAdsAccountUsersSet : NSObject {

	BOOL _processingUserIDs;
	TFNTwitterAccount* _account;
	NSMutableSet* _adsReadAccessUserIDs;

}

@property (assign,nonatomic,__weak) TFNTwitterAccount * account;               //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableSet * adsReadAccessUserIDs;              //@synthesize adsReadAccessUserIDs=_adsReadAccessUserIDs - In the implementation block
@property (assign,nonatomic) BOOL processingUserIDs;                           //@synthesize processingUserIDs=_processingUserIDs - In the implementation block
-(BOOL)hasMultipleAdsAccounts;
-(BOOL)canViewAdsForUser:(id)arg1 ;
-(void)_accountUserIsReady:(id)arg1 ;
-(void)_updateAdsAccountUsersSet;
-(BOOL)processingUserIDs;
-(void)setProcessingUserIDs:(BOOL)arg1 ;
-(void)_refreshAdsAccounts;
-(void)_processAdsAccountsDictionary:(id)arg1 ;
-(BOOL)_hasReadAccessForAdsAccounts:(id)arg1 ;
-(NSMutableSet *)adsReadAccessUserIDs;
-(void)setAdsReadAccessUserIDs:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
