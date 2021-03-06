/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:04 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBRichTextView, FBReactionSportsFootballLiveHeaderFieldHeaderView, FBReactionSportsFootballLiveHeaderFieldChartView, NSString, UIColor;

@interface FBReactionSportsFootballLiveHeaderFieldView : UIView {

	UIView* _positionBackgroundView;
	FBRichTextView* _defaultTextView;
	FBReactionSportsFootballLiveHeaderFieldHeaderView* _currentPositionView;
	FBReactionSportsFootballLiveHeaderFieldHeaderView* _firstDownView;
	FBReactionSportsFootballLiveHeaderFieldChartView* _chartView;
	NSString* _homeTeam;
	NSString* _awayTeam;
	NSString* _teamWithBall;
	UIColor* _homeTeamColor;
	UIColor* _awayTeamColor;
	double _currentPositionYardLine;
	double _firstDownYardLine;
	unsigned long long _direction;

}
+(double)desiredHeight;
-(double)_getPixelStartForYardLine:(double)arg1 ;
-(void)_animateFrameForHeaderView:(id)arg1 startPosition:(double)arg2 ;
-(id)initWithHomeTeamName:(id)arg1 awayTeamName:(id)arg2 homeTeamColor:(id)arg3 awayTeamColor:(id)arg4 ;
-(void)updateViewForTeamWithBall:(id)arg1 positionSide:(id)arg2 positionYardLine:(long long)arg3 yardsBeforeFirstDown:(long long)arg4 defaultText:(id)arg5 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

