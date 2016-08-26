/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBExtensibleMessageCustomizationData, FBExtensibleMessagePlatformData, FBExtensibleMessageMontageData, FBExtensibleMessageSourceData;

@interface FBExtensibleMessageData : FBValueObject <NSCoding, NSCopying> {

	FBExtensibleMessageCustomizationData* _customizationData;
	FBExtensibleMessagePlatformData* _platformData;
	FBExtensibleMessageMontageData* _montageData;
	FBExtensibleMessageSourceData* _messageSourceData;

}

@property (nonatomic,copy,readonly) FBExtensibleMessageCustomizationData * customizationData;              //@synthesize customizationData=_customizationData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessagePlatformData * platformData;                        //@synthesize platformData=_platformData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageMontageData * montageData;                          //@synthesize montageData=_montageData - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageSourceData * messageSourceData;                     //@synthesize messageSourceData=_messageSourceData - In the implementation block
-(FBExtensibleMessageSourceData *)messageSourceData;
-(id)initWithCustomizationData:(id)arg1 platformData:(id)arg2 montageData:(id)arg3 messageSourceData:(id)arg4 ;
-(FBExtensibleMessagePlatformData *)platformData;
-(FBExtensibleMessageCustomizationData *)customizationData;
-(FBExtensibleMessageMontageData *)montageData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
