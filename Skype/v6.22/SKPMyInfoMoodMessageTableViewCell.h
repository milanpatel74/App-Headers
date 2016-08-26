/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:44:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/BCB8F06C-D639-4947-A2BF-415A0A66C023/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKTableViewCell.h>

@class NSString, SKPAttributedLabel, UIView;

@interface SKPMyInfoMoodMessageTableViewCell : MKTableViewCell {

	NSString* _moodMessage;
	SKPAttributedLabel* _moodMessageLabel;
	UIView* _moodMessageLabelUndeline;

}

@property (nonatomic,retain) SKPAttributedLabel * moodMessageLabel;              //@synthesize moodMessageLabel=_moodMessageLabel - In the implementation block
@property (nonatomic,retain) UIView * moodMessageLabelUndeline;                  //@synthesize moodMessageLabelUndeline=_moodMessageLabelUndeline - In the implementation block
@property (nonatomic,retain) NSString * moodMessage;                             //@synthesize moodMessage=_moodMessage - In the implementation block
+(id)reuseIdentifier;
+(double)cellHeight;
-(NSString *)moodMessage;
-(void)setMoodMessage:(NSString *)arg1 ;
-(void)setMoodMessageLabel:(SKPAttributedLabel *)arg1 ;
-(SKPAttributedLabel *)moodMessageLabel;
-(void)setupLayout;
-(void)setMoodMessageLabelUndeline:(UIView *)arg1 ;
-(UIView *)moodMessageLabelUndeline;
-(id)accessibilityLabel;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
@end
