/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Messenger/Messenger-Structs.h>
@class FBAudioCopyrightConfig, NSMutableData;

@interface FBAudioFingerprint : NSObject {

	FBAudioCopyrightConfig* _copyrightConfig;
	NSMutableData* _data;
	NSRange _newDataRange;
	NSRange _overlapRange;

}

@property (nonatomic,readonly) FBAudioCopyrightConfig * copyrightConfig;              //@synthesize copyrightConfig=_copyrightConfig - In the implementation block
@property (nonatomic,readonly) NSMutableData * data;                                  //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSRange newDataRange;                                  //@synthesize newDataRange=_newDataRange - In the implementation block
@property (nonatomic,readonly) NSRange overlapRange;                                  //@synthesize overlapRange=_overlapRange - In the implementation block
+(void)saveFingerprintToFile:(id)arg1 ;
-(id)initWithAudioCopyrightConfig:(id)arg1 ;
-(double)sampleDuration;
-(id)checkFingerprints;
-(FBAudioCopyrightConfig *)copyrightConfig;
-(unsigned long long)sampleLength;
-(void)startNextSample;
-(NSRange)newDataRange;
-(NSRange)overlapRange;
-(NSMutableData *)data;
-(void)addData:(opaqueCMSampleBufferRef)arg1 ;
@end
