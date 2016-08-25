/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:13 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BubbleMania/S8LogTracker.h>

@class NSString;

@interface S8LogIAPTracker : S8LogTracker {

	NSString* _channel;
	NSString* _channelContext;

}

@property (nonatomic,retain) NSString * channel;                     //@synthesize channel=_channel - In the implementation block
@property (nonatomic,retain) NSString * channelContext;              //@synthesize channelContext=_channelContext - In the implementation block
-(Class)trackDataClass;
-(BOOL)useExtendedTrackId;
-(id)schemaKeyArray;
-(id)constructArrayWithTrackData:(id)arg1 ;
-(NSString *)channelContext;
-(void)setChannelContext:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setChannel:(NSString *)arg1 ;
-(NSString *)channel;
-(id)categoryName;
@end
