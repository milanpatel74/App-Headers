/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:25 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizer.h>

@protocol FBVideoFilmstripScrubGestureRecognizerDelegate;
@interface FBVideoFilmstripScrubGestureRecognizer : UIGestureRecognizer {

	id<FBVideoFilmstripScrubGestureRecognizerDelegate> _scrubDelegate;

}

@property (assign,nonatomic,__weak) id<FBVideoFilmstripScrubGestureRecognizerDelegate> scrubDelegate;              //@synthesize scrubDelegate=_scrubDelegate - In the implementation block
-(id<FBVideoFilmstripScrubGestureRecognizerDelegate>)scrubDelegate;
-(void)setScrubDelegate:(id<FBVideoFilmstripScrubGestureRecognizerDelegate>)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
@end

