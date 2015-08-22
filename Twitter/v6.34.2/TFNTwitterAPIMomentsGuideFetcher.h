/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:42 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNTwitterMomentsGuideFetcher.h>

@class TFNTwitterAccount, NSString;

@interface TFNTwitterAPIMomentsGuideFetcher : NSObject <TFNTwitterMomentsGuideFetcher> {

	BOOL _fetchingMomentsGuide;
	unsigned long long _hydrationCount;
	TFNTwitterAccount* _account;

}

@property (assign,nonatomic) unsigned long long hydrationCount;                                    //@synthesize hydrationCount=_hydrationCount - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                                          //@synthesize account=_account - In the implementation block
@property (assign,getter=isFetchingMomentsGuide,nonatomic) BOOL fetchingMomentsGuide;              //@synthesize fetchingMomentsGuide=_fetchingMomentsGuide - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchMomentsGuideWithResponseBlock:(/*^block*/id)arg1 ;
-(BOOL)isFetchingMomentsGuide;
-(void)setFetchingMomentsGuide:(BOOL)arg1 ;
-(unsigned long long)hydrationCount;
-(void)setHydrationCount:(unsigned long long)arg1 ;
-(id)init;
-(id)initWithAccount:(id)arg1 ;
-(TFNTwitterAccount *)account;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
@end
