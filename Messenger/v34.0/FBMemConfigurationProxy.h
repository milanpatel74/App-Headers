/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class NSString, FBMemConfiguration, NSData;

@interface FBMemConfigurationProxy : NSObject {

	NSString* _name;
	NSString* _group;
	NSString* _hashString;
	FBMemConfiguration* _realObject;
	NSData* _serializedObject;
	Mutex _lock;

}
+(id)memConfigurationProxyWithName:(id)arg1 group:(id)arg2 hashString:(id)arg3 data:(id)arg4 ;
-(id)initWithName:(id)arg1 group:(id)arg2 hashString:(id)arg3 data:(id)arg4 ;
-(id)_realObject;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)name;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(Class)classForCoder;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)group;
-(id)hashString;
@end
