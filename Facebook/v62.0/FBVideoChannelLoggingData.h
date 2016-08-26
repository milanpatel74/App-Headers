/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBVideoChannelLoggingData : FBValueObject <NSCopying> {

	NSString* _event;
	NSString* _channelID;
	NSString* _positionInChannel;
	NSString* _eventTarget;
	NSString* _eventTargetInfo;
	NSString* _storyID;
	NSArray* _trackingCodes;
	NSString* _videoHomeSessionID;

}

@property (nonatomic,copy,readonly) NSString * event;                           //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * positionInChannel;               //@synthesize positionInChannel=_positionInChannel - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventTarget;                     //@synthesize eventTarget=_eventTarget - In the implementation block
@property (nonatomic,copy,readonly) NSString * eventTargetInfo;                 //@synthesize eventTargetInfo=_eventTargetInfo - In the implementation block
@property (nonatomic,copy,readonly) NSString * storyID;                         //@synthesize storyID=_storyID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                    //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoHomeSessionID;              //@synthesize videoHomeSessionID=_videoHomeSessionID - In the implementation block
-(NSArray *)trackingCodes;
-(NSString *)videoHomeSessionID;
-(NSString *)channelID;
-(NSString *)storyID;
-(NSString *)positionInChannel;
-(id)initWithEvent:(id)arg1 channelID:(id)arg2 positionInChannel:(id)arg3 eventTarget:(id)arg4 eventTargetInfo:(id)arg5 storyID:(id)arg6 trackingCodes:(id)arg7 videoHomeSessionID:(id)arg8 ;
-(NSString *)eventTarget;
-(NSString *)eventTargetInfo;
-(NSString *)event;
@end
