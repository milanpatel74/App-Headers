/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBKeyValueDataStore.h>
#import <Messenger/FBInvalidating.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface FBAppDefaults : NSObject <FBKeyValueDataStore, FBInvalidating> {

	NSObject*<OS_dispatch_source> _timer;
	BOOL _invalidated;
	BOOL _protectionDisabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid; 
+(id)appDefaults;
-(void)_scheduleSynchronize;
-(void)_disableDataProtectionIfNeeded;
-(void)setFloat:(float)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(NSString *)debugDescription;
-(id)objectForKey:(id)arg1 ;
-(void)invalidate;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(void)synchronize;
-(BOOL)isValid;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(void)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(long long)integerForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)clear;
-(id)dictionaryForKey:(id)arg1 ;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)setDouble:(double)arg1 forKey:(id)arg2 ;
-(id)arrayForKey:(id)arg1 ;
-(double)doubleForKey:(id)arg1 ;
-(id)dataForKey:(id)arg1 ;
@end
