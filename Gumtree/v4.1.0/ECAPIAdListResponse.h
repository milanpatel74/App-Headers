/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECAPIResponseBase.h>

@class NSMutableArray, NSString;

@interface ECAPIAdListResponse : ECAPIResponseBase {

	NSMutableArray* _ads;
	long long _numFound;
	long long _numNearbyFound;
	NSString* _firstNearbyAdID;
	NSString* _linkWebsite;

}

@property (nonatomic,retain) NSMutableArray * ads;                  //@synthesize ads=_ads - In the implementation block
@property (assign,nonatomic) long long numFound;                    //@synthesize numFound=_numFound - In the implementation block
@property (assign,nonatomic) long long numNearbyFound;              //@synthesize numNearbyFound=_numNearbyFound - In the implementation block
@property (nonatomic,copy) NSString * firstNearbyAdID;              //@synthesize firstNearbyAdID=_firstNearbyAdID - In the implementation block
@property (nonatomic,copy) NSString * linkWebsite;                  //@synthesize linkWebsite=_linkWebsite - In the implementation block
-(void)setLinkWebsite:(NSString *)arg1 ;
-(void)setAds:(NSMutableArray *)arg1 ;
-(void)setNumFound:(long long)arg1 ;
-(void)setNumNearbyFound:(long long)arg1 ;
-(void)setFirstNearbyAdID:(NSString *)arg1 ;
-(long long)numFound;
-(long long)numNearbyFound;
-(NSString *)firstNearbyAdID;
-(NSString *)linkWebsite;
-(void)parseData:(id)arg1 ;
-(NSMutableArray *)ads;
@end
