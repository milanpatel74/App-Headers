/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WAFieldStatsEvent.h>

@class NSString;

@interface WAFieldStatsEventDatabaseError : WAFieldStatsEvent {

	double _database_error_code;
	NSString* _database_method;
	double _database_type;

}

@property (assign,nonatomic) double database_error_code;              //@synthesize database_error_code=_database_error_code - In the implementation block
@property (nonatomic,retain) NSString * database_method;              //@synthesize database_method=_database_method - In the implementation block
@property (assign,nonatomic) double database_type;                    //@synthesize database_type=_database_type - In the implementation block
-(double)database_error_code;
-(void)setDatabase_error_code:(double)arg1 ;
-(NSString *)database_method;
-(void)setDatabase_method:(NSString *)arg1 ;
-(double)database_type;
-(void)setDatabase_type:(double)arg1 ;
-(id)init;
-(void)submit;
@end

