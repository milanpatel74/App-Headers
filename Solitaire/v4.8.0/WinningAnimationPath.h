/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/WinningAnimation.h>

@class NSArray;

@interface WinningAnimationPath : WinningAnimation {

	int destination[52];
	BOOL cleanedUp;
	int pathSkip;
	NSArray* path;
	NSArray* customPathSkip;
	double startTime;

}

@property (retain) NSArray * path; 
@property (assign) int pathSkip; 
@property (retain) NSArray * customPathSkip; 
@property (assign) double startTime; 
@property (assign) BOOL cleanedUp; 
-(id)generateCirclePath:(int)arg1 startingAngle:(double)arg2 angleOffset:(double)arg3 ;
-(void)setCustomPathSkip:(NSArray *)arg1 ;
-(void)setPathSkip:(int)arg1 ;
-(void)animPath;
-(void)animPathDidStop:(int)arg1 ;
-(BOOL)cleanedUp;
-(void)setCleanedUp:(BOOL)arg1 ;
-(void)animPathDidStop2;
-(id)arrayFromInts:(int*)arg1 length:(int)arg2 ;
-(void)animInterestingCirclePath:(int)arg1 skip:(int)arg2 ;
-(int)pathSkip;
-(NSArray *)customPathSkip;
-(void)setStartTime:(double)arg1 ;
-(NSArray *)path;
-(void)setPath:(NSArray *)arg1 ;
-(double)startTime;
@end
