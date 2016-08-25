/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:01:47 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/3822BE3B-29D4-4DEB-BFFF-FDA22D01C707/AngryBirdsClassic.app/AngryBirdsClassic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FlurryKeychainWrapper : NSObject {

	NSString* identifier;

}

@property (nonatomic,retain) NSString * identifier; 
+(id)keychainWrapperWithIdentifier:(id)arg1 ;
-(BOOL)setThisDeviceString:(id)arg1 forKey:(id)arg2 ;
-(id)setupSearchForKey:(id)arg1 ;
-(BOOL)setThisDeviceData:(id)arg1 forKey:(id)arg2 ;
-(BOOL)updateValueData:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSString *)identifier;
-(void)removeObjectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)stringForKey:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)setString:(id)arg1 forKey:(id)arg2 ;
-(id)dataForKey:(id)arg1 ;
-(BOOL)setData:(id)arg1 forKey:(id)arg2 ;
@end
