/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 2, 2015 at 10:04:51 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/6EA2C334-4708-4A2A-9290-87A765CA9E42/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface WAPushSoundSet : NSObject <NSCopying> {

	NSString* _name;
	NSArray* _sounds;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * sounds;              //@synthesize sounds=_sounds - In the implementation block
+(id)setWithName:(id)arg1 sounds:(id)arg2 ;
+(id)findSoundByFilename:(id)arg1 inSoundSets:(id)arg2 returningSetIndex:(unsigned long long*)arg3 returningSoundIndex:(unsigned long long*)arg4 ;
-(id)initWithName:(id)arg1 sounds:(id)arg2 ;
-(NSArray *)sounds;
-(void)setSounds:(NSArray *)arg1 ;
-(unsigned long long)indexOfPushSoundWithFilename:(id)arg1 ;
-(id)pushSoundAtIndex:(unsigned long long)arg1 ;
-(void)removePushSoundAtIndex:(unsigned long long)arg1 ;
-(void)insertPushSound:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

