/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:45 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class FBMThreadDescriptor, FBMMessageCursorDescriptor;

@interface FBMSingleThreadFetchConfiguration : FBValueObject <NSCopying> {

	BOOL _isQueryingForAdditionalMessages;
	BOOL _isQueryingForUserInfo;
	FBMThreadDescriptor* _threadDescriptor;
	unsigned long long _numberOfMessagesToQuery;
	FBMMessageCursorDescriptor* _oldestMessageCursorDescriptor;

}

@property (nonatomic,copy,readonly) FBMThreadDescriptor * threadDescriptor;                                  //@synthesize threadDescriptor=_threadDescriptor - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMessagesToQuery;                                   //@synthesize numberOfMessagesToQuery=_numberOfMessagesToQuery - In the implementation block
@property (nonatomic,copy,readonly) FBMMessageCursorDescriptor * oldestMessageCursorDescriptor;              //@synthesize oldestMessageCursorDescriptor=_oldestMessageCursorDescriptor - In the implementation block
@property (nonatomic,readonly) BOOL isQueryingForAdditionalMessages;                                         //@synthesize isQueryingForAdditionalMessages=_isQueryingForAdditionalMessages - In the implementation block
@property (nonatomic,readonly) BOOL isQueryingForUserInfo;                                                   //@synthesize isQueryingForUserInfo=_isQueryingForUserInfo - In the implementation block
-(FBMThreadDescriptor *)threadDescriptor;
-(BOOL)isQueryingForAdditionalMessages;
-(unsigned long long)numberOfMessagesToQuery;
-(BOOL)isQueryingForUserInfo;
-(id)initWithThreadDescriptor:(id)arg1 numberOfMessagesToQuery:(unsigned long long)arg2 oldestMessageCursorDescriptor:(id)arg3 isQueryingForAdditionalMessages:(BOOL)arg4 isQueryingForUserInfo:(BOOL)arg5 ;
-(FBMMessageCursorDescriptor *)oldestMessageCursorDescriptor;
@end
