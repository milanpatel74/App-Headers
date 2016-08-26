/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:22 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface FBMReadParticipantFastQueryPrecomputedData : FBValueObject <NSCopying> {

	BOOL _includeSender;
	NSDictionary* _lastReadMessageIdsByUserId;

}

@property (nonatomic,copy,readonly) NSDictionary * lastReadMessageIdsByUserId;              //@synthesize lastReadMessageIdsByUserId=_lastReadMessageIdsByUserId - In the implementation block
@property (nonatomic,readonly) BOOL includeSender;                                          //@synthesize includeSender=_includeSender - In the implementation block
-(id)initWithLastReadMessageIdsByUserId:(id)arg1 includeSender:(BOOL)arg2 ;
-(NSDictionary *)lastReadMessageIdsByUserId;
-(BOOL)includeSender;
@end
