/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:23 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBComposerPoll : FBValueObject <NSCopying> {

	BOOL _canOthersAddOptions;
	BOOL _canOthersVoteOnMultipleOptions;
	NSArray* _pollOptions;

}

@property (nonatomic,copy,readonly) NSArray * pollOptions;                       //@synthesize pollOptions=_pollOptions - In the implementation block
@property (nonatomic,readonly) BOOL canOthersAddOptions;                         //@synthesize canOthersAddOptions=_canOthersAddOptions - In the implementation block
@property (nonatomic,readonly) BOOL canOthersVoteOnMultipleOptions;              //@synthesize canOthersVoteOnMultipleOptions=_canOthersVoteOnMultipleOptions - In the implementation block
-(id)initWithPollOptions:(id)arg1 canOthersAddOptions:(BOOL)arg2 canOthersVoteOnMultipleOptions:(BOOL)arg3 ;
-(NSArray *)pollOptions;
-(BOOL)canOthersAddOptions;
-(BOOL)canOthersVoteOnMultipleOptions;
@end
