/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:22 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSDictionary, NSDate, NSSet, NSIndexSet;

@interface TrackingEvent : NSObject {

	BOOL bIsRoiEvent;
	NSString* trackingName;
	NSDictionary* trackingParameters;
	NSDate* tStamp;
	NSString* flagsetName;
	NSSet* flags;
	NSIndexSet* numericFlags;

}

@property (nonatomic,retain) NSString * trackingName; 
@property (nonatomic,retain) NSDictionary * trackingParameters; 
@property (nonatomic,retain) NSString * flagsetName; 
@property (nonatomic,retain) NSSet * flags; 
@property (nonatomic,retain) NSIndexSet * numericFlags; 
@property (nonatomic,retain) NSDate * tStamp; 
@property (assign,nonatomic) BOOL bIsRoiEvent; 
+(id)Factory:(id)arg1 trackingParameters:(id)arg2 flagssetName:(id)arg3 flags:(id)arg4 numericFlags:(id)arg5 timeStamp:(id)arg6 ;
+(id)Factory:(id)arg1 trackingParameters:(id)arg2 timeStamp:(id)arg3 ;
-(void)setTrackingName:(NSString *)arg1 ;
-(NSString *)trackingName;
-(void)setTrackingParameters:(NSDictionary *)arg1 ;
-(void)setTStamp:(NSDate *)arg1 ;
-(void)setFlagsetName:(NSString *)arg1 ;
-(void)setNumericFlags:(NSIndexSet *)arg1 ;
-(NSDictionary *)trackingParameters;
-(NSDate *)tStamp;
-(BOOL)bIsRoiEvent;
-(void)setBIsRoiEvent:(BOOL)arg1 ;
-(NSString *)flagsetName;
-(NSIndexSet *)numericFlags;
-(void)setFlags:(NSSet *)arg1 ;
-(NSSet *)flags;
@end
