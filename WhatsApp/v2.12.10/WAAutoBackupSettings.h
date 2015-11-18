/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:56 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSUserDefaults, NSDate;

@interface WAAutoBackupSettings : NSObject {

	id _autoBackupDate;
	unsigned long long _frequency;
	NSUserDefaults* _defaults;

}

@property (assign,nonatomic) unsigned long long frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) BOOL shouldPerformAutoBackupNow; 
@property (nonatomic,readonly) NSDate * autoBackupDate;                      //@synthesize autoBackupDate=_autoBackupDate - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * defaults;                    //@synthesize defaults=_defaults - In the implementation block
+(double)timeIntervalForFrequency:(unsigned long long)arg1 ;
+(id)localizedDescriptionForFrequency:(unsigned long long)arg1 ;
+(unsigned long long)parseFrequencyFromInteger:(long long)arg1 ;
+(id)descriptionForFrequency:(unsigned long long)arg1 ;
+(long long)integerForFrequency:(unsigned long long)arg1 ;
+(id)expirationForDate:(id)arg1 withMultiple:(long long)arg2 ofInterval:(unsigned long long)arg3 ;
-(void)setAutoBackupDate:(NSDate *)arg1 ;
-(NSDate *)autoBackupDate;
-(BOOL)hasMultiple:(long long)arg1 ofCurrentAutoBackupIntervalElapsedSinceDate:(id)arg2 ;
-(id)expirationForDate:(id)arg1 withMultiple:(long long)arg2 ;
-(void)resetAutoBackupDate;
-(void)updateAutoBackupDate;
-(BOOL)shouldPerformAutoBackupNow;
-(NSUserDefaults *)defaults;
-(BOOL)enabled;
-(id)init;
-(unsigned long long)frequency;
-(void)setFrequency:(unsigned long long)arg1 ;
-(id)initWithUserDefaults:(id)arg1 ;
@end
