/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:43 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/NSCoding.h>

@class FBUploadPartition, NSError;

@interface FBSegmentedUploadPartitionState : NSObject <NSCoding> {

	FBUploadPartition* _partition;
	NSError* _segmentError;
	long long _numUploadRequestsInFlight;
	NSRange _nextChunkRangeInSegment;

}

@property (nonatomic,retain) FBUploadPartition * partition;                    //@synthesize partition=_partition - In the implementation block
@property (nonatomic,retain) NSError * segmentError;                           //@synthesize segmentError=_segmentError - In the implementation block
@property (assign,nonatomic) NSRange nextChunkRangeInSegment;                  //@synthesize nextChunkRangeInSegment=_nextChunkRangeInSegment - In the implementation block
@property (assign,nonatomic) long long numUploadRequestsInFlight;              //@synthesize numUploadRequestsInFlight=_numUploadRequestsInFlight - In the implementation block
+(id)propertiesToSkipForCoding;
-(id)initWithPartition:(id)arg1 ;
-(FBUploadPartition *)partition;
-(NSRange)nextChunkRangeInSegment;
-(long long)numUploadRequestsInFlight;
-(void)setNumUploadRequestsInFlight:(long long)arg1 ;
-(void)setNextChunkRangeInSegment:(NSRange)arg1 ;
-(BOOL)isUploadCompleted;
-(void)setSegmentError:(NSError *)arg1 ;
-(void)setPartition:(FBUploadPartition *)arg1 ;
-(NSError *)segmentError;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
