/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CSStreamSense, NSMutableDictionary, NSArray;

@interface CSStreamingTag : NSObject {

	BOOL _lastMediaWasContent;
	int _clipNumber;
	int _lastPlayedContentType;
	CSStreamSense* _streamSense;
	long long _lastPlayTimestamp;
	long long _lastCalculatedPosition;
	NSMutableDictionary* _lastMetadata;
	NSArray* _requiredLabels;

}

@property (nonatomic,retain) CSStreamSense * streamSense;                     //@synthesize streamSense=_streamSense - In the implementation block
@property (assign) long long lastPlayTimestamp;                               //@synthesize lastPlayTimestamp=_lastPlayTimestamp - In the implementation block
@property (assign) long long lastCalculatedPosition;                          //@synthesize lastCalculatedPosition=_lastCalculatedPosition - In the implementation block
@property (assign) int clipNumber;                                            //@synthesize clipNumber=_clipNumber - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * lastMetadata;              //@synthesize lastMetadata=_lastMetadata - In the implementation block
@property (assign) BOOL lastMediaWasContent;                                  //@synthesize lastMediaWasContent=_lastMediaWasContent - In the implementation block
@property (assign) int lastPlayedContentType;                                 //@synthesize lastPlayedContentType=_lastPlayedContentType - In the implementation block
@property (nonatomic,retain) NSArray * requiredLabels;                        //@synthesize requiredLabels=_requiredLabels - In the implementation block
-(void)setLastMetadata:(NSMutableDictionary *)arg1 ;
-(void)setRequiredLabels:(NSArray *)arg1 ;
-(void)setStreamSense:(CSStreamSense *)arg1 ;
-(CSStreamSense *)streamSense;
-(NSArray *)requiredLabels;
-(long long)positionUntil:(long long)arg1 ;
-(id)initializeMetadata:(id)arg1 ;
-(BOOL)isLastMetadataSameAs:(id)arg1 ;
-(void)sendPlayForNewContent:(id)arg1 timestamp:(long long)arg2 ;
-(void)handlePlayContentPartWithMetadata:(id)arg1 withContentType:(int)arg2 ;
-(void)playVideoContentPartWithMetadata:(id)arg1 andMediaType:(int)arg2 ;
-(void)playAudioContentPartWithMetadata:(id)arg1 andMediaType:(int)arg2 ;
-(void)notifyEndIfNeed:(long long)arg1 ;
-(void)handlePlayAdvertisementWithMetadata:(id)arg1 ;
-(void)playVideoAdvertisementWithMetadata:(id)arg1 ;
-(void)playVideoAdvertisementWithMetadata:(id)arg1 andMediaType:(int)arg2 ;
-(void)playAudioAdvertisementWithMetadata:(id)arg1 ;
-(void)playAudioAdvertisementWithMetadata:(id)arg1 andMediaType:(int)arg2 ;
-(BOOL)isSameLabel:(id)arg1 equalIn:(id)arg2 andIn:(id)arg3 ;
-(void)playContentPartWithMetadata:(id)arg1 ;
-(void)playVideoContentPartWithMetadata:(id)arg1 ;
-(void)playAudioContentPartWithMetadata:(id)arg1 ;
-(void)playAdvertisement;
-(void)playVideoAdvertisement;
-(void)playAudioAdvertisement;
-(long long)lastPlayTimestamp;
-(void)setLastPlayTimestamp:(long long)arg1 ;
-(long long)lastCalculatedPosition;
-(void)setLastCalculatedPosition:(long long)arg1 ;
-(int)clipNumber;
-(void)setClipNumber:(int)arg1 ;
-(NSMutableDictionary *)lastMetadata;
-(BOOL)lastMediaWasContent;
-(void)setLastMediaWasContent:(BOOL)arg1 ;
-(int)lastPlayedContentType;
-(void)setLastPlayedContentType:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(void)stop;
@end
