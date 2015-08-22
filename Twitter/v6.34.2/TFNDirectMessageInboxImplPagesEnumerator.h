/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:47 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TFNDirectMessageAbstractPagesEnumerator.h>

@class TFNDirectMessageInboxImpl;

@interface TFNDirectMessageInboxImplPagesEnumerator : TFNDirectMessageAbstractPagesEnumerator {

	TFNDirectMessageInboxImpl* _inbox;

}

@property (assign,nonatomic,__weak) TFNDirectMessageInboxImpl * inbox;              //@synthesize inbox=_inbox - In the implementation block
+(long long)_maxIDValue;
+(id)inboxPagesEnumeratorWithInbox:(id)arg1 ;
-(TFNDirectMessageInboxImpl *)inbox;
-(void)setInbox:(TFNDirectMessageInboxImpl *)arg1 ;
-(BOOL)hasMore;
-(long long)_minID;
-(id)_localObjects;
-(void)_paginateFromEventID:(long long)arg1 completion:(/*^block*/id)arg2 ;
@end
