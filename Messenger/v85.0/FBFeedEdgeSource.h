/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBFeedEdgeSource : FBValueObject <NSCopying> {

	NSString* _loadRequestUUID;
	NSString* _responseUUID;

}

@property (nonatomic,copy,readonly) NSString * loadRequestUUID;              //@synthesize loadRequestUUID=_loadRequestUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * responseUUID;                 //@synthesize responseUUID=_responseUUID - In the implementation block
-(NSString *)loadRequestUUID;
-(NSString *)responseUUID;
-(id)initWithLoadRequestUUID:(id)arg1 responseUUID:(id)arg2 ;
@end
