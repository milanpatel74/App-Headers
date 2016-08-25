/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SportyTrader/AMSBJsonBase.h>
#import <SportyTrader/AMSBJsonWriter.h>

@interface AMSBJsonWriter : AMSBJsonBase <AMSBJsonWriter> {

	BOOL sortKeys;
	BOOL humanReadable;

}

@property (assign) BOOL humanReadable; 
@property (assign) BOOL sortKeys; 
+(void)initialize;
-(BOOL)sortKeys;
-(void)setSortKeys:(BOOL)arg1 ;
-(BOOL)humanReadable;
-(void)setHumanReadable:(BOOL)arg1 ;
-(id)stringWithObject:(id)arg1 ;
-(BOOL)appendValue:(id)arg1 into:(id)arg2 ;
-(id)stringWithFragment:(id)arg1 ;
-(BOOL)appendDictionary:(id)arg1 into:(id)arg2 ;
-(BOOL)appendArray:(id)arg1 into:(id)arg2 ;
-(BOOL)appendString:(id)arg1 into:(id)arg2 ;
-(id)indent;
@end
