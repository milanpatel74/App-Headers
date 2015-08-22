/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:31 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIControl.h>

@class CALayer, UILabel, UISwitch;

@interface T1PreciseLocationSwitch : UIControl {

	CALayer* _topBorderLayer;
	UILabel* _locationPromptLabel;
	UILabel* _locationCoordinatesLabel;
	UISwitch* _locationShareSwitch;

}

@property (assign,getter=isOn,nonatomic) BOOL on; 
@property (nonatomic,retain) CALayer * topBorderLayer;                        //@synthesize topBorderLayer=_topBorderLayer - In the implementation block
@property (nonatomic,retain) UILabel * locationPromptLabel;                   //@synthesize locationPromptLabel=_locationPromptLabel - In the implementation block
@property (nonatomic,retain) UILabel * locationCoordinatesLabel;              //@synthesize locationCoordinatesLabel=_locationCoordinatesLabel - In the implementation block
@property (nonatomic,retain) UISwitch * locationShareSwitch;                  //@synthesize locationShareSwitch=_locationShareSwitch - In the implementation block
-(id)initWithLocationCoordinateText:(id)arg1 ;
-(void)_locationSwitchDidChangeOnState:(id)arg1 ;
-(CALayer *)topBorderLayer;
-(UISwitch *)locationShareSwitch;
-(UILabel *)locationPromptLabel;
-(UILabel *)locationCoordinatesLabel;
-(void)setTopBorderLayer:(CALayer *)arg1 ;
-(void)setLocationPromptLabel:(UILabel *)arg1 ;
-(void)setLocationCoordinatesLabel:(UILabel *)arg1 ;
-(void)setLocationShareSwitch:(UISwitch *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(void)setOn:(BOOL)arg1 ;
-(BOOL)isOn;
@end
