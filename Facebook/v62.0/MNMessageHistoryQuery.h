/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSyncedThreadQuery, MNMessagingDataHistoryRangeQuery;

@interface MNMessageHistoryQuery : FBValueObject <NSCopying> {

	MNSyncedThreadQuery* _syncedThreadQuery;
	MNMessagingDataHistoryRangeQuery* _messagesRange;
	unsigned long long _handlerOptions;

}

@property (nonatomic,copy,readonly) MNSyncedThreadQuery * syncedThreadQuery;                       //@synthesize syncedThreadQuery=_syncedThreadQuery - In the implementation block
@property (nonatomic,copy,readonly) MNMessagingDataHistoryRangeQuery * messagesRange;              //@synthesize messagesRange=_messagesRange - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerOptions;                                  //@synthesize handlerOptions=_handlerOptions - In the implementation block
-(MNSyncedThreadQuery *)syncedThreadQuery;
-(MNMessagingDataHistoryRangeQuery *)messagesRange;
-(id)initWithSyncedThreadQuery:(id)arg1 messagesRange:(id)arg2 handlerOptions:(unsigned long long)arg3 ;
-(unsigned long long)handlerOptions;
@end
