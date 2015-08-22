/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSArray;

@interface T1AnimatedGifImage : NSObject {

	CGImageSourceRef _imageSource;
	NSArray* _frames;
	unsigned long long _frameCount;
	double _duration;
	unsigned long long _loopCount;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                                //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned long long frameCount;              //@synthesize frameCount=_frameCount - In the implementation block
@property (nonatomic,readonly) double duration;                            //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) unsigned long long loopCount;               //@synthesize loopCount=_loopCount - In the implementation block
-(id)initWithAnimatedGifData:(id)arg1 ;
-(unsigned long long)indexAtTimeInterval:(double)arg1 ;
-(unsigned long long)loopCount;
-(void)dealloc;
-(CGSize)size;
-(id)init;
-(double)duration;
-(unsigned long long)frameCount;
-(id)imageAtIndex:(unsigned long long)arg1 ;
@end
