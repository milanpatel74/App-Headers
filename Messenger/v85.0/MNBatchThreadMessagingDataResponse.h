/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet;

@interface MNBatchThreadMessagingDataResponse : FBValueObject <NSCopying> {

	NSDictionary* _queryToResponseMapping;
	NSSet* _queriesWhichThreadsDoNotExist;

}

@property (nonatomic,copy,readonly) NSDictionary * queryToResponseMapping;              //@synthesize queryToResponseMapping=_queryToResponseMapping - In the implementation block
@property (nonatomic,copy,readonly) NSSet * queriesWhichThreadsDoNotExist;              //@synthesize queriesWhichThreadsDoNotExist=_queriesWhichThreadsDoNotExist - In the implementation block
-(NSDictionary *)queryToResponseMapping;
-(NSSet *)queriesWhichThreadsDoNotExist;
-(id)initWithQueryToResponseMapping:(id)arg1 queriesWhichThreadsDoNotExist:(id)arg2 ;
@end
