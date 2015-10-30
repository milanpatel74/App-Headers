/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIImage.h>

@class NSArray, OLImageSourceArray;

@interface OLImage : UIImage {

	NSArray* images;
	double* _frameDurations;
	double _totalDuration;
	unsigned long long _loopCount;
	CGImageSourceRef _incrementalSource;
	OLImageSourceArray* _imageSourceArray;

}

@property (getter=isPartial,nonatomic,readonly) BOOL partial; 
@property (assign,nonatomic) double* frameDurations;                             //@synthesize frameDurations=_frameDurations - In the implementation block
@property (assign,nonatomic) double totalDuration;                               //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) unsigned long long loopCount;                       //@synthesize loopCount=_loopCount - In the implementation block
@property (assign,nonatomic) CGImageSourceRef incrementalSource;                 //@synthesize incrementalSource=_incrementalSource - In the implementation block
@property (nonatomic,retain) OLImageSourceArray * imageSourceArray;              //@synthesize imageSourceArray=_imageSourceArray - In the implementation block
+(id)imageWithIncrementalData:(id)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithData:(id)arg1 scale:(double)arg2 ;
-(void)updateWithData:(id)arg1 final:(BOOL)arg2 ;
-(void)updateDurations;
-(BOOL)isPartial;
-(void)updateWithData:(id)arg1 ;
-(unsigned long long)loopCount;
-(id)initWithCGImageSource:(CGImageSourceRef)arg1 scale:(double)arg2 ;
-(void)setFrameDurations:(double*)arg1 ;
-(void)setLoopCount:(unsigned long long)arg1 ;
-(double*)frameDurations;
-(void)setImageSourceArray:(OLImageSourceArray *)arg1 ;
-(OLImageSourceArray *)imageSourceArray;
-(CGImageSourceRef)incrementalSource;
-(void)setIncrementalSource:(CGImageSourceRef)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(double)duration;
-(double)scale;
-(CGImageRef)CGImage;
-(long long)imageOrientation;
-(id)images;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithData:(id)arg1 scale:(double)arg2 ;
-(double)totalDuration;
-(void)setTotalDuration:(double)arg1 ;
@end
