/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface SASVASTAd : NSObject {

	NSString* _adid;
	NSString* _sequence;
	NSString* _skipOffset;
	NSArray* _errors;
	NSArray* _impressions;
	NSArray* _trackingEvents;
	NSArray* _clicksEvent;

}

@property (nonatomic,retain,readonly) NSString * adid;                       //@synthesize adid=_adid - In the implementation block
@property (nonatomic,retain,readonly) NSString * sequence;                   //@synthesize sequence=_sequence - In the implementation block
@property (nonatomic,retain,readonly) NSString * skipOffset;                 //@synthesize skipOffset=_skipOffset - In the implementation block
@property (nonatomic,retain,readonly) NSArray * errors;                      //@synthesize errors=_errors - In the implementation block
@property (nonatomic,retain,readonly) NSArray * impressions;                 //@synthesize impressions=_impressions - In the implementation block
@property (nonatomic,retain,readonly) NSArray * trackingEvents;              //@synthesize trackingEvents=_trackingEvents - In the implementation block
@property (nonatomic,retain,readonly) NSArray * clicksEvent;                 //@synthesize clicksEvent=_clicksEvent - In the implementation block
-(NSString *)skipOffset;
-(id)clickURL;
-(NSString *)adid;
-(id)findLinearNodeDictionnaryInAdDict:(id)arg1 ;
-(id)findDictionaryHavingKey:(id)arg1 inArray:(id)arg2 ;
-(BOOL)hasSequence;
-(BOOL)isSkippable;
-(BOOL)hasSkipOffset;
-(id)nextActionURL;
-(id)countClickURLs;
-(NSArray *)trackingEvents;
-(NSArray *)clicksEvent;
-(NSString *)sequence;
-(NSArray *)impressions;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)errors;
-(BOOL)isInline;
@end
