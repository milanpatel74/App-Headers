/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, October 14, 2015 at 2:50:29 PM British Summer Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/34410EF6-4E83-412E-A9C2-1231076AA068/Palaver.app/Palaver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLVIRCSupport : NSObject {

	NSString* _zncPrefix;
	NSArray* _channelPrefixes;
	NSArray* _channelUserPrefixes;
	NSArray* _channelUserModes;
	NSArray* _channelModesA;
	NSArray* _channelModesB;
	NSArray* _channelModesC;
	NSArray* _channelModesD;
	unsigned long long _maximumNickLength;
	unsigned long long _maximumChannelLength;

}

@property (nonatomic,retain) NSString * zncPrefix;                                   //@synthesize zncPrefix=_zncPrefix - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelPrefixes;                       //@synthesize channelPrefixes=_channelPrefixes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelUserPrefixes;                   //@synthesize channelUserPrefixes=_channelUserPrefixes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelUserModes;                      //@synthesize channelUserModes=_channelUserModes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelModesA;                         //@synthesize channelModesA=_channelModesA - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelModesB;                         //@synthesize channelModesB=_channelModesB - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelModesC;                         //@synthesize channelModesC=_channelModesC - In the implementation block
@property (nonatomic,copy,readonly) NSArray * channelModesD;                         //@synthesize channelModesD=_channelModesD - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumNickLength;                 //@synthesize maximumNickLength=_maximumNickLength - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumChannelLength;              //@synthesize maximumChannelLength=_maximumChannelLength - In the implementation block
-(BOOL)isChannel:(id)arg1 ;
-(NSArray *)channelUserPrefixes;
-(id)modeForChannelUserPrefix:(id)arg1 ;
-(NSString *)zncPrefix;
-(NSArray *)channelModesA;
-(NSArray *)channelModesB;
-(NSArray *)channelModesC;
-(NSArray *)channelModesD;
-(NSArray *)channelUserModes;
-(void)parseIRCSupportKey:(id)arg1 value:(id)arg2 ;
-(unsigned long long)maximumChannelLength;
-(NSArray *)channelPrefixes;
-(unsigned long long)maximumNickLength;
-(id)IRCSupportKeysByPropertyKey;
-(BOOL)isNickname:(id)arg1 ;
-(id)channelPrefixesIRCSupportTransformer;
-(id)maximumNickLengthIRCSupportTransformer;
-(id)maximumChannelLengthIRCSupportTransformer;
-(id)channelUserPrefixesIRCSupportTransformer;
-(id)channelUserModesIRCSupportTransformer;
-(id)channelModesAIRCSupportTransformer;
-(id)channelModesBIRCSupportTransformer;
-(id)channelModesCIRCSupportTransformer;
-(id)channelModesDIRCSupportTransformer;
-(void)setZncPrefix:(NSString *)arg1 ;
-(id)init;
@end
