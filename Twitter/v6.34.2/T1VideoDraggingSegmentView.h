/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:28 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class T1VideoSegmentThumbnailView;

@interface T1VideoDraggingSegmentView : UIView {

	CGPoint _dragOffset;
	T1VideoSegmentThumbnailView* _dragImageView;
	CGPoint _dragStartLocation;
	CGPoint _dragLocation;

}

@property (assign,nonatomic) CGPoint dragStartLocation;                                  //@synthesize dragStartLocation=_dragStartLocation - In the implementation block
@property (assign,nonatomic) CGPoint dragLocation;                                       //@synthesize dragLocation=_dragLocation - In the implementation block
@property (nonatomic,readonly) T1VideoSegmentThumbnailView * dragImageView;              //@synthesize dragImageView=_dragImageView - In the implementation block
-(CGPoint)dragImageCenterInView:(id)arg1 ;
-(T1VideoSegmentThumbnailView *)dragImageView;
-(void)setDragStartLocation:(CGPoint)arg1 ;
-(void)setDragLocation:(CGPoint)arg1 ;
-(void)setDragImageMagnification:(double)arg1 ;
-(CGPoint)dragStartLocation;
-(CGPoint)dragLocation;
-(id)initWithFrame:(CGRect)arg1 ;
@end
