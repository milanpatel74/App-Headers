/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:53:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D5AA3D7F-F68B-43D8-8CC1-85DAFE886350/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class BITFeedbackMessage, BITAttributedLabel, NSDateFormatter, UILabel;

@interface BITFeedbackListViewCell : UITableViewCell {

	BITFeedbackMessage* _message;
	unsigned long long _style;
	unsigned long long _backgroundStyle;
	BITAttributedLabel* _labelText;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	UILabel* _labelTitle;

}

@property (nonatomic,retain) BITFeedbackMessage * message;                    //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned long long style;                        //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundStyle;              //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,retain) BITAttributedLabel * labelText;                  //@synthesize labelText=_labelText - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                 //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * timeFormatter;                 //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (nonatomic,retain) UILabel * labelTitle;                            //@synthesize labelTitle=_labelTitle - In the implementation block
+(double)heightForRowWithMessage:(id)arg1 tableViewWidth:(double)arg2 ;
-(void)setLabelTitle:(UILabel *)arg1 ;
-(UILabel *)labelTitle;
-(BOOL)isSameDayWithDate1:(id)arg1 date2:(id)arg2 ;
-(id)backgroundColor;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(unsigned long long)backgroundStyle;
-(void)setBackgroundStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BITFeedbackMessage *)message;
-(void)setMessage:(BITFeedbackMessage *)arg1 ;
-(BITAttributedLabel *)labelText;
-(void)setLabelText:(BITAttributedLabel *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(NSDateFormatter *)timeFormatter;
-(NSDateFormatter *)dateFormatter;
-(void)setTimeFormatter:(NSDateFormatter *)arg1 ;
@end
