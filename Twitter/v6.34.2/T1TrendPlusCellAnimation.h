/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:23 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class T1TrendPlusView;

@interface T1TrendPlusCellAnimation : NSObject {

	BOOL _removed;
	T1TrendPlusView* _toView;

}

@property (nonatomic,readonly) BOOL removed;                        //@synthesize removed=_removed - In the implementation block
@property (nonatomic,retain) T1TrendPlusView * toView;              //@synthesize toView=_toView - In the implementation block
+(Class)animationClassWithTrendChangeType:(unsigned long long)arg1 ;
-(void)animateCell:(id)arg1 toView:(id)arg2 afterDelay:(double)arg3 ;
-(void)_cell:(id)arg1 prepareForAnimationToView:(id)arg2 ;
-(void)_cell:(id)arg1 completeAnimationFromView:(id)arg2 toView:(id)arg3 ;
-(void)_animateTrendinessImageViewFromViewIfNecessary:(id)arg1 ;
-(BOOL)removed;
-(T1TrendPlusView *)toView;
-(void)setToView:(T1TrendPlusView *)arg1 ;
-(void)remove;
@end
