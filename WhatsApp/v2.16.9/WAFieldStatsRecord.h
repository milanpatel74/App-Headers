/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:03 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WAFieldStatsRecord : NSObject {

	BOOL _written;
	int _type;
	int _uniqueId;
	unsigned _timestamp;
	NSString* _stringValue;
	double _numericValue;

}

@property (assign) int type;                          //@synthesize type=_type - In the implementation block
@property (assign) int uniqueId;                      //@synthesize uniqueId=_uniqueId - In the implementation block
@property (assign) unsigned timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (copy) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (assign) double numericValue;               //@synthesize numericValue=_numericValue - In the implementation block
@property (assign) BOOL written;                      //@synthesize written=_written - In the implementation block
+(id)typeToString:(int)arg1 ;
-(id)initWithType:(int)arg1 uniqueId:(int)arg2 stringValue:(id)arg3 ;
-(id)initWithType:(int)arg1 uniqueId:(int)arg2 value:(double)arg3 ;
-(id)initWithType:(int)arg1 uniqueId:(int)arg2 timestamp:(unsigned)arg3 ;
-(BOOL)isDimension;
-(BOOL)isEqualToRecord:(id)arg1 ;
-(void)setNumericValue:(double)arg1 ;
-(id)description;
-(unsigned)timestamp;
-(void)setType:(int)arg1 ;
-(void)setTimestamp:(unsigned)arg1 ;
-(int)type;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(int)uniqueId;
-(double)numericValue;
-(void)setUniqueId:(int)arg1 ;
-(BOOL)written;
-(void)setWritten:(BOOL)arg1 ;
@end
