/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:39 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/OCMockObject.h>

@class NSMutableDictionary;

@interface OCClassMockObject : OCMockObject {

	Class mockedClass;
	NSMutableDictionary* replacedClassMethods;

}
+(void)forgetMockForClass:(Class)arg1 ;
+(void)rememberMock:(id)arg1 forClass:(Class)arg2 ;
+(id)existingMockForClass:(Class)arg1 ;
+(void)initialize;
-(BOOL)isNSString__;
-(BOOL)isNSArray__;
-(BOOL)isNSSet__;
-(BOOL)isNSOrderedSet__;
-(BOOL)isNSDictionary__;
-(BOOL)isNSNumber__;
-(BOOL)isNSDate__;
-(BOOL)isNSData__;
-(BOOL)isNSTimeZone__;
-(BOOL)isNSValue__;
-(void)stopMocking;
-(Class)mockObjectClass;
-(void)forwardInvocationForClassObject:(id)arg1 ;
-(void)removeForwarderForClassMethodSelector:(SEL)arg1 ;
-(Class)mockedClass;
-(void)setupClassForClassMethodMocking;
-(void)setupForwarderForClassMethodSelector:(SEL)arg1 ;
-(id)initWithClass:(Class)arg1 ;
-(Class)class;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 ;
-(id)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
@end
