/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSMutableSet, NSMutableDictionary;

@interface FBSwizzler : NSObject {

	NSMutableSet* _swizzles;
	NSMutableDictionary* _idSwizzleMap;
	unsigned long long _lastID;
	mutex _lock;

}
+(id)sharedInstance;
-(unsigned long long)addInstanceSwizzle:(Class)arg1 selector:(SEL)arg2 block:(id)arg3 ;
-(void)removeSwizzles;
-(SEL)_mangledSelectorForSelector:(SEL)arg1 inClass:(Class)arg2 instance:(BOOL)arg3 ;
-(BOOL)_hasSwizzleForClass:(Class)arg1 selector:(SEL)arg2 instance:(BOOL)arg3 ;
-(id)_swizzles;
-(void)removeSwizzle:(unsigned long long)arg1 ;
-(unsigned long long)addClassSwizzle:(Class)arg1 selector:(SEL)arg2 block:(id)arg3 ;
-(BOOL)hasClassSwizzleForClass:(Class)arg1 selector:(SEL)arg2 ;
-(BOOL)hasInstanceSwizzleForClass:(Class)arg1 selector:(SEL)arg2 ;
-(SEL)mangledSelectorForSwizzledClass:(Class)arg1 selector:(SEL)arg2 ;
-(SEL)mangledSelectorForSwizzledInstance:(Class)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(id)init;
@end
