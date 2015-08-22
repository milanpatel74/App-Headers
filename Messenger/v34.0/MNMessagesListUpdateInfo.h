/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:55 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@interface MNMessagesListUpdateInfo : FBValueObject <NSCopying> {

	BOOL _initialUpdate;
	BOOL _containsTooManyUpdates;
	unsigned long long _detailsExpandedIndex;
	unsigned long long _detailsCollapsedIndex;
	long long _insertedLastRowType;
	unsigned long long _composingUpdate;
	unsigned long long _threadContextUpdate;

}

@property (nonatomic,readonly) BOOL initialUpdate;                                    //@synthesize initialUpdate=_initialUpdate - In the implementation block
@property (nonatomic,readonly) BOOL containsTooManyUpdates;                           //@synthesize containsTooManyUpdates=_containsTooManyUpdates - In the implementation block
@property (nonatomic,readonly) unsigned long long detailsExpandedIndex;               //@synthesize detailsExpandedIndex=_detailsExpandedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long detailsCollapsedIndex;              //@synthesize detailsCollapsedIndex=_detailsCollapsedIndex - In the implementation block
@property (nonatomic,readonly) long long insertedLastRowType;                         //@synthesize insertedLastRowType=_insertedLastRowType - In the implementation block
@property (nonatomic,readonly) unsigned long long composingUpdate;                    //@synthesize composingUpdate=_composingUpdate - In the implementation block
@property (nonatomic,readonly) unsigned long long threadContextUpdate;                //@synthesize threadContextUpdate=_threadContextUpdate - In the implementation block
-(unsigned long long)threadContextUpdate;
-(id)initWithInitialUpdate:(BOOL)arg1 containsTooManyUpdates:(BOOL)arg2 detailsExpandedIndex:(unsigned long long)arg3 detailsCollapsedIndex:(unsigned long long)arg4 insertedLastRowType:(long long)arg5 composingUpdate:(unsigned long long)arg6 threadContextUpdate:(unsigned long long)arg7 ;
-(BOOL)initialUpdate;
-(BOOL)containsTooManyUpdates;
-(unsigned long long)detailsExpandedIndex;
-(unsigned long long)detailsCollapsedIndex;
-(long long)insertedLastRowType;
-(unsigned long long)composingUpdate;
@end
