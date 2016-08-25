/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSDictionary;

@interface WAContactProperty : NSObject <NSCopying> {

	BOOL _readonly;
	BOOL _supressAutomaticPropertyUpdates;
	int _abPropertyID;
	int _abPersonID;
	NSString* _stringValue;
	NSDate* _dateValue;
	NSDictionary* _dictionaryValue;
	NSString* _label;
	NSString* _systemLabel;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) BOOL supressAutomaticPropertyUpdates;              //@synthesize supressAutomaticPropertyUpdates=_supressAutomaticPropertyUpdates - In the implementation block
@property (assign,nonatomic) int abPropertyID;                                  //@synthesize abPropertyID=_abPropertyID - In the implementation block
@property (assign,nonatomic) int abPersonID;                                    //@synthesize abPersonID=_abPersonID - In the implementation block
@property (assign,getter=isReadonly,nonatomic) BOOL readonly;                   //@synthesize readonly=_readonly - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,copy) NSDate * dateValue;                                  //@synthesize dateValue=_dateValue - In the implementation block
@property (nonatomic,copy) NSDictionary * dictionaryValue;                      //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
@property (nonatomic,copy) NSString * label;                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * systemLabel;                              //@synthesize systemLabel=_systemLabel - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                             //@synthesize userInfo=_userInfo - In the implementation block
+(id)propertyWithABProperty:(int)arg1 ;
+(id)stringForAddressBookDate:(id)arg1 ;
-(void)setSystemLabel:(NSString *)arg1 ;
-(NSDictionary *)dictionaryValue;
-(void)setDictionaryValue:(NSDictionary *)arg1 ;
-(NSString *)systemLabel;
-(void)setDictionaryValue:(id)arg1 forKey:(id)arg2 ;
-(void)setAbPersonID:(int)arg1 ;
-(int)abPersonID;
-(void)addValueAndLabelToABMutableMultiValue:(void*)arg1 ;
-(BOOL)isEqualToProperty:(id)arg1 ;
-(id)initWithABProperty:(int)arg1 ;
-(BOOL)supressAutomaticPropertyUpdates;
-(void)setSupressAutomaticPropertyUpdates:(BOOL)arg1 ;
-(void)setAbPropertyID:(int)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)userInfo;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
-(int)abPropertyID;
-(BOOL)isReadonly;
-(NSDate *)dateValue;
-(void)setReadonly:(BOOL)arg1 ;
-(void)setDateValue:(NSDate *)arg1 ;
@end
