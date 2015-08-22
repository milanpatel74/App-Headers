/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCoding.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface FBStarRatingsState : NSObject <NSCoding, NSCopying> {

	unsigned long long _completionState;
	unsigned long long _numStars;
	NSString* _comment;
	unsigned long long _completionTime;

}

@property (nonatomic,readonly) unsigned long long completionState;              //@synthesize completionState=_completionState - In the implementation block
@property (assign,nonatomic) unsigned long long numStars;                       //@synthesize numStars=_numStars - In the implementation block
@property (nonatomic,copy) NSString * comment;                                  //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) unsigned long long completionTime;               //@synthesize completionTime=_completionTime - In the implementation block
-(unsigned long long)numStars;
-(unsigned long long)completionTime;
-(unsigned long long)completionState;
-(void)setNumStars:(unsigned long long)arg1 ;
-(void)setTimeAndSetCompletionState:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setComment:(NSString *)arg1 ;
-(NSString *)comment;
@end
