/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:01 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSDate, NSString, NSData;

@interface FlurryError : NSObject <NSCoding> {

	int errorID;
	int errorType;
	NSDate* date;
	NSString* errorString;
	NSString* errorMessage;
	NSString* exceptionString;
	NSData* reportData;

}

@property (assign,nonatomic) int errorID; 
@property (nonatomic,retain) NSDate * date; 
@property (nonatomic,retain) NSString * errorString; 
@property (nonatomic,retain) NSString * errorMessage; 
@property (nonatomic,retain) NSString * exceptionString; 
@property (assign,nonatomic) int errorType; 
@property (nonatomic,retain) NSData * reportData; 
+(id)errorWithString:(id)arg1 message:(id)arg2 exceptionString:(id)arg3 errorType:(int)arg4 reportData:(id)arg5 ;
-(int)errorID;
-(void)setErrorID:(int)arg1 ;
-(void)setExceptionString:(NSString *)arg1 ;
-(void)setErrorType:(int)arg1 ;
-(void)setReportData:(NSData *)arg1 ;
-(NSString *)exceptionString;
-(NSData *)reportData;
-(void)appendToData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(int)errorType;
-(NSString *)errorString;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setErrorString:(NSString *)arg1 ;
@end
