/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class GADBinaryHeap, NSString;

@interface GADContent : NSObject {

	long long _contentAgeWeight;
	long long _contentLengthWeight;
	unsigned long long _contentTotalLength;
	GADBinaryHeap* _heap;
	unsigned long long _maximumShingleCount;
	unsigned long long _minimumParagraphLength;
	unsigned long long _shingleLength;
	NSString* _fingerprint;
	long long _score;
	unsigned long long _sequenceNumber;

}

@property (nonatomic,readonly) NSString * fingerprint;                         //@synthesize fingerprint=_fingerprint - In the implementation block
@property (nonatomic,readonly) long long score;                                //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
-(void)selectShinglesFromTokens:(id)arg1 ;
-(id)shingleHash;
-(void)updateHeapWithHash:(unsigned long long)arg1 shingle:(id)arg2 ;
-(void)deductServedPenalty;
-(void)updateContentWithText:(id)arg1 ;
-(unsigned long long)sequenceNumber;
-(id)initWithSequenceNumber:(unsigned long long)arg1 ;
-(NSString *)fingerprint;
-(long long)score;
@end
