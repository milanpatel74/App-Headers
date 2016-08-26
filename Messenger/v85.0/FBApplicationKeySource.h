/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBApplicationKeySource : FBValueObject <NSCopying> {

	NSString* _appSecret;
	NSString* _appGroup;
	NSString* _publicAppName;
	NSString* _pushTransmitterID;

}

@property (nonatomic,copy,readonly) NSString * appSecret;                      //@synthesize appSecret=_appSecret - In the implementation block
@property (nonatomic,copy,readonly) NSString * appGroup;                       //@synthesize appGroup=_appGroup - In the implementation block
@property (nonatomic,copy,readonly) NSString * publicAppName;                  //@synthesize publicAppName=_publicAppName - In the implementation block
@property (nonatomic,copy,readonly) NSString * pushTransmitterID;              //@synthesize pushTransmitterID=_pushTransmitterID - In the implementation block
-(NSString *)appGroup;
-(NSString *)appSecret;
-(id)initWithAppSecret:(id)arg1 appGroup:(id)arg2 publicAppName:(id)arg3 pushTransmitterID:(id)arg4 ;
-(NSString *)publicAppName;
-(NSString *)pushTransmitterID;
@end
